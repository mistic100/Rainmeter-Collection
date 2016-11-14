[MeasureVolume]
Measure=Plugin
Plugin=Win7AudioPlugin

[MeasureVolumeClamp]
Measure=Calc
Formula=Ceil(Max(0, MeasureVolume) / 10)

[MeasureAudioRaw]
Measure=Plugin
Plugin=AudioLevel

[MeasureAudioRMS_Sum]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudioRaw
Channel=Sum
Type=RMS

[MeasureAudioRMS_L]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudioRaw
Channel=L
Type=RMS

[MeasureAudioRMS_R]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudioRaw
Channel=R
Type=RMS

[MeasureAudioPeak_L]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudioRaw
Channel=L
Type=Peak

[MeasureAudioPeak_R]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudioRaw
Channel=R
Type=Peak