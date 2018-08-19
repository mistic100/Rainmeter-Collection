const fs = require('fs');

const LR = 0;
const GRAD = 1;

const nbBands = 10;
const nbCircles = 4;
const mode = GRAD;

var content = `
[Variables]`;

// angles and grid constants
for (var i = 1; i <= nbBands; i++) {
  content += `
Angle${i}=(${(i-1)} * PI / ${nbBands / 2})
Grid${i}X=(Cos(#Angle${i}#) * (#Size# / 2 - #BorderWidth#) + #Size# / 2)
Grid${i}Y=(Sin(#Angle${i}#) * (#Size# / 2 - #BorderWidth#) + #Size# / 2)
`;
}

// measures
for (var i = 1; i <= nbBands; i++) {
  if (mode == LR) {
    content += `
[Audio${i}L]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
Channel=L
BandIdx=${i-1}

[Audio${i}R]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
Channel=R
BandIdx=${i-1}

[AudioFreq${i}]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=BandFreq
BandIdx=${i-1}
`;
  } else {
    content += `
[Audio${i}]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
BandIdx=${i-1}

[AudioFreq${i}]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=BandFreq
BandIdx=${i-1}
`;
  }
}

// grid lines
for (var i = 1; i <= nbBands; i++) {
  content += `
[GridLine${i}]
Meter=Roundline
X=(#Size# / 2)
Y=(#Size# / 2)
LineColor=#GridColor#
LineWidth=#GridWidth#
LineLength=(Sqrt((#Size# / 2 - #Grid${i}X#)**2 + (#Size# / 2 - #Grid${i}Y#)**2))
RotationAngle=(Atan2(#Grid${i}Y# - #Size# / 2, #Grid${i}X# - #Size# / 2))
AntiAlias=1
`;
}

// grid circles
for (var i = 1; i < nbCircles; i++) {
  content += `
[GridCircle${i}]
Meter=Roundline
X=0
Y=0
W=#Size#
H=#Size#
LineLength=(${i / nbCircles / 2} * (#Size# - #BorderWidth# * 2))
LineStart=(${i / nbCircles / 2} * (#Size# - #BorderWidth# * 2) - #GridWidth#)
LineColor=#GridColor#
Solid=1
AntiAlias=1
`;
}

// labels
for (var i = 1; i <= nbBands; i++) {
  content += `
[Label${i}]
Meter=String
MeasureName=AudioFreq${i}
Text=%1 Hz
X=(Cos(#Angle${i}#) * (#Size# / 2 - #LabelOffset#) + #Size# / 2)
Y=(Sin(#Angle${i}#) * (#Size# / 2 - #LabelOffset#) + #Size# / 2)
Angle=(((#Angle${i}# > PI/2) && (#Angle${i}# < 3*PI/2)) ? (#Angle${i}# - PI) : #Angle${i}#)
;Angle=#Angle${i}#
H=20
W=80
StringAlign=CenterCenter
FontSize=#LabelSize#
FontColor=#LabelColor#
AntiAlias=1
`;
}

// points
for (var i = 1; i <= nbBands; i++) {
  if (mode == LR) {
    content += `
[Point${i}L]
Meter=Image
X=(Cos(#Angle${i}#) * ([Audio${i}L] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle${i}#) * ([Audio${i}L] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point${i}R]
Meter=Image
X=(Cos(#Angle${i}#) * ([Audio${i}R] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle${i}#) * ([Audio${i}R] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1
`;
  } else {
    content += `
[Point${i}]
Meter=Image
X=(Cos(#Angle${i}#) * ([Audio${i}] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle${i}#) * ([Audio${i}] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1
`;
  }
}

