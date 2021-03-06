; ------------------------------------------------------------------------
;    _       ___      _______     _       ___     __           __
;   | |     / (_)___ /  / __ \   | |     / (_)___/ /___  ___  / /______
;   | | /| / / / __ \/ / / / /   | | /| / / / __  / __ \/ _ \/ __/ ___/
;   | |/ |/ / / / / / / /_/ /    | |/ |/ / / /_/ / /_/ /  __/ /_(__  ) 
;   |__/|__/_/_/ /_/_/\____/     |__/|__/_/\__,_/\__, /\___/\__/____/
;                                               /____/
;
;	Win10 Widgets for Rainmeter - Welcome (intro)
;		Author  - TJ Markham, http://tjmarkham.com
;		Website - http://win10widgets.com
;               Translate to Russian by the_virus_ua
; ------------------------------------------------------------------------ 

[Metadata]
; Contains basic information of the skin.
Name=World Clocks
Author=the_virus_ua
Information=Displays the current day and time for 6 locations.
License=Creative Commons BY-NC-SA 3.0
Version=1.0.3

; Location1
[MeasureTimes]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=600
Url="http://time.yandex.com/sync.json?lang=en&geo=#Location1#,#Location2#,#Location3#,#Location4#,#Location5#,#Location6#"
RegExp="(?siU).*"name":"(.*)".*"offset":(.*),.*\}]\},.*"name":"(.*)".*"offset":(.*),.*\}]\},.*"name":"(.*)".*"offset":(.*),.*\}]\},.*"name":"(.*)".*"offset":(.*),.*\}]\},.*"name":"(.*)".*"offset":(.*),.*\}]\},.*"name":"(.*)".*"offset":(.*),"
DecodeCharacterReference=1
DynamicVariables=1
Disabled=1
FinishAction=[!HideMeter RetrievingTimes][!ShowMeterGroup Times][!UpdateMeter *][!Redraw]
UpdateDivider=#UpdateRate#
[MeasureName1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureTimes]
StringIndex=1
Substitute="":"0"
DecodeCharacterReference=1
UpdateDivider=#UpdateRate#

[MeasureOffset1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureTimes]
StringIndex=2
Substitute="":"0"
UpdateDivider=#UpdateRate#

[MeasureTime1]
Measure=Time
Format=#TimeFormat#
TimeZone=([MeasureOffset1]/3600000)
DaylightSavingTime=0
FormatLocale=local
DynamicVariables=1
UpdateDivider=#UpdateRate#

[MeasureTime1Zone]
Measure=Calc
Formula=([MeasureOffset1]/3600000)
DynamicVariables=1
UpdateDivider=#UpdateRate#

; Location2
[MeasureName2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureTimes]
StringIndex=3
Substitute="":"0"
DecodeCharacterReference=1
UpdateDivider=#UpdateRate#

[MeasureOffset2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureTimes]
StringIndex=4
Substitute="":"0"
UpdateDivider=#UpdateRate#

[MeasureTime2]
Measure=Time
Format=#TimeFormat#
TimeZone=([MeasureOffset2]/3600000)
DaylightSavingTime=0
FormatLocale=local
DynamicVariables=1
UpdateDivider=#UpdateRate#

[MeasureTime2Zone]
Measure=Calc
Formula=([MeasureOffset2]/3600000)
DynamicVariables=1
UpdateDivider=#UpdateRate#

; Location3
[MeasureName3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureTimes]
StringIndex=5
Substitute="":"0"
DecodeCharacterReference=1
UpdateDivider=#UpdateRate#

[MeasureOffset3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureTimes]
StringIndex=6
Substitute="":"0"
UpdateDivider=#UpdateRate#

[MeasureTime3]
Measure=Time
Format=#TimeFormat#
TimeZone=([MeasureOffset3]/3600000)
DaylightSavingTime=0
FormatLocale=local
DynamicVariables=1
UpdateDivider=#UpdateRate#

[MeasureTime3Zone]
Measure=Calc
Formula=([MeasureOffset3]/3600000)
DynamicVariables=1
UpdateDivider=#UpdateRate#

; Location4
[MeasureName4]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureTimes]
StringIndex=7
Substitute="":"0"
DecodeCharacterReference=1
UpdateDivider=#UpdateRate#

[MeasureOffset4]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureTimes]
StringIndex=8
Substitute="":"0"
UpdateDivider=#UpdateRate#

[MeasureTime4]
Measure=Time
Format=#TimeFormat#
TimeZone=([MeasureOffset4]/3600000)
DaylightSavingTime=0
FormatLocale=local
DynamicVariables=1
UpdateDivider=#UpdateRate#

[MeasureTime4Zone]
Measure=Calc
Formula=([MeasureOffset4]/3600000)
DynamicVariables=1
UpdateDivider=#UpdateRate#

; Location5
[MeasureName5]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureTimes]
StringIndex=9
Substitute="":"0"
DecodeCharacterReference=1
UpdateDivider=#UpdateRate#

[MeasureOffset5]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureTimes]
StringIndex=10
Substitute="":"0"
UpdateDivider=#UpdateRate#

[MeasureTime5]
Measure=Time
Format=#TimeFormat#
TimeZone=([MeasureOffset5]/3600000)
DaylightSavingTime=0
FormatLocale=local
DynamicVariables=1
UpdateDivider=#UpdateRate#

[MeasureTime5Zone]
Measure=Calc
Formula=([MeasureOffset5]/3600000)
DynamicVariables=1
UpdateDivider=#UpdateRate#

; Location6
[MeasureName6]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureTimes]
StringIndex=11
Substitute="":"0"
DecodeCharacterReference=1
UpdateDivider=#UpdateRate#

[MeasureOffset6]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureTimes]
StringIndex=12
Substitute="":"0"
UpdateDivider=#UpdateRate#

[MeasureTime6]
Measure=Time
Format=#TimeFormat#
TimeZone=([MeasureOffset6]/3600000)
DaylightSavingTime=0
FormatLocale=local
DynamicVariables=1
UpdateDivider=#UpdateRate#

[MeasureTime6Zone]
Measure=Calc
Formula=([MeasureOffset6]/3600000)
DynamicVariables=1
UpdateDivider=#UpdateRate#
