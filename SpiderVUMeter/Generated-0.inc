
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

[Audio1L]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
Channel=L
BandIdx=0

[Audio1R]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
Channel=R
BandIdx=0

[AudioFreq1]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=BandFreq
BandIdx=0

[Audio2L]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
Channel=L
BandIdx=1

[Audio2R]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
Channel=R
BandIdx=1

[AudioFreq2]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=BandFreq
BandIdx=1

[Audio3L]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
Channel=L
BandIdx=2

[Audio3R]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
Channel=R
BandIdx=2

[AudioFreq3]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=BandFreq
BandIdx=2

[Audio4L]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
Channel=L
BandIdx=3

[Audio4R]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
Channel=R
BandIdx=3

[AudioFreq4]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=BandFreq
BandIdx=3

[Audio5L]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
Channel=L
BandIdx=4

[Audio5R]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
Channel=R
BandIdx=4

[AudioFreq5]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=BandFreq
BandIdx=4

[Audio6L]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
Channel=L
BandIdx=5

[Audio6R]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
Channel=R
BandIdx=5

[AudioFreq6]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=BandFreq
BandIdx=5

[Audio7L]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
Channel=L
BandIdx=6

[Audio7R]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
Channel=R
BandIdx=6

[AudioFreq7]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=BandFreq
BandIdx=6

[Audio8L]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
Channel=L
BandIdx=7

[Audio8R]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
Channel=R
BandIdx=7

[AudioFreq8]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=BandFreq
BandIdx=7

[Audio9L]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
Channel=L
BandIdx=8

[Audio9R]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
Channel=R
BandIdx=8

[AudioFreq9]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=BandFreq
BandIdx=8

[Audio10L]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
Channel=L
BandIdx=9

[Audio10R]
Measure=Plugin
Plugin=AudioLevel
Parent=AudioMain
Type=Band
Channel=R
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

