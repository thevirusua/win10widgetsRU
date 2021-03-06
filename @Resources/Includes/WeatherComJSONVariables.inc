[Variables]

; Обратите внимание, что коды местоположения, такие как USVA0944 или другие типы кодов, больше не поддерживаются.

; Вы должны использовать значения Широты и Долготы для вашего местоположения.
; Эти значения можно найти для вашего города по ссылке:
; https://dateandtime.info/ru/citycoordinates.php
; Вам нужно скопировать значения координат в десятичных градусах и вставить их ниже где Latitude - широта и Longitude - долгота.
; Для примера: 
; Координаты Москвы в десятичных градусах:
; Широта: 55.7522200°
; Долгота: 37.6155600°
; Исходя из этого, значения Latitude и Longitude, будут равны 55.75222 и 37.61556 соответственно.

Latitude=50.27282
Longitude=30.31257

; Как часто обновлять информацию о погоде. По умолчанию рекомендуется 600, что составляет 10 минут.
UpdateRate=600





; Не меняйте ничего ниже этого.
Language=ru-RU
DateFormat=%A, %B %#d, %Y
TimeFormat=%R
Units=m
APIKey=d522aa97197fd864d36b418f39ebb323
CommonSubstitute='"':"","^null$":"","\\u002F":"/","\\u005C":"\","\\u003C":"<","\\u003E":">"
URLSite=https://api.weather.com/v3/aggcommon/v3-wx-observations-current;v3-wx-forecast-daily-15day;v3alertsHeadlines;v3-location-point?format=json&geocode=#Latitude#,#Longitude#&units=#Units#&language=#Language#&apiKey=#APIKey#
