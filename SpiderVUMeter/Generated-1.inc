
[Variables]
Angle1=(0 * PI / 5)
Grid1X=(Cos(#Angle1#) * (#Size# / 2 - #BorderWidth#) + #Size# / 2)
Grid1Y=(Sin(#Angle1#) * (#Size# / 2 - #BorderWidth#) + #Size# / 2)

Angle2=(1 * PI / 5)
Grid2X=(Cos(#Angle2#) * (#Size# / 2 - #BorderWidth#) + #Size# / 2)
Grid2Y=(Sin(#Angle2#) * (#Size# / 2 - #BorderWidth#) + #Size# / 2)

Angle3=(2 * PI / 5)
Grid3X=(Cos(#Angle3#) * (#Size# / 2 - #BorderWidth#) + #Size# / 2)
Grid3Y=(Sin(#Angle3#) * (#Size# / 2 - #BorderWidth#) + #Size# / 2)

Angle4=(3 * PI / 5)
Grid4X=(Cos(#Angle4#) * (#Size# / 2 - #BorderWidth#) + #Size# / 2)
Grid4Y=(Sin(#Angle4#) * (#Size# / 2 - #BorderWidth#) + #Size# / 2)

Angle5=(4 * PI / 5)
Grid5X=(Cos(#Angle5#) * (#Size# / 2 - #BorderWidth#) + #Size# / 2)
Grid5Y=(Sin(#Angle5#) * (#Size# / 2 - #BorderWidth#) + #Size# / 2)

Angle6=(5 * PI / 5)
Grid6X=(Cos(#Angle6#) * (#Size# / 2 - #BorderWidth#) + #Size# / 2)
Grid6Y=(Sin(#Angle6#) * (#Size# / 2 - #BorderWidth#) + #Size# / 2)

Angle7=(6 * PI / 5)
Grid7X=(Cos(#Angle7#) * (#Size# / 2 - #BorderWidth#) + #Size# / 2)
Grid7Y=(Sin(#Angle7#) * (#Size# / 2 - #BorderWidth#) + #Size# / 2)

Angle8=(7 * PI / 5)
Grid8X=(Cos(#Angle8#) * (#Size# / 2 - #BorderWidth#) + #Size# / 2)
Grid8Y=(Sin(#Angle8#) * (#Size# / 2 - #BorderWidth#) + #Size# / 2)

Angle9=(8 * PI / 5)
Grid9X=(Cos(#Angle9#) * (#Size# / 2 - #BorderWidth#) + #Size# / 2)
Grid9Y=(Sin(#Angle9#) * (#Size# / 2 - #BorderWidth#) + #Size# / 2)

Angle10=(9 * PI / 5)
Grid10X=(Cos(#Angle10#) * (#Size# / 2 - #BorderWidth#) + #Size# / 2)
Grid10Y=(Sin(#Angle10#) * (#Size# / 2 - #BorderWidth#) + #Size# / 2)

[Audio1]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
BandIdx=0

[AudioFreq1]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=BandFreq
BandIdx=0

[Audio2]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
BandIdx=1

[AudioFreq2]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=BandFreq
BandIdx=1

[Audio3]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
BandIdx=2

[AudioFreq3]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=BandFreq
BandIdx=2

[Audio4]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
BandIdx=3

[AudioFreq4]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=BandFreq
BandIdx=3

[Audio5]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
BandIdx=4

[AudioFreq5]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=BandFreq
BandIdx=4

[Audio6]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
BandIdx=5

[AudioFreq6]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=BandFreq
BandIdx=5

[Audio7]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
BandIdx=6

[AudioFreq7]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=BandFreq
BandIdx=6

[Audio8]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
BandIdx=7

[AudioFreq8]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=BandFreq
BandIdx=7

[Audio9]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
BandIdx=8

[AudioFreq9]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=BandFreq
BandIdx=8

[Audio10]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
BandIdx=9

[AudioFreq10]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=BandFreq
BandIdx=9

[GridLine1]
Meter=Roundline
X=(#Size# / 2)
Y=(#Size# / 2)
LineColor=#GridColor#
LineWidth=#GridWidth#
LineLength=(Sqrt((#Size# / 2 - #Grid1X#)**2 + (#Size# / 2 - #Grid1Y#)**2))
RotationAngle=(Atan2(#Grid1Y# - #Size# / 2, #Grid1X# - #Size# / 2))
AntiAlias=1

[GridLine2]
Meter=Roundline
X=(#Size# / 2)
Y=(#Size# / 2)
LineColor=#GridColor#
LineWidth=#GridWidth#
LineLength=(Sqrt((#Size# / 2 - #Grid2X#)**2 + (#Size# / 2 - #Grid2Y#)**2))
RotationAngle=(Atan2(#Grid2Y# - #Size# / 2, #Grid2X# - #Size# / 2))
AntiAlias=1

[GridLine3]
Meter=Roundline
X=(#Size# / 2)
Y=(#Size# / 2)
LineColor=#GridColor#
LineWidth=#GridWidth#
LineLength=(Sqrt((#Size# / 2 - #Grid3X#)**2 + (#Size# / 2 - #Grid3Y#)**2))
RotationAngle=(Atan2(#Grid3Y# - #Size# / 2, #Grid3X# - #Size# / 2))
AntiAlias=1

[GridLine4]
Meter=Roundline
X=(#Size# / 2)
Y=(#Size# / 2)
LineColor=#GridColor#
LineWidth=#GridWidth#
LineLength=(Sqrt((#Size# / 2 - #Grid4X#)**2 + (#Size# / 2 - #Grid4Y#)**2))
RotationAngle=(Atan2(#Grid4Y# - #Size# / 2, #Grid4X# - #Size# / 2))
AntiAlias=1

[GridLine5]
Meter=Roundline
X=(#Size# / 2)
Y=(#Size# / 2)
LineColor=#GridColor#
LineWidth=#GridWidth#
LineLength=(Sqrt((#Size# / 2 - #Grid5X#)**2 + (#Size# / 2 - #Grid5Y#)**2))
RotationAngle=(Atan2(#Grid5Y# - #Size# / 2, #Grid5X# - #Size# / 2))
AntiAlias=1

[GridLine6]
Meter=Roundline
X=(#Size# / 2)
Y=(#Size# / 2)
LineColor=#GridColor#
LineWidth=#GridWidth#
LineLength=(Sqrt((#Size# / 2 - #Grid6X#)**2 + (#Size# / 2 - #Grid6Y#)**2))
RotationAngle=(Atan2(#Grid6Y# - #Size# / 2, #Grid6X# - #Size# / 2))
AntiAlias=1

[GridLine7]
Meter=Roundline
X=(#Size# / 2)
Y=(#Size# / 2)
LineColor=#GridColor#
LineWidth=#GridWidth#
LineLength=(Sqrt((#Size# / 2 - #Grid7X#)**2 + (#Size# / 2 - #Grid7Y#)**2))
RotationAngle=(Atan2(#Grid7Y# - #Size# / 2, #Grid7X# - #Size# / 2))
AntiAlias=1

[GridLine8]
Meter=Roundline
X=(#Size# / 2)
Y=(#Size# / 2)
LineColor=#GridColor#
LineWidth=#GridWidth#
LineLength=(Sqrt((#Size# / 2 - #Grid8X#)**2 + (#Size# / 2 - #Grid8Y#)**2))
RotationAngle=(Atan2(#Grid8Y# - #Size# / 2, #Grid8X# - #Size# / 2))
AntiAlias=1

[GridLine9]
Meter=Roundline
X=(#Size# / 2)
Y=(#Size# / 2)
LineColor=#GridColor#
LineWidth=#GridWidth#
LineLength=(Sqrt((#Size# / 2 - #Grid9X#)**2 + (#Size# / 2 - #Grid9Y#)**2))
RotationAngle=(Atan2(#Grid9Y# - #Size# / 2, #Grid9X# - #Size# / 2))
AntiAlias=1

[GridLine10]
Meter=Roundline
X=(#Size# / 2)
Y=(#Size# / 2)
LineColor=#GridColor#
LineWidth=#GridWidth#
LineLength=(Sqrt((#Size# / 2 - #Grid10X#)**2 + (#Size# / 2 - #Grid10Y#)**2))
RotationAngle=(Atan2(#Grid10Y# - #Size# / 2, #Grid10X# - #Size# / 2))
AntiAlias=1

[GridCircle1]
Meter=Roundline
X=0
Y=0
W=#Size#
H=#Size#
LineLength=(0.125 * (#Size# - #BorderWidth# * 2))
LineStart=(0.125 * (#Size# - #BorderWidth# * 2) - #GridWidth#)
LineColor=#GridColor#
Solid=1
AntiAlias=1

[GridCircle2]
Meter=Roundline
X=0
Y=0
W=#Size#
H=#Size#
LineLength=(0.25 * (#Size# - #BorderWidth# * 2))
LineStart=(0.25 * (#Size# - #BorderWidth# * 2) - #GridWidth#)
LineColor=#GridColor#
Solid=1
AntiAlias=1

[GridCircle3]
Meter=Roundline
X=0
Y=0
W=#Size#
H=#Size#
LineLength=(0.375 * (#Size# - #BorderWidth# * 2))
LineStart=(0.375 * (#Size# - #BorderWidth# * 2) - #GridWidth#)
LineColor=#GridColor#
Solid=1
AntiAlias=1

[Label1]
Meter=String
MeasureName=AudioFreq1
Text=%1 Hz
X=(Cos(#Angle1#) * (#Size# / 2 - #LabelOffset#) + #Size# / 2)
Y=(Sin(#Angle1#) * (#Size# / 2 - #LabelOffset#) + #Size# / 2)
Angle=(((#Angle1# > PI/2) && (#Angle1# < 3*PI/2)) ? (#Angle1# - PI) : #Angle1#)
;Angle=#Angle1#
H=20
W=80
StringAlign=CenterCenter
FontSize=#LabelSize#
FontColor=#LabelColor#
AntiAlias=1

[Label2]
Meter=String
MeasureName=AudioFreq2
Text=%1 Hz
X=(Cos(#Angle2#) * (#Size# / 2 - #LabelOffset#) + #Size# / 2)
Y=(Sin(#Angle2#) * (#Size# / 2 - #LabelOffset#) + #Size# / 2)
Angle=(((#Angle2# > PI/2) && (#Angle2# < 3*PI/2)) ? (#Angle2# - PI) : #Angle2#)
;Angle=#Angle2#
H=20
W=80
StringAlign=CenterCenter
FontSize=#LabelSize#
FontColor=#LabelColor#
AntiAlias=1

[Label3]
Meter=String
MeasureName=AudioFreq3
Text=%1 Hz
X=(Cos(#Angle3#) * (#Size# / 2 - #LabelOffset#) + #Size# / 2)
Y=(Sin(#Angle3#) * (#Size# / 2 - #LabelOffset#) + #Size# / 2)
Angle=(((#Angle3# > PI/2) && (#Angle3# < 3*PI/2)) ? (#Angle3# - PI) : #Angle3#)
;Angle=#Angle3#
H=20
W=80
StringAlign=CenterCenter
FontSize=#LabelSize#
FontColor=#LabelColor#
AntiAlias=1

[Label4]
Meter=String
MeasureName=AudioFreq4
Text=%1 Hz
X=(Cos(#Angle4#) * (#Size# / 2 - #LabelOffset#) + #Size# / 2)
Y=(Sin(#Angle4#) * (#Size# / 2 - #LabelOffset#) + #Size# / 2)
Angle=(((#Angle4# > PI/2) && (#Angle4# < 3*PI/2)) ? (#Angle4# - PI) : #Angle4#)
;Angle=#Angle4#
H=20
W=80
StringAlign=CenterCenter
FontSize=#LabelSize#
FontColor=#LabelColor#
AntiAlias=1

[Label5]
Meter=String
MeasureName=AudioFreq5
Text=%1 Hz
X=(Cos(#Angle5#) * (#Size# / 2 - #LabelOffset#) + #Size# / 2)
Y=(Sin(#Angle5#) * (#Size# / 2 - #LabelOffset#) + #Size# / 2)
Angle=(((#Angle5# > PI/2) && (#Angle5# < 3*PI/2)) ? (#Angle5# - PI) : #Angle5#)
;Angle=#Angle5#
H=20
W=80
StringAlign=CenterCenter
FontSize=#LabelSize#
FontColor=#LabelColor#
AntiAlias=1

[Label6]
Meter=String
MeasureName=AudioFreq6
Text=%1 Hz
X=(Cos(#Angle6#) * (#Size# / 2 - #LabelOffset#) + #Size# / 2)
Y=(Sin(#Angle6#) * (#Size# / 2 - #LabelOffset#) + #Size# / 2)
Angle=(((#Angle6# > PI/2) && (#Angle6# < 3*PI/2)) ? (#Angle6# - PI) : #Angle6#)
;Angle=#Angle6#
H=20
W=80
StringAlign=CenterCenter
FontSize=#LabelSize#
FontColor=#LabelColor#
AntiAlias=1

[Label7]
Meter=String
MeasureName=AudioFreq7
Text=%1 Hz
X=(Cos(#Angle7#) * (#Size# / 2 - #LabelOffset#) + #Size# / 2)
Y=(Sin(#Angle7#) * (#Size# / 2 - #LabelOffset#) + #Size# / 2)
Angle=(((#Angle7# > PI/2) && (#Angle7# < 3*PI/2)) ? (#Angle7# - PI) : #Angle7#)
;Angle=#Angle7#
H=20
W=80
StringAlign=CenterCenter
FontSize=#LabelSize#
FontColor=#LabelColor#
AntiAlias=1

[Label8]
Meter=String
MeasureName=AudioFreq8
Text=%1 Hz
X=(Cos(#Angle8#) * (#Size# / 2 - #LabelOffset#) + #Size# / 2)
Y=(Sin(#Angle8#) * (#Size# / 2 - #LabelOffset#) + #Size# / 2)
Angle=(((#Angle8# > PI/2) && (#Angle8# < 3*PI/2)) ? (#Angle8# - PI) : #Angle8#)
;Angle=#Angle8#
H=20
W=80
StringAlign=CenterCenter
FontSize=#LabelSize#
FontColor=#LabelColor#
AntiAlias=1

[Label9]
Meter=String
MeasureName=AudioFreq9
Text=%1 Hz
X=(Cos(#Angle9#) * (#Size# / 2 - #LabelOffset#) + #Size# / 2)
Y=(Sin(#Angle9#) * (#Size# / 2 - #LabelOffset#) + #Size# / 2)
Angle=(((#Angle9# > PI/2) && (#Angle9# < 3*PI/2)) ? (#Angle9# - PI) : #Angle9#)
;Angle=#Angle9#
H=20
W=80
StringAlign=CenterCenter
FontSize=#LabelSize#
FontColor=#LabelColor#
AntiAlias=1

[Label10]
Meter=String
MeasureName=AudioFreq10
Text=%1 Hz
X=(Cos(#Angle10#) * (#Size# / 2 - #LabelOffset#) + #Size# / 2)
Y=(Sin(#Angle10#) * (#Size# / 2 - #LabelOffset#) + #Size# / 2)
Angle=(((#Angle10# > PI/2) && (#Angle10# < 3*PI/2)) ? (#Angle10# - PI) : #Angle10#)
;Angle=#Angle10#
H=20
W=80
StringAlign=CenterCenter
FontSize=#LabelSize#
FontColor=#LabelColor#
AntiAlias=1

[Point1]
Meter=Image
X=(Cos(#Angle1#) * ([Audio1] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle1#) * ([Audio1] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point2]
Meter=Image
X=(Cos(#Angle2#) * ([Audio2] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle2#) * ([Audio2] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point3]
Meter=Image
X=(Cos(#Angle3#) * ([Audio3] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle3#) * ([Audio3] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point4]
Meter=Image
X=(Cos(#Angle4#) * ([Audio4] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle4#) * ([Audio4] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point5]
Meter=Image
X=(Cos(#Angle5#) * ([Audio5] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle5#) * ([Audio5] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point6]
Meter=Image
X=(Cos(#Angle6#) * ([Audio6] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle6#) * ([Audio6] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point7]
Meter=Image
X=(Cos(#Angle7#) * ([Audio7] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle7#) * ([Audio7] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point8]
Meter=Image
X=(Cos(#Angle8#) * ([Audio8] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle8#) * ([Audio8] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point9]
Meter=Image
X=(Cos(#Angle9#) * ([Audio9] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle9#) * ([Audio9] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point10]
Meter=Image
X=(Cos(#Angle10#) * ([Audio10] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle10#) * ([Audio10] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Line1-2]
Meter=Roundline
X=[Point1:X])
Y=[Point1:Y])
LineColor=([Audio1]<#MiddlePoint# ? (#Color1R#+[Audio1]*(#Color2R#-#Color1R#)/#MiddlePoint#) : (#Color2R#+([Audio1]-#MiddlePoint#)*(#Color3R#-#Color2R#)/(1-#MiddlePoint#))),([Audio1]<#MiddlePoint# ? (#Color1G#+[Audio1]*(#Color2G#-#Color1G#)/#MiddlePoint#) : (#Color2G#+([Audio1]-#MiddlePoint#)*(#Color3G#-#Color2G#)/(1-#MiddlePoint#))),([Audio1]<#MiddlePoint# ? (#Color1B#+[Audio1]*(#Color2B#-#Color1B#)/#MiddlePoint#) : (#Color2B#+([Audio1]-#MiddlePoint#)*(#Color3B#-#Color2B#)/(1-#MiddlePoint#))),#LineAlpha#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point1:X] - [Point2:X])**2 + ([Point1:Y] - [Point2:Y])**2))
RotationAngle=(Atan2([Point2:Y] - [Point1:Y], [Point2:X] - [Point1:X]))
AntiAlias=1
DynamicVariables=1


[Line2-3]
Meter=Roundline
X=[Point2:X])
Y=[Point2:Y])
LineColor=([Audio2]<#MiddlePoint# ? (#Color1R#+[Audio2]*(#Color2R#-#Color1R#)/#MiddlePoint#) : (#Color2R#+([Audio2]-#MiddlePoint#)*(#Color3R#-#Color2R#)/(1-#MiddlePoint#))),([Audio2]<#MiddlePoint# ? (#Color1G#+[Audio2]*(#Color2G#-#Color1G#)/#MiddlePoint#) : (#Color2G#+([Audio2]-#MiddlePoint#)*(#Color3G#-#Color2G#)/(1-#MiddlePoint#))),([Audio2]<#MiddlePoint# ? (#Color1B#+[Audio2]*(#Color2B#-#Color1B#)/#MiddlePoint#) : (#Color2B#+([Audio2]-#MiddlePoint#)*(#Color3B#-#Color2B#)/(1-#MiddlePoint#))),#LineAlpha#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point2:X] - [Point3:X])**2 + ([Point2:Y] - [Point3:Y])**2))
RotationAngle=(Atan2([Point3:Y] - [Point2:Y], [Point3:X] - [Point2:X]))
AntiAlias=1
DynamicVariables=1


[Line3-4]
Meter=Roundline
X=[Point3:X])
Y=[Point3:Y])
LineColor=([Audio3]<#MiddlePoint# ? (#Color1R#+[Audio3]*(#Color2R#-#Color1R#)/#MiddlePoint#) : (#Color2R#+([Audio3]-#MiddlePoint#)*(#Color3R#-#Color2R#)/(1-#MiddlePoint#))),([Audio3]<#MiddlePoint# ? (#Color1G#+[Audio3]*(#Color2G#-#Color1G#)/#MiddlePoint#) : (#Color2G#+([Audio3]-#MiddlePoint#)*(#Color3G#-#Color2G#)/(1-#MiddlePoint#))),([Audio3]<#MiddlePoint# ? (#Color1B#+[Audio3]*(#Color2B#-#Color1B#)/#MiddlePoint#) : (#Color2B#+([Audio3]-#MiddlePoint#)*(#Color3B#-#Color2B#)/(1-#MiddlePoint#))),#LineAlpha#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point3:X] - [Point4:X])**2 + ([Point3:Y] - [Point4:Y])**2))
RotationAngle=(Atan2([Point4:Y] - [Point3:Y], [Point4:X] - [Point3:X]))
AntiAlias=1
DynamicVariables=1


[Line4-5]
Meter=Roundline
X=[Point4:X])
Y=[Point4:Y])
LineColor=([Audio4]<#MiddlePoint# ? (#Color1R#+[Audio4]*(#Color2R#-#Color1R#)/#MiddlePoint#) : (#Color2R#+([Audio4]-#MiddlePoint#)*(#Color3R#-#Color2R#)/(1-#MiddlePoint#))),([Audio4]<#MiddlePoint# ? (#Color1G#+[Audio4]*(#Color2G#-#Color1G#)/#MiddlePoint#) : (#Color2G#+([Audio4]-#MiddlePoint#)*(#Color3G#-#Color2G#)/(1-#MiddlePoint#))),([Audio4]<#MiddlePoint# ? (#Color1B#+[Audio4]*(#Color2B#-#Color1B#)/#MiddlePoint#) : (#Color2B#+([Audio4]-#MiddlePoint#)*(#Color3B#-#Color2B#)/(1-#MiddlePoint#))),#LineAlpha#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point4:X] - [Point5:X])**2 + ([Point4:Y] - [Point5:Y])**2))
RotationAngle=(Atan2([Point5:Y] - [Point4:Y], [Point5:X] - [Point4:X]))
AntiAlias=1
DynamicVariables=1


[Line5-6]
Meter=Roundline
X=[Point5:X])
Y=[Point5:Y])
LineColor=([Audio5]<#MiddlePoint# ? (#Color1R#+[Audio5]*(#Color2R#-#Color1R#)/#MiddlePoint#) : (#Color2R#+([Audio5]-#MiddlePoint#)*(#Color3R#-#Color2R#)/(1-#MiddlePoint#))),([Audio5]<#MiddlePoint# ? (#Color1G#+[Audio5]*(#Color2G#-#Color1G#)/#MiddlePoint#) : (#Color2G#+([Audio5]-#MiddlePoint#)*(#Color3G#-#Color2G#)/(1-#MiddlePoint#))),([Audio5]<#MiddlePoint# ? (#Color1B#+[Audio5]*(#Color2B#-#Color1B#)/#MiddlePoint#) : (#Color2B#+([Audio5]-#MiddlePoint#)*(#Color3B#-#Color2B#)/(1-#MiddlePoint#))),#LineAlpha#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point5:X] - [Point6:X])**2 + ([Point5:Y] - [Point6:Y])**2))
RotationAngle=(Atan2([Point6:Y] - [Point5:Y], [Point6:X] - [Point5:X]))
AntiAlias=1
DynamicVariables=1


[Line6-7]
Meter=Roundline
X=[Point6:X])
Y=[Point6:Y])
LineColor=([Audio6]<#MiddlePoint# ? (#Color1R#+[Audio6]*(#Color2R#-#Color1R#)/#MiddlePoint#) : (#Color2R#+([Audio6]-#MiddlePoint#)*(#Color3R#-#Color2R#)/(1-#MiddlePoint#))),([Audio6]<#MiddlePoint# ? (#Color1G#+[Audio6]*(#Color2G#-#Color1G#)/#MiddlePoint#) : (#Color2G#+([Audio6]-#MiddlePoint#)*(#Color3G#-#Color2G#)/(1-#MiddlePoint#))),([Audio6]<#MiddlePoint# ? (#Color1B#+[Audio6]*(#Color2B#-#Color1B#)/#MiddlePoint#) : (#Color2B#+([Audio6]-#MiddlePoint#)*(#Color3B#-#Color2B#)/(1-#MiddlePoint#))),#LineAlpha#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point6:X] - [Point7:X])**2 + ([Point6:Y] - [Point7:Y])**2))
RotationAngle=(Atan2([Point7:Y] - [Point6:Y], [Point7:X] - [Point6:X]))
AntiAlias=1
DynamicVariables=1


[Line7-8]
Meter=Roundline
X=[Point7:X])
Y=[Point7:Y])
LineColor=([Audio7]<#MiddlePoint# ? (#Color1R#+[Audio7]*(#Color2R#-#Color1R#)/#MiddlePoint#) : (#Color2R#+([Audio7]-#MiddlePoint#)*(#Color3R#-#Color2R#)/(1-#MiddlePoint#))),([Audio7]<#MiddlePoint# ? (#Color1G#+[Audio7]*(#Color2G#-#Color1G#)/#MiddlePoint#) : (#Color2G#+([Audio7]-#MiddlePoint#)*(#Color3G#-#Color2G#)/(1-#MiddlePoint#))),([Audio7]<#MiddlePoint# ? (#Color1B#+[Audio7]*(#Color2B#-#Color1B#)/#MiddlePoint#) : (#Color2B#+([Audio7]-#MiddlePoint#)*(#Color3B#-#Color2B#)/(1-#MiddlePoint#))),#LineAlpha#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point7:X] - [Point8:X])**2 + ([Point7:Y] - [Point8:Y])**2))
RotationAngle=(Atan2([Point8:Y] - [Point7:Y], [Point8:X] - [Point7:X]))
AntiAlias=1
DynamicVariables=1


[Line8-9]
Meter=Roundline
X=[Point8:X])
Y=[Point8:Y])
LineColor=([Audio8]<#MiddlePoint# ? (#Color1R#+[Audio8]*(#Color2R#-#Color1R#)/#MiddlePoint#) : (#Color2R#+([Audio8]-#MiddlePoint#)*(#Color3R#-#Color2R#)/(1-#MiddlePoint#))),([Audio8]<#MiddlePoint# ? (#Color1G#+[Audio8]*(#Color2G#-#Color1G#)/#MiddlePoint#) : (#Color2G#+([Audio8]-#MiddlePoint#)*(#Color3G#-#Color2G#)/(1-#MiddlePoint#))),([Audio8]<#MiddlePoint# ? (#Color1B#+[Audio8]*(#Color2B#-#Color1B#)/#MiddlePoint#) : (#Color2B#+([Audio8]-#MiddlePoint#)*(#Color3B#-#Color2B#)/(1-#MiddlePoint#))),#LineAlpha#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point8:X] - [Point9:X])**2 + ([Point8:Y] - [Point9:Y])**2))
RotationAngle=(Atan2([Point9:Y] - [Point8:Y], [Point9:X] - [Point8:X]))
AntiAlias=1
DynamicVariables=1


[Line9-10]
Meter=Roundline
X=[Point9:X])
Y=[Point9:Y])
LineColor=([Audio9]<#MiddlePoint# ? (#Color1R#+[Audio9]*(#Color2R#-#Color1R#)/#MiddlePoint#) : (#Color2R#+([Audio9]-#MiddlePoint#)*(#Color3R#-#Color2R#)/(1-#MiddlePoint#))),([Audio9]<#MiddlePoint# ? (#Color1G#+[Audio9]*(#Color2G#-#Color1G#)/#MiddlePoint#) : (#Color2G#+([Audio9]-#MiddlePoint#)*(#Color3G#-#Color2G#)/(1-#MiddlePoint#))),([Audio9]<#MiddlePoint# ? (#Color1B#+[Audio9]*(#Color2B#-#Color1B#)/#MiddlePoint#) : (#Color2B#+([Audio9]-#MiddlePoint#)*(#Color3B#-#Color2B#)/(1-#MiddlePoint#))),#LineAlpha#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point9:X] - [Point10:X])**2 + ([Point9:Y] - [Point10:Y])**2))
RotationAngle=(Atan2([Point10:Y] - [Point9:Y], [Point10:X] - [Point9:X]))
AntiAlias=1
DynamicVariables=1


[Line10-1]
Meter=Roundline
X=[Point10:X])
Y=[Point10:Y])
LineColor=([Audio10]<#MiddlePoint# ? (#Color1R#+[Audio10]*(#Color2R#-#Color1R#)/#MiddlePoint#) : (#Color2R#+([Audio10]-#MiddlePoint#)*(#Color3R#-#Color2R#)/(1-#MiddlePoint#))),([Audio10]<#MiddlePoint# ? (#Color1G#+[Audio10]*(#Color2G#-#Color1G#)/#MiddlePoint#) : (#Color2G#+([Audio10]-#MiddlePoint#)*(#Color3G#-#Color2G#)/(1-#MiddlePoint#))),([Audio10]<#MiddlePoint# ? (#Color1B#+[Audio10]*(#Color2B#-#Color1B#)/#MiddlePoint#) : (#Color2B#+([Audio10]-#MiddlePoint#)*(#Color3B#-#Color2B#)/(1-#MiddlePoint#))),#LineAlpha#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point10:X] - [Point1:X])**2 + ([Point10:Y] - [Point1:Y])**2))
RotationAngle=(Atan2([Point1:Y] - [Point10:Y], [Point1:X] - [Point10:X]))
AntiAlias=1
DynamicVariables=1
Hidden=(1-#CloseLine#)

[Dot1]
Meter=Roundline
X=([Point1:X] - #PointSize# / 2)
Y=([Point1:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=([Audio1]<#MiddlePoint# ? (#Color1R#+[Audio1]*(#Color2R#-#Color1R#)/#MiddlePoint#) : (#Color2R#+([Audio1]-#MiddlePoint#)*(#Color3R#-#Color2R#)/(1-#MiddlePoint#))),([Audio1]<#MiddlePoint# ? (#Color1G#+[Audio1]*(#Color2G#-#Color1G#)/#MiddlePoint#) : (#Color2G#+([Audio1]-#MiddlePoint#)*(#Color3G#-#Color2G#)/(1-#MiddlePoint#))),([Audio1]<#MiddlePoint# ? (#Color1B#+[Audio1]*(#Color2B#-#Color1B#)/#MiddlePoint#) : (#Color2B#+([Audio1]-#MiddlePoint#)*(#Color3B#-#Color2B#)/(1-#MiddlePoint#)))
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot2]
Meter=Roundline
X=([Point2:X] - #PointSize# / 2)
Y=([Point2:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=([Audio2]<#MiddlePoint# ? (#Color1R#+[Audio2]*(#Color2R#-#Color1R#)/#MiddlePoint#) : (#Color2R#+([Audio2]-#MiddlePoint#)*(#Color3R#-#Color2R#)/(1-#MiddlePoint#))),([Audio2]<#MiddlePoint# ? (#Color1G#+[Audio2]*(#Color2G#-#Color1G#)/#MiddlePoint#) : (#Color2G#+([Audio2]-#MiddlePoint#)*(#Color3G#-#Color2G#)/(1-#MiddlePoint#))),([Audio2]<#MiddlePoint# ? (#Color1B#+[Audio2]*(#Color2B#-#Color1B#)/#MiddlePoint#) : (#Color2B#+([Audio2]-#MiddlePoint#)*(#Color3B#-#Color2B#)/(1-#MiddlePoint#)))
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot3]
Meter=Roundline
X=([Point3:X] - #PointSize# / 2)
Y=([Point3:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=([Audio3]<#MiddlePoint# ? (#Color1R#+[Audio3]*(#Color2R#-#Color1R#)/#MiddlePoint#) : (#Color2R#+([Audio3]-#MiddlePoint#)*(#Color3R#-#Color2R#)/(1-#MiddlePoint#))),([Audio3]<#MiddlePoint# ? (#Color1G#+[Audio3]*(#Color2G#-#Color1G#)/#MiddlePoint#) : (#Color2G#+([Audio3]-#MiddlePoint#)*(#Color3G#-#Color2G#)/(1-#MiddlePoint#))),([Audio3]<#MiddlePoint# ? (#Color1B#+[Audio3]*(#Color2B#-#Color1B#)/#MiddlePoint#) : (#Color2B#+([Audio3]-#MiddlePoint#)*(#Color3B#-#Color2B#)/(1-#MiddlePoint#)))
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot4]
Meter=Roundline
X=([Point4:X] - #PointSize# / 2)
Y=([Point4:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=([Audio4]<#MiddlePoint# ? (#Color1R#+[Audio4]*(#Color2R#-#Color1R#)/#MiddlePoint#) : (#Color2R#+([Audio4]-#MiddlePoint#)*(#Color3R#-#Color2R#)/(1-#MiddlePoint#))),([Audio4]<#MiddlePoint# ? (#Color1G#+[Audio4]*(#Color2G#-#Color1G#)/#MiddlePoint#) : (#Color2G#+([Audio4]-#MiddlePoint#)*(#Color3G#-#Color2G#)/(1-#MiddlePoint#))),([Audio4]<#MiddlePoint# ? (#Color1B#+[Audio4]*(#Color2B#-#Color1B#)/#MiddlePoint#) : (#Color2B#+([Audio4]-#MiddlePoint#)*(#Color3B#-#Color2B#)/(1-#MiddlePoint#)))
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot5]
Meter=Roundline
X=([Point5:X] - #PointSize# / 2)
Y=([Point5:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=([Audio5]<#MiddlePoint# ? (#Color1R#+[Audio5]*(#Color2R#-#Color1R#)/#MiddlePoint#) : (#Color2R#+([Audio5]-#MiddlePoint#)*(#Color3R#-#Color2R#)/(1-#MiddlePoint#))),([Audio5]<#MiddlePoint# ? (#Color1G#+[Audio5]*(#Color2G#-#Color1G#)/#MiddlePoint#) : (#Color2G#+([Audio5]-#MiddlePoint#)*(#Color3G#-#Color2G#)/(1-#MiddlePoint#))),([Audio5]<#MiddlePoint# ? (#Color1B#+[Audio5]*(#Color2B#-#Color1B#)/#MiddlePoint#) : (#Color2B#+([Audio5]-#MiddlePoint#)*(#Color3B#-#Color2B#)/(1-#MiddlePoint#)))
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot6]
Meter=Roundline
X=([Point6:X] - #PointSize# / 2)
Y=([Point6:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=([Audio6]<#MiddlePoint# ? (#Color1R#+[Audio6]*(#Color2R#-#Color1R#)/#MiddlePoint#) : (#Color2R#+([Audio6]-#MiddlePoint#)*(#Color3R#-#Color2R#)/(1-#MiddlePoint#))),([Audio6]<#MiddlePoint# ? (#Color1G#+[Audio6]*(#Color2G#-#Color1G#)/#MiddlePoint#) : (#Color2G#+([Audio6]-#MiddlePoint#)*(#Color3G#-#Color2G#)/(1-#MiddlePoint#))),([Audio6]<#MiddlePoint# ? (#Color1B#+[Audio6]*(#Color2B#-#Color1B#)/#MiddlePoint#) : (#Color2B#+([Audio6]-#MiddlePoint#)*(#Color3B#-#Color2B#)/(1-#MiddlePoint#)))
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot7]
Meter=Roundline
X=([Point7:X] - #PointSize# / 2)
Y=([Point7:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=([Audio7]<#MiddlePoint# ? (#Color1R#+[Audio7]*(#Color2R#-#Color1R#)/#MiddlePoint#) : (#Color2R#+([Audio7]-#MiddlePoint#)*(#Color3R#-#Color2R#)/(1-#MiddlePoint#))),([Audio7]<#MiddlePoint# ? (#Color1G#+[Audio7]*(#Color2G#-#Color1G#)/#MiddlePoint#) : (#Color2G#+([Audio7]-#MiddlePoint#)*(#Color3G#-#Color2G#)/(1-#MiddlePoint#))),([Audio7]<#MiddlePoint# ? (#Color1B#+[Audio7]*(#Color2B#-#Color1B#)/#MiddlePoint#) : (#Color2B#+([Audio7]-#MiddlePoint#)*(#Color3B#-#Color2B#)/(1-#MiddlePoint#)))
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot8]
Meter=Roundline
X=([Point8:X] - #PointSize# / 2)
Y=([Point8:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=([Audio8]<#MiddlePoint# ? (#Color1R#+[Audio8]*(#Color2R#-#Color1R#)/#MiddlePoint#) : (#Color2R#+([Audio8]-#MiddlePoint#)*(#Color3R#-#Color2R#)/(1-#MiddlePoint#))),([Audio8]<#MiddlePoint# ? (#Color1G#+[Audio8]*(#Color2G#-#Color1G#)/#MiddlePoint#) : (#Color2G#+([Audio8]-#MiddlePoint#)*(#Color3G#-#Color2G#)/(1-#MiddlePoint#))),([Audio8]<#MiddlePoint# ? (#Color1B#+[Audio8]*(#Color2B#-#Color1B#)/#MiddlePoint#) : (#Color2B#+([Audio8]-#MiddlePoint#)*(#Color3B#-#Color2B#)/(1-#MiddlePoint#)))
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot9]
Meter=Roundline
X=([Point9:X] - #PointSize# / 2)
Y=([Point9:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=([Audio9]<#MiddlePoint# ? (#Color1R#+[Audio9]*(#Color2R#-#Color1R#)/#MiddlePoint#) : (#Color2R#+([Audio9]-#MiddlePoint#)*(#Color3R#-#Color2R#)/(1-#MiddlePoint#))),([Audio9]<#MiddlePoint# ? (#Color1G#+[Audio9]*(#Color2G#-#Color1G#)/#MiddlePoint#) : (#Color2G#+([Audio9]-#MiddlePoint#)*(#Color3G#-#Color2G#)/(1-#MiddlePoint#))),([Audio9]<#MiddlePoint# ? (#Color1B#+[Audio9]*(#Color2B#-#Color1B#)/#MiddlePoint#) : (#Color2B#+([Audio9]-#MiddlePoint#)*(#Color3B#-#Color2B#)/(1-#MiddlePoint#)))
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot10]
Meter=Roundline
X=([Point10:X] - #PointSize# / 2)
Y=([Point10:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=([Audio10]<#MiddlePoint# ? (#Color1R#+[Audio10]*(#Color2R#-#Color1R#)/#MiddlePoint#) : (#Color2R#+([Audio10]-#MiddlePoint#)*(#Color3R#-#Color2R#)/(1-#MiddlePoint#))),([Audio10]<#MiddlePoint# ? (#Color1G#+[Audio10]*(#Color2G#-#Color1G#)/#MiddlePoint#) : (#Color2G#+([Audio10]-#MiddlePoint#)*(#Color3G#-#Color2G#)/(1-#MiddlePoint#))),([Audio10]<#MiddlePoint# ? (#Color1B#+[Audio10]*(#Color2B#-#Color1B#)/#MiddlePoint#) : (#Color2B#+([Audio10]-#MiddlePoint#)*(#Color3B#-#Color2B#)/(1-#MiddlePoint#)))
Solid=1
DynamicVariables=1
AntiAlias=1
