[Background]
Meter=Roundline
X=0
Y=0
W=#Size#
H=#Size#
LineLength=(#Size# / 2)
LineStart=0
LineColor=#BackgroundColor#
Solid=1
AntiAlias=1

[Border]
Meter=Roundline
X=0
Y=0
W=#Size#
H=#Size#
LineLength=(#Size# / 2)
LineStart=(#Size# / 2 - #BorderWidth#)
LineColor=#BorderColor#
Solid=1
AntiAlias=1

[AudioMain]
Measure=Plugin
Plugin=AudioLevel
Port=Output
FFTSize=1024
FFTOverlap=512
FFTAttack=100
FFTDecay=300
Bands=#NbBands#
FreqMin=20
FreqMax=20000
Sensitivity=40