[Point1L]
Meter=Image
X=(Cos(#Angle1#) * ([Audio1L] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle1#) * ([Audio1L] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point1R]
Meter=Image
X=(Cos(#Angle1#) * ([Audio1R] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle1#) * ([Audio1R] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point2L]
Meter=Image
X=(Cos(#Angle2#) * ([Audio2L] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle2#) * ([Audio2L] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point2R]
Meter=Image
X=(Cos(#Angle2#) * ([Audio2R] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle2#) * ([Audio2R] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point3L]
Meter=Image
X=(Cos(#Angle3#) * ([Audio3L] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle3#) * ([Audio3L] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point3R]
Meter=Image
X=(Cos(#Angle3#) * ([Audio3R] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle3#) * ([Audio3R] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point4L]
Meter=Image
X=(Cos(#Angle4#) * ([Audio4L] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle4#) * ([Audio4L] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point4R]
Meter=Image
X=(Cos(#Angle4#) * ([Audio4R] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle4#) * ([Audio4R] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point5L]
Meter=Image
X=(Cos(#Angle5#) * ([Audio5L] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle5#) * ([Audio5L] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point5R]
Meter=Image
X=(Cos(#Angle5#) * ([Audio5R] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle5#) * ([Audio5R] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point6L]
Meter=Image
X=(Cos(#Angle6#) * ([Audio6L] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle6#) * ([Audio6L] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point6R]
Meter=Image
X=(Cos(#Angle6#) * ([Audio6R] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle6#) * ([Audio6R] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point7L]
Meter=Image
X=(Cos(#Angle7#) * ([Audio7L] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle7#) * ([Audio7L] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point7R]
Meter=Image
X=(Cos(#Angle7#) * ([Audio7R] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle7#) * ([Audio7R] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point8L]
Meter=Image
X=(Cos(#Angle8#) * ([Audio8L] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle8#) * ([Audio8L] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point8R]
Meter=Image
X=(Cos(#Angle8#) * ([Audio8R] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle8#) * ([Audio8R] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point9L]
Meter=Image
X=(Cos(#Angle9#) * ([Audio9L] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle9#) * ([Audio9L] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point9R]
Meter=Image
X=(Cos(#Angle9#) * ([Audio9R] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle9#) * ([Audio9R] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point10L]
Meter=Image
X=(Cos(#Angle10#) * ([Audio10L] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle10#) * ([Audio10L] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Point10R]
Meter=Image
X=(Cos(#Angle10#) * ([Audio10R] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
Y=(Sin(#Angle10#) * ([Audio10R] * #Size# / 2 - #BorderWidth#) + #Size# / 2)
W=0
H=0
DynamicVariables=1

[Line1L-2L]
Meter=Roundline
X=[Point1L:X])
Y=[Point1L:Y])
LineColor=#LineColorLeft#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point1L:X] - [Point2L:X])**2 + ([Point1L:Y] - [Point2L:Y])**2))
RotationAngle=(Atan2([Point2L:Y] - [Point1L:Y], [Point2L:X] - [Point1L:X]))
AntiAlias=1
DynamicVariables=1


[Line1R-2R]
Meter=Roundline
X=[Point1R:X]
Y=[Point1R:Y]
LineColor=#LineColorRight#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point1R:X] - [Point2R:X])**2 + ([Point1R:Y] - [Point2R:Y])**2))
RotationAngle=(Atan2([Point2R:Y] - [Point1R:Y], [Point2R:X] - [Point1R:X]))
AntiAlias=1
DynamicVariables=1


[Line2L-3L]
Meter=Roundline
X=[Point2L:X])
Y=[Point2L:Y])
LineColor=#LineColorLeft#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point2L:X] - [Point3L:X])**2 + ([Point2L:Y] - [Point3L:Y])**2))
RotationAngle=(Atan2([Point3L:Y] - [Point2L:Y], [Point3L:X] - [Point2L:X]))
AntiAlias=1
DynamicVariables=1


[Line2R-3R]
Meter=Roundline
X=[Point2R:X]
Y=[Point2R:Y]
LineColor=#LineColorRight#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point2R:X] - [Point3R:X])**2 + ([Point2R:Y] - [Point3R:Y])**2))
RotationAngle=(Atan2([Point3R:Y] - [Point2R:Y], [Point3R:X] - [Point2R:X]))
AntiAlias=1
DynamicVariables=1


[Line3L-4L]
Meter=Roundline
X=[Point3L:X])
Y=[Point3L:Y])
LineColor=#LineColorLeft#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point3L:X] - [Point4L:X])**2 + ([Point3L:Y] - [Point4L:Y])**2))
RotationAngle=(Atan2([Point4L:Y] - [Point3L:Y], [Point4L:X] - [Point3L:X]))
AntiAlias=1
DynamicVariables=1


[Line3R-4R]
Meter=Roundline
X=[Point3R:X]
Y=[Point3R:Y]
LineColor=#LineColorRight#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point3R:X] - [Point4R:X])**2 + ([Point3R:Y] - [Point4R:Y])**2))
RotationAngle=(Atan2([Point4R:Y] - [Point3R:Y], [Point4R:X] - [Point3R:X]))
AntiAlias=1
DynamicVariables=1


[Line4L-5L]
Meter=Roundline
X=[Point4L:X])
Y=[Point4L:Y])
LineColor=#LineColorLeft#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point4L:X] - [Point5L:X])**2 + ([Point4L:Y] - [Point5L:Y])**2))
RotationAngle=(Atan2([Point5L:Y] - [Point4L:Y], [Point5L:X] - [Point4L:X]))
AntiAlias=1
DynamicVariables=1


[Line4R-5R]
Meter=Roundline
X=[Point4R:X]
Y=[Point4R:Y]
LineColor=#LineColorRight#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point4R:X] - [Point5R:X])**2 + ([Point4R:Y] - [Point5R:Y])**2))
RotationAngle=(Atan2([Point5R:Y] - [Point4R:Y], [Point5R:X] - [Point4R:X]))
AntiAlias=1
DynamicVariables=1


[Line5L-6L]
Meter=Roundline
X=[Point5L:X])
Y=[Point5L:Y])
LineColor=#LineColorLeft#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point5L:X] - [Point6L:X])**2 + ([Point5L:Y] - [Point6L:Y])**2))
RotationAngle=(Atan2([Point6L:Y] - [Point5L:Y], [Point6L:X] - [Point5L:X]))
AntiAlias=1
DynamicVariables=1


[Line5R-6R]
Meter=Roundline
X=[Point5R:X]
Y=[Point5R:Y]
LineColor=#LineColorRight#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point5R:X] - [Point6R:X])**2 + ([Point5R:Y] - [Point6R:Y])**2))
RotationAngle=(Atan2([Point6R:Y] - [Point5R:Y], [Point6R:X] - [Point5R:X]))
AntiAlias=1
DynamicVariables=1


[Line6L-7L]
Meter=Roundline
X=[Point6L:X])
Y=[Point6L:Y])
LineColor=#LineColorLeft#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point6L:X] - [Point7L:X])**2 + ([Point6L:Y] - [Point7L:Y])**2))
RotationAngle=(Atan2([Point7L:Y] - [Point6L:Y], [Point7L:X] - [Point6L:X]))
AntiAlias=1
DynamicVariables=1


[Line6R-7R]
Meter=Roundline
X=[Point6R:X]
Y=[Point6R:Y]
LineColor=#LineColorRight#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point6R:X] - [Point7R:X])**2 + ([Point6R:Y] - [Point7R:Y])**2))
RotationAngle=(Atan2([Point7R:Y] - [Point6R:Y], [Point7R:X] - [Point6R:X]))
AntiAlias=1
DynamicVariables=1


[Line7L-8L]
Meter=Roundline
X=[Point7L:X])
Y=[Point7L:Y])
LineColor=#LineColorLeft#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point7L:X] - [Point8L:X])**2 + ([Point7L:Y] - [Point8L:Y])**2))
RotationAngle=(Atan2([Point8L:Y] - [Point7L:Y], [Point8L:X] - [Point7L:X]))
AntiAlias=1
DynamicVariables=1


[Line7R-8R]
Meter=Roundline
X=[Point7R:X]
Y=[Point7R:Y]
LineColor=#LineColorRight#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point7R:X] - [Point8R:X])**2 + ([Point7R:Y] - [Point8R:Y])**2))
RotationAngle=(Atan2([Point8R:Y] - [Point7R:Y], [Point8R:X] - [Point7R:X]))
AntiAlias=1
DynamicVariables=1


[Line8L-9L]
Meter=Roundline
X=[Point8L:X])
Y=[Point8L:Y])
LineColor=#LineColorLeft#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point8L:X] - [Point9L:X])**2 + ([Point8L:Y] - [Point9L:Y])**2))
RotationAngle=(Atan2([Point9L:Y] - [Point8L:Y], [Point9L:X] - [Point8L:X]))
AntiAlias=1
DynamicVariables=1


[Line8R-9R]
Meter=Roundline
X=[Point8R:X]
Y=[Point8R:Y]
LineColor=#LineColorRight#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point8R:X] - [Point9R:X])**2 + ([Point8R:Y] - [Point9R:Y])**2))
RotationAngle=(Atan2([Point9R:Y] - [Point8R:Y], [Point9R:X] - [Point8R:X]))
AntiAlias=1
DynamicVariables=1


[Line9L-10L]
Meter=Roundline
X=[Point9L:X])
Y=[Point9L:Y])
LineColor=#LineColorLeft#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point9L:X] - [Point10L:X])**2 + ([Point9L:Y] - [Point10L:Y])**2))
RotationAngle=(Atan2([Point10L:Y] - [Point9L:Y], [Point10L:X] - [Point9L:X]))
AntiAlias=1
DynamicVariables=1


[Line9R-10R]
Meter=Roundline
X=[Point9R:X]
Y=[Point9R:Y]
LineColor=#LineColorRight#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point9R:X] - [Point10R:X])**2 + ([Point9R:Y] - [Point10R:Y])**2))
RotationAngle=(Atan2([Point10R:Y] - [Point9R:Y], [Point10R:X] - [Point9R:X]))
AntiAlias=1
DynamicVariables=1


[Line10L-1L]
Meter=Roundline
X=[Point10L:X])
Y=[Point10L:Y])
LineColor=#LineColorLeft#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point10L:X] - [Point1L:X])**2 + ([Point10L:Y] - [Point1L:Y])**2))
RotationAngle=(Atan2([Point1L:Y] - [Point10L:Y], [Point1L:X] - [Point10L:X]))
AntiAlias=1
DynamicVariables=1
Hidden=(1-#CloseLine#)

[Line10R-1R]
Meter=Roundline
X=[Point10R:X]
Y=[Point10R:Y]
LineColor=#LineColorRight#
LineWidth=#LineWidth#
LineLength=(Sqrt(([Point10R:X] - [Point1R:X])**2 + ([Point10R:Y] - [Point1R:Y])**2))
RotationAngle=(Atan2([Point1R:Y] - [Point10R:Y], [Point1R:X] - [Point10R:X]))
AntiAlias=1
DynamicVariables=1
Hidden=(1-#CloseLine#)

[Dot1L]
Meter=Roundline
X=([Point1L:X] - #PointSize# / 2)
Y=([Point1L:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=#PointColorLeft#
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot1R]
Meter=Roundline
X=([Point1R:X] - #PointSize# / 2)
Y=([Point1R:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=#PointColorRight#
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot2L]
Meter=Roundline
X=([Point2L:X] - #PointSize# / 2)
Y=([Point2L:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=#PointColorLeft#
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot2R]
Meter=Roundline
X=([Point2R:X] - #PointSize# / 2)
Y=([Point2R:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=#PointColorRight#
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot3L]
Meter=Roundline
X=([Point3L:X] - #PointSize# / 2)
Y=([Point3L:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=#PointColorLeft#
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot3R]
Meter=Roundline
X=([Point3R:X] - #PointSize# / 2)
Y=([Point3R:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=#PointColorRight#
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot4L]
Meter=Roundline
X=([Point4L:X] - #PointSize# / 2)
Y=([Point4L:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=#PointColorLeft#
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot4R]
Meter=Roundline
X=([Point4R:X] - #PointSize# / 2)
Y=([Point4R:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=#PointColorRight#
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot5L]
Meter=Roundline
X=([Point5L:X] - #PointSize# / 2)
Y=([Point5L:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=#PointColorLeft#
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot5R]
Meter=Roundline
X=([Point5R:X] - #PointSize# / 2)
Y=([Point5R:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=#PointColorRight#
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot6L]
Meter=Roundline
X=([Point6L:X] - #PointSize# / 2)
Y=([Point6L:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=#PointColorLeft#
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot6R]
Meter=Roundline
X=([Point6R:X] - #PointSize# / 2)
Y=([Point6R:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=#PointColorRight#
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot7L]
Meter=Roundline
X=([Point7L:X] - #PointSize# / 2)
Y=([Point7L:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=#PointColorLeft#
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot7R]
Meter=Roundline
X=([Point7R:X] - #PointSize# / 2)
Y=([Point7R:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=#PointColorRight#
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot8L]
Meter=Roundline
X=([Point8L:X] - #PointSize# / 2)
Y=([Point8L:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=#PointColorLeft#
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot8R]
Meter=Roundline
X=([Point8R:X] - #PointSize# / 2)
Y=([Point8R:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=#PointColorRight#
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot9L]
Meter=Roundline
X=([Point9L:X] - #PointSize# / 2)
Y=([Point9L:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=#PointColorLeft#
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot9R]
Meter=Roundline
X=([Point9R:X] - #PointSize# / 2)
Y=([Point9R:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=#PointColorRight#
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot10L]
Meter=Roundline
X=([Point10L:X] - #PointSize# / 2)
Y=([Point10L:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=#PointColorLeft#
Solid=1
DynamicVariables=1
AntiAlias=1

[Dot10R]
Meter=Roundline
X=([Point10R:X] - #PointSize# / 2)
Y=([Point10R:Y] - #PointSize# / 2)
W=#PointSize#
H=#PointSize#
LineLength=(#PointSize# / 2)
LineStart=0
LineColor=#PointColorRight#
Solid=1
DynamicVariables=1
AntiAlias=1