// lines
for (var i = 1; i <= nbBands; i++) {
  var n = i == nbBands ? 1 : i+1;
  if (mode == LR) {
    content += `
[Line${i}L-${n}L]
Meter=Roundline
X=[Point${i}L:X])
Y=[Point${i}L:Y])
LineColor=#LineColorLeft#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point${i}L:X] - [Point${n}L:X])**2 + ([Point${i}L:Y] - [Point${n}L:Y])**2))
RotationAngle=(Atan2([Point${n}L:Y] - [Point${i}L:Y], [Point${n}L:X] - [Point${i}L:X]))
AntiAlias=1
DynamicVariables=1
${i==nbBands?'Hidden=(1-#CloseLine#)':''}

[Line${i}R-${n}R]
Meter=Roundline
X=[Point${i}R:X]
Y=[Point${i}R:Y]
LineColor=#LineColorRight#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point${i}R:X] - [Point${n}R:X])**2 + ([Point${i}R:Y] - [Point${n}R:Y])**2))
RotationAngle=(Atan2([Point${n}R:Y] - [Point${i}R:Y], [Point${n}R:X] - [Point${i}R:X]))
AntiAlias=1
DynamicVariables=1
${i==nbBands?'Hidden=(1-#CloseLine#)':''}
`;
  } else {
    content += `
[Line${i}-${n}]
Meter=Roundline
X=[Point${i}:X])
Y=[Point${i}:Y])
LineColor=([Audio${i}]<#MiddlePoint# ? (#Color1R#+[Audio${i}]*(#Color2R#-#Color1R#)/#MiddlePoint#) : (#Color2R#+([Audio${i}]-#MiddlePoint#)*(#Color3R#-#Color2R#)/(1-#MiddlePoint#))),([Audio${i}]<#MiddlePoint# ? (#Color1G#+[Audio${i}]*(#Color2G#-#Color1G#)/#MiddlePoint#) : (#Color2G#+([Audio${i}]-#MiddlePoint#)*(#Color3G#-#Color2G#)/(1-#MiddlePoint#))),([Audio${i}]<#MiddlePoint# ? (#Color1B#+[Audio${i}]*(#Color2B#-#Color1B#)/#MiddlePoint#) : (#Color2B#+([Audio${i}]-#MiddlePoint#)*(#Color3B#-#Color2B#)/(1-#MiddlePoint#))),#LineAlpha#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point${i}:X] - [Point${n}:X])**2 + ([Point${i}:Y] - [Point${n}:Y])**2))
RotationAngle=(Atan2([Point${n}:Y] - [Point${i}:Y], [Point${n}:X] - [Point${i}:X]))
AntiAlias=1
DynamicVariables=1
${i==nbBands?'Hidden=(1-#CloseLine#)':''}
`;
  }
}

// dots
for (var i = 1; i <= nbBands; i++) {
  if (mode == LR) {
    content += `
[Dot${i}L]
Meter=Roundline
X=([Point${i}L:X] - #PointSize# / 2)
Y=([Point${i}L:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=#PointColorLeft#
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot${i}R]
Meter=Roundline
X=([Point${i}R:X] - #PointSize# / 2)
Y=([Point${i}R:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=#PointColorRight#
Solid=1
DynamicVariables=1
AntiAlias=1
`;
  } else {
    content += `
[Dot${i}]
Meter=Roundline
X=([Point${i}:X] - #PointSize# / 2)
Y=([Point${i}:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=([Audio${i}]<#MiddlePoint# ? (#Color1R#+[Audio${i}]*(#Color2R#-#Color1R#)/#MiddlePoint#) : (#Color2R#+([Audio${i}]-#MiddlePoint#)*(#Color3R#-#Color2R#)/(1-#MiddlePoint#))),([Audio${i}]<#MiddlePoint# ? (#Color1G#+[Audio${i}]*(#Color2G#-#Color1G#)/#MiddlePoint#) : (#Color2G#+([Audio${i}]-#MiddlePoint#)*(#Color3G#-#Color2G#)/(1-#MiddlePoint#))),([Audio${i}]<#MiddlePoint# ? (#Color1B#+[Audio${i}]*(#Color2B#-#Color1B#)/#MiddlePoint#) : (#Color2B#+([Audio${i}]-#MiddlePoint#)*(#Color3B#-#Color2B#)/(1-#MiddlePoint#)))
Solid=1
DynamicVariables=1
AntiAlias=1
`;
  }
}

fs.writeFileSync(`Generated-${mode}.inc`, content);