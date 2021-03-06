;//////////////////////////////////////////////////////////////////////////////////////////////////
;                                          HWiNFO Settings
;//////////////////////////////////////////////////////////////////////////////////////////////////
; Инструкции:
;
; 1. Установка и настройка HWiNFO.
;
; На экране настроек HWiNFO убедитесь, что проверяется опция «Поддержка общей памяти». Если ваш
; система имеет несколько графических процессоров, вы можете проверить "Пробуждение отключенных графических процессоров" и "Опрос спящих GUS"
; варианты, если это необходимо.
;
; На главном экране HWiNFO нажмите кнопку Датчики на панели инструментов. Кроме того, вы можете
; Нажмите на значок лотка HWiNFO и выберите опцию Sensors. В нижней части датчиков
; экран, нажмите кнопку Настройка датчиков. Изменение интервала сканирования до 1000 миллисекунд и
; нажмите кнопку Установить. При желании измените настройки температурных единиц на Фаренгейт.
; Нажмите OK, чтобы сохранить изменения, а затем свести к минимуму окно датчиков.
;
; ПРИМЕЧАНИЕ: Для достижения наилучших результатов при использовании графических процессоров AMD используйте версию HWiNFO 5.80 или позже.
;
; 2. Убедитесь, что приложение HWiNFO работает и окно датчиков включено!
;
; 3. Для гаджета вы настраиваете, нажмите значок ключа в правом верхнем углу, чтобы открыть
; Настройки, а затем нажмите на опцию «Показать общий просмотр памяти».
;
; ПРИМЕЧАНИЕ: По умолчанию для вас предусмотрены три предварительно настроенные скины GPU Meter; каждая кожа
; (в папках «GPU #0», «GPU #1» » » » »GPU #2») отслеживает определенный графический процессор, как показано на рисунке
; HWiNFO. Как правило, на большинстве систем, основанных на интеллекте, «GPU #0»
; интегрированный графический процессор (например, «Intel HD Графика»), в то время как «GPU #1» будет соответствовать вашему
; специализированный графический процессор (например, nVidia или AMD). процессоры AMD также предлагают интегрированные графические процессоры и будут
; Аналогично. Выберите GPU Meter (s), которые соответствуют GPU (ы), которые вы пытаетесь
; Монитор. Если у вас более 3 графических процессоров (например, установка четырехъядерных SLI), то вы можете
; инструкции по адресу:
; https://comments.deviantart.com/1/522574269/4563592085
; для создания дополнительных счетчиков графического процессора для #3 GPU, GPU No4 и т.д.
;
; ПРИМЕЧАНИЕ: По умолчанию, Все ЦП Метер контролирует процессор #0 как показано на HWiNFO. Если ваша система имеет
; несколько процессоров PHYSICAL (не путайте с процессорами LOGICAL или физическими ядрами)
; необходимо адаптировать инструкции для нескольких графических процессоров для создания или настройки
; Гаджеты для других процессоров.
; 4. Из раздела «Подробности датчика» общего просмотра памяти для каждого датчика (CPU,
; материнская плата, GPU и т.д.) найти переменные Sensor ID и Sensor Instance ниже и изменить
; гексадецимальные значения в соответствии с значениями, показанные в Viewer.
;
; Пример: идентификатор теплового датчика процессора и переменные экземпляра, показанные ниже:
; HWiNFO-CPU0-DTS-SensorId-0xf0000400
; HWiNFO-CPU0-DTS-SensorInstance-0x0
;
; В приложении «Зритель» щелкните «CPU »#0»: «Ваше имя процессора»: ветвь датчика DTS»
; Дерево. В разделе «Детали датчиков» подчеркнуте значение гексадецимального идентификатора
; (0xf0000400) и вставьте его в качестве значения переменной в 0:20
; этот файл. Выделите значение hexadecimal Instance (0x0) и вставьте его в качестве значения
; переменной «HWiNFO-CPU0-DTS-SensorInstance».
;
; ПРИМЕЧАНИЕ: Если у вас нет определенного датчика (т.е. у вас нет «GPU #1»), то вы можете
; использовать id и значение инстанции в размере «0x0» или оставить значения как показанные до тех пор, пока они
; не конфликтуют с другим датчиком.
;
; Если у вас нет определенной записи для датчика (т.е. у вас нет ядер 5/6/7/8),
; затем для этого датчика вы можете использовать входные ИД "0x0" или вы можете оставить значения, как показано на рисунке
; до тех пор, пока они не противоречат другому датчику.
;
; ПРИМЕЧАНИЕ: Если HWiNFO сообщает, что ваша система имеет #1 графического процессора, но не показывает #0 GPU или показывает
; ограниченные данные для GPU #0, а затем записывать значения, показанные в Общей памяти Viewer для
; GPU #1 против переменных GPU 0 ниже. Эта ситуация может возникнуть, когда у вас есть
; несколько графических процессоров и первый графический процессор (#0) отключен и/или HWiNFO не могут разбудить его (например,
; nVidia Оптимус).
;
; СОВЕТ: Отличное подробное руководство по работе с плагином HWiNFO можно найти на
; Форум "Дождь" здесь: https://forum.rainmeter.net/viewtopic.php?f=118&t=21939
;
; 5. Из раздела «Детали входа» в разделе «Общий зритель памяти» найдите идентификатор входа,
; соответствует переменным Entry ID ниже и изменяет гексадецимальные значения в соответствии с
; значения, показанные в Viewer.
;
; Пример: переменный датчик #0 датчика температуры процессора, показанный ниже, это:
; HWiNFO-CPU0-DTS-Core0Temp-0x1000000
;
; В приложении «Зритель» расширьте ветку датчика «CPU »#0»: «Ваше имя процессора»: DTS» ветку датчика
; дерево и искать запись под названием "Core #0" и выбрать его. В левом нижнем углу
; из сведения о вводе, выделить гексадецимальной значение ID (0x1000000) и вставить его в качестве
; значение переменной в этом файле "HWiNFO-CPU0-DTS-Core0Temp".
;
; ПРИМЕЧАНИЕ: Если вы не можете найти идентификатор входа для переменной, указанной ниже в Viewer, это может просто
; означает, что датчик не доступен на вашем оборудовании, или, что имя датчика
; немного отличается от показанных. (Например, у меня есть машина, где вентилятор GPU
; показан как «GPU», другой, где он показан как «Система/GPU», и другой, где нет
; Датчик вентилятора GPU на всех.) Используйте значение «0x0», если у вас нет определенного датчика.
;
; ПРИМЕЧАНИЕ: Некоторые системы могут не иметь датчик, который сообщает использование вентилятора в процентах. Если ваш
; система сообщает RPM вентилятора, но не процент использования, то вы можете иметь GPU Meter вычислить
; процентов использования для вас. В настройках GPU Meter проверьте «Рассчитать »
; опция и введите максимальную скорость вентилятора.
;
;
; SPECIAL ПРИМЕЧАНИЕ Относительно ГРАФИЧЕСКИХ процессоров AMD:
; На момент написания этой статьи, некоторые новые графические процессоры AMD и драйверы теперь поддерживают отчетность о сумме
; видео оперативной памяти в использовании. HWiNFO v5.80 и более поздний срок требуется для мониторинга этого значения. Карты AMD
; не сообщают о сумме оперативной памяти в процентах и не сообщают об общей сумме
; специальная оперативная память, которая установлена. В результате необходимо вручную настроить настройки
; ниже, чтобы сказать GPU Meter, сколько выделенной оперативной памяти ваша карта имеет в наличии.
;
; Для старых видеокарт AMD и ATI, а также для старых версий HWiNFO, вы не сможете
; контролировать количество оперативной памяти в использовании, ни общее количество оперативной памяти доступны. Это известный
; ограничение видеокарт ATI/AMD, а не проблема с HWiNFO, Rainmeter или GPU Meter.
; Оригинальный addgadgets.com Sidebar Gadget не сообщил эти значения для карт AMD
; Либо. Вам нужно будет установить значения идентификатора входа для «HWiNFO-GPUn-MemoryUsage» и
; "HWiNFO-GPUn-MemoryAlloc" переменные для их отключения.
;
; SPECIAL ПРИМЕЧАНИЕ Относительно процессоров AMD:
; На момент написания этой статьи некоторые процессоры AMD не сообщают о температурах на основе одного ядра; есть
; является лишь одним датчиком температуры для димсора и/или общего процессора. В этом случае
; Ваш единственный вариант заключается в записи входа ID датчика температуры процессора против всех
; Ядер. Это приведет к все процессор Метр гаджет отображает ту же температуру для
; каждое ядро.
;
; 6. После того как вы прошли через раздражающий и болезненный процесс отображения всех ценностей, пожалуйста,
; сделать резервную копию этого файла и хранить его в безопасном месте. При обновлении или переустановке
; ваши гаджеты, этот файл будет заменен установщиком и ваша работа будет потеряна (извините).
;
;
; ЗАВЕРШЕН ПРИМЕЧАНИЕ: Каждый процессор, материнская плата, графический процессор и т.д. БУДЕТ ИМЕТЬ DIFFERENT SENSOR и ENTRY ИД.  Ваш компьютер
;             может не иметь одного или нескольких датчиков, или названия датчиков могут быть
;             совершенно разные.  Не меняйте переменные имена, только значения. Значения
;             ниже приведены только примеры и очень вероятно, отличаются для вашей машины.  Если ваш
;             Гаджеты не отображают никаких данных, а затем перепроверяют настройки ниже и
;             уверен, что приложение HWiNFO работает и окна датчиков также работает.  Пожалуйста
;             не свяжитесь со мной, если вы не видите ничего происходит, потому что, скорее всего, это ваш
;             конфигурация, которая является проблемой.
;
; FINAL FINAL ПРИМЕЧАНИЕ: Если вы не читали выше пункта, теперь будет хорошее время. :^)
;

[Variables]
;
; CPU #0
;
; sensor ID and instance
HWiNFO-CPU0-SensorId=0xf0000300
HWiNFO-CPU0-SensorInstance=0x0
; entry IDs
; CPU usage (percent)
HWiNFO-CPU0-Usage=0x7000009
; core 0 clock frequency (MHz)
HWiNFO-CPU0-Core0Clock=0x6000000
; core 1 clock frequency (MHz)
HWiNFO-CPU0-Core1Clock=0x6000001
; core 2 clock frequency (MHz)
HWiNFO-CPU0-Core2Clock=0x6000002
; core 3 clock frequency (MHz)
HWiNFO-CPU0-Core3Clock=0x6000003
; core 4 clock frequency (MHz)
HWiNFO-CPU0-Core4Clock=0x0
; core 5 clock frequency (MHz)
HWiNFO-CPU0-Core5Clock=0x0
; core 6 clock frequency (MHz)
HWiNFO-CPU0-Core6Clock=0x0
; core 7 clock frequency (MHz)
HWiNFO-CPU0-Core7Clock=0x0
; core 8 clock frequency (MHz)
HWiNFO-CPU0-Core8Clock=0x0
; core 9 clock frequency (MHz)
HWiNFO-CPU0-Core9Clock=0x0
; core 10 clock frequency (MHz)
HWiNFO-CPU0-Core10Clock=0x0
; core 11 clock frequency (MHz)
HWiNFO-CPU0-Core11Clock=0x0
; core 12 clock frequency (MHz)
HWiNFO-CPU0-Core12Clock=0x0
; core 13 clock frequency (MHz)
HWiNFO-CPU0-Core13Clock=0x0
; core 14 clock frequency (MHz)
HWiNFO-CPU0-Core14Clock=0x0
; core 15 clock frequency (MHz)
HWiNFO-CPU0-Core15Clock=0x0
; core 16 clock frequency (MHz)
HWiNFO-CPU0-Core16Clock=0x0
; core 17 clock frequency (MHz)
HWiNFO-CPU0-Core17Clock=0x0
; core 18 clock frequency (MHz)
HWiNFO-CPU0-Core18Clock=0x0
; core 19 clock frequency (MHz)
HWiNFO-CPU0-Core19Clock=0x0
; core 20 clock frequency (MHz)
HWiNFO-CPU0-Core20Clock=0x0
; core 21 clock frequency (MHz)
HWiNFO-CPU0-Core21Clock=0x0
; core 22 clock frequency (MHz)
HWiNFO-CPU0-Core22Clock=0x0
; core 23 clock frequency (MHz)
HWiNFO-CPU0-Core23Clock=0x0
; core 24 clock frequency (MHz)
HWiNFO-CPU0-Core24Clock=0x0
; core 25 clock frequency (MHz)
HWiNFO-CPU0-Core25Clock=0x0
; core 26 clock frequency (MHz)
HWiNFO-CPU0-Core26Clock=0x0
; core 27 clock frequency (MHz)
HWiNFO-CPU0-Core27Clock=0x0
; core 28 clock frequency (MHz)
HWiNFO-CPU0-Core28Clock=0x0
; core 29 clock frequency (MHz)
HWiNFO-CPU0-Core29Clock=0x0
; core 30 clock frequency (MHz)
HWiNFO-CPU0-Core30Clock=0x0
; core 31 clock frequency (MHz)
HWiNFO-CPU0-Core31Clock=0x0

;
; CPU #0 DTS
; (For AMD CPUs, see the special note in instruction step #4 above.)
;
; sensor ID and instance
HWiNFO-CPU0-DTS-SensorId=0xf0000400
HWiNFO-CPU0-DTS-SensorInstance=0x0
; entry IDs
; core 0 temperature (degrees)
HWiNFO-CPU0-DTS-Core0Temp=0x1000000
; core 1 temperature (degrees)
HWiNFO-CPU0-DTS-Core1Temp=0x1000001
; core 2 temperature (degrees)
HWiNFO-CPU0-DTS-Core2Temp=0x1000002
; core 3 temperature (degrees)
HWiNFO-CPU0-DTS-Core3Temp=0x1000003
; core 4 temperature (degrees)
HWiNFO-CPU0-DTS-Core4Temp=0x0
; core 5 temperature (degrees)
HWiNFO-CPU0-DTS-Core5Temp=0x0
; core 6 temperature (degrees)
HWiNFO-CPU0-DTS-Core6Temp=0x0
; core 7 temperature (degrees)
HWiNFO-CPU0-DTS-Core7Temp=0x0
; core 8 temperature (degrees)
HWiNFO-CPU0-DTS-Core8Temp=0x0
; core 9 temperature (degrees)
HWiNFO-CPU0-DTS-Core9Temp=0x0
; core 10 temperature (degrees)
HWiNFO-CPU0-DTS-Core10Temp=0x0
; core 11 temperature (degrees)
HWiNFO-CPU0-DTS-Core11Temp=0x0
; core 12 temperature (degrees)
HWiNFO-CPU0-DTS-Core12Temp=0x0
; core 13 temperature (degrees)
HWiNFO-CPU0-DTS-Core13Temp=0x0
; core 14 temperature (degrees)
HWiNFO-CPU0-DTS-Core14Temp=0x0
; core 15 temperature (degrees)
HWiNFO-CPU0-DTS-Core15Temp=0x0
; core 16 temperature (degrees)
HWiNFO-CPU0-DTS-Core16Temp=0x0
; core 17 temperature (degrees)
HWiNFO-CPU0-DTS-Core17Temp=0x0
; core 18 temperature (degrees)
HWiNFO-CPU0-DTS-Core18Temp=0x0
; core 19 temperature (degrees)
HWiNFO-CPU0-DTS-Core19Temp=0x0
; core 20 temperature (degrees)
HWiNFO-CPU0-DTS-Core20Temp=0x0
; core 21 temperature (degrees)
HWiNFO-CPU0-DTS-Core21Temp=0x0
; core 22 temperature (degrees)
HWiNFO-CPU0-DTS-Core22Temp=0x0
; core 23 temperature (degrees)
HWiNFO-CPU0-DTS-Core23Temp=0x0
; core 24 temperature (degrees)
HWiNFO-CPU0-DTS-Core24Temp=0x0
; core 25 temperature (degrees)
HWiNFO-CPU0-DTS-Core25Temp=0x0
; core 26 temperature (degrees)
HWiNFO-CPU0-DTS-Core26Temp=0x0
; core 27 temperature (degrees)
HWiNFO-CPU0-DTS-Core27Temp=0x0
; core 28 temperature (degrees)
HWiNFO-CPU0-DTS-Core28Temp=0x0
; core 29 temperature (degrees)
HWiNFO-CPU0-DTS-Core29Temp=0x0
; core 30 temperature (degrees)
HWiNFO-CPU0-DTS-Core30Temp=0x0
; core 31 temperature (degrees)
HWiNFO-CPU0-DTS-Core31Temp=0x0
; maximum current core temperature (degrees)
HWiNFO-CPU0-DTS-CoreMax=0x100007f

;
; CPU #1
;
; sensor ID and instance
HWiNFO-CPU1-SensorId=0xf0000300
HWiNFO-CPU1-SensorInstance=0x0
; entry IDs
; CPU usage (percent)
HWiNFO-CPU1-Usage=0x7000009
; core 0 clock frequency (MHz)
HWiNFO-CPU1-Core0Clock=0x6000000
; core 1 clock frequency (MHz)
HWiNFO-CPU1-Core1Clock=0x6000001
; core 2 clock frequency (MHz)
HWiNFO-CPU1-Core2Clock=0x6000002
; core 3 clock frequency (MHz)
HWiNFO-CPU1-Core3Clock=0x6000003
; core 4 clock frequency (MHz)
HWiNFO-CPU1-Core4Clock=0x0
; core 5 clock frequency (MHz)
HWiNFO-CPU1-Core5Clock=0x0
; core 6 clock frequency (MHz)
HWiNFO-CPU1-Core6Clock=0x0
; core 7 clock frequency (MHz)
HWiNFO-CPU1-Core7Clock=0x0
; core 8 clock frequency (MHz)
HWiNFO-CPU1-Core8Clock=0x0
; core 9 clock frequency (MHz)
HWiNFO-CPU1-Core9Clock=0x0
; core 10 clock frequency (MHz)
HWiNFO-CPU1-Core10Clock=0x0
; core 11 clock frequency (MHz)
HWiNFO-CPU1-Core11Clock=0x0
; core 12 clock frequency (MHz)
HWiNFO-CPU1-Core12Clock=0x0
; core 13 clock frequency (MHz)
HWiNFO-CPU1-Core13Clock=0x0
; core 14 clock frequency (MHz)
HWiNFO-CPU1-Core14Clock=0x0
; core 15 clock frequency (MHz)
HWiNFO-CPU1-Core15Clock=0x0
; core 16 clock frequency (MHz)
HWiNFO-CPU1-Core16Clock=0x0
; core 17 clock frequency (MHz)
HWiNFO-CPU1-Core17Clock=0x0
; core 18 clock frequency (MHz)
HWiNFO-CPU1-Core18Clock=0x0
; core 19 clock frequency (MHz)
HWiNFO-CPU1-Core19Clock=0x0
; core 20 clock frequency (MHz)
HWiNFO-CPU1-Core20Clock=0x0
; core 21 clock frequency (MHz)
HWiNFO-CPU1-Core21Clock=0x0
; core 22 clock frequency (MHz)
HWiNFO-CPU1-Core22Clock=0x0
; core 23 clock frequency (MHz)
HWiNFO-CPU1-Core23Clock=0x0
; core 24 clock frequency (MHz)
HWiNFO-CPU1-Core24Clock=0x0
; core 25 clock frequency (MHz)
HWiNFO-CPU1-Core25Clock=0x0
; core 26 clock frequency (MHz)
HWiNFO-CPU1-Core26Clock=0x0
; core 27 clock frequency (MHz)
HWiNFO-CPU1-Core27Clock=0x0
; core 28 clock frequency (MHz)
HWiNFO-CPU1-Core28Clock=0x0
; core 29 clock frequency (MHz)
HWiNFO-CPU1-Core29Clock=0x0
; core 30 clock frequency (MHz)
HWiNFO-CPU1-Core30Clock=0x0
; core 31 clock frequency (MHz)
HWiNFO-CPU1-Core31Clock=0x0

;
; CPU #1 DTS
; (For AMD CPUs, see the special note in instruction step #4 above.)
;
; sensor ID and instance
HWiNFO-CPU1-DTS-SensorId=0xf0000400
HWiNFO-CPU1-DTS-SensorInstance=0x0
; entry IDs
; core 0 temperature (degrees)
HWiNFO-CPU1-DTS-Core0Temp=0x1000000
; core 1 temperature (degrees)
HWiNFO-CPU1-DTS-Core1Temp=0x1000001
; core 2 temperature (degrees)
HWiNFO-CPU1-DTS-Core2Temp=0x1000002
; core 3 temperature (degrees)
HWiNFO-CPU1-DTS-Core3Temp=0x1000003
; core 4 temperature (degrees)
HWiNFO-CPU1-DTS-Core4Temp=0x0
; core 5 temperature (degrees)
HWiNFO-CPU1-DTS-Core5Temp=0x0
; core 6 temperature (degrees)
HWiNFO-CPU1-DTS-Core6Temp=0x0
; core 7 temperature (degrees)
HWiNFO-CPU1-DTS-Core7Temp=0x0
; core 8 temperature (degrees)
HWiNFO-CPU1-DTS-Core8Temp=0x0
; core 9 temperature (degrees)
HWiNFO-CPU1-DTS-Core9Temp=0x0
; core 10 temperature (degrees)
HWiNFO-CPU1-DTS-Core10Temp=0x0
; core 11 temperature (degrees)
HWiNFO-CPU1-DTS-Core11Temp=0x0
; core 12 temperature (degrees)
HWiNFO-CPU1-DTS-Core12Temp=0x0
; core 13 temperature (degrees)
HWiNFO-CPU1-DTS-Core13Temp=0x0
; core 14 temperature (degrees)
HWiNFO-CPU1-DTS-Core14Temp=0x0
; core 15 temperature (degrees)
HWiNFO-CPU1-DTS-Core15Temp=0x0
; core 16 temperature (degrees)
HWiNFO-CPU1-DTS-Core16Temp=0x0
; core 17 temperature (degrees)
HWiNFO-CPU1-DTS-Core17Temp=0x0
; core 18 temperature (degrees)
HWiNFO-CPU1-DTS-Core18Temp=0x0
; core 19 temperature (degrees)
HWiNFO-CPU1-DTS-Core19Temp=0x0
; core 20 temperature (degrees)
HWiNFO-CPU1-DTS-Core20Temp=0x0
; core 21 temperature (degrees)
HWiNFO-CPU1-DTS-Core21Temp=0x0
; core 22 temperature (degrees)
HWiNFO-CPU1-DTS-Core22Temp=0x0
; core 23 temperature (degrees)
HWiNFO-CPU1-DTS-Core23Temp=0x0
; core 24 temperature (degrees)
HWiNFO-CPU1-DTS-Core24Temp=0x0
; core 25 temperature (degrees)
HWiNFO-CPU1-DTS-Core25Temp=0x0
; core 26 temperature (degrees)
HWiNFO-CPU1-DTS-Core26Temp=0x0
; core 27 temperature (degrees)
HWiNFO-CPU1-DTS-Core27Temp=0x0
; core 28 temperature (degrees)
HWiNFO-CPU1-DTS-Core28Temp=0x0
; core 29 temperature (degrees)
HWiNFO-CPU1-DTS-Core29Temp=0x0
; core 30 temperature (degrees)
HWiNFO-CPU1-DTS-Core30Temp=0x0
; core 31 temperature (degrees)
HWiNFO-CPU1-DTS-Core31Temp=0x0
; maximum current core temperature (degrees)
HWiNFO-CPU1-DTS-CoreMax=0x100007f

;
; Motherboard
;
; sensor ID and instance
HWiNFO-MOBO-SensorId=0xf0ec0101
HWiNFO-MOBO-SensorInstance=0x0
; entry IDs
; CPU fan speed (RPM)
HWiNFO-MOBO-CPUFan=0x3000000
; GPU fan speed (RPM) as reported by the motherboard sensor
;   IMPORTANT:  If your GPU fan speed is reported by the GPU sensor instead of the motherboard
;               sensor, you must set this value to 0x0 in order for the GPU Meter to correctly
;               monitor your GPU fan speed.
HWiNFO-MOBO-GPUFan=0x3000001

;
; GPU #0
; (For AMD GPUs, see the special note in instruction step #4 above.)
; (HWiNFO and the Shared Memory Viewer may not show GPU #0 in cases where you have a dedicated
; graphics card.)
;
; sensor ID and instance
HWiNFO-GPU0-SensorId=0xe0002000
HWiNFO-GPU0-SensorInstance=0x0
; entry IDs
; GPU core clock frequency (MHz)
HWiNFO-GPU0-Clock=0x6000000
; GPU temperature (degrees)
HWiNFO-GPU0-Temp=0x1000000
; GPU load (percent)
HWiNFO-GPU0-CoreLoad=0x7000000
; GPU memory clock frequency (MHz)
HWiNFO-GPU0-MemoryClock=0x6000004
; GPU memory usage (percent)
;   NOTE: for nVidia GPUs ONLY, this sensor reports the percentage of RAM in use
;   NOTE: for all AMD and Intel GPUs, you MUST set this value to 0x0 since this sensor does not exist
HWiNFO-GPU0-MemoryUsage=0x7000008
; GPU memory allocated (MB)
;   NOTE: for nVidia GPUs, set the following value to the ID of the "GPU Memory Allocated" sensor (i.e., amount of VRAM allocated, in megabytes)
;   NOTE: for *some* AMD GPUs, set the following value to the ID of the "GPU Memory Usage" sensor (i.e., amount of VRAM allocated, in megabytes)
;   NOTE: for *most* AMD GPUs, set the following value to 0x0 since there is no sensor available to report allocated VRAM
;   NOTE: for Intel GPUs, set the following value to 0x0 since there is no sensor available to report allocated VRAM
HWiNFO-GPU0-MemoryAlloc=0x800003c
; GPU fan usage (percent, not RPM!)
;   IMPORTANT:  If your GPU sensor does not show fan usage, see below to set FanCalcMethod=1
HWiNFO-GPU0-FanSpeed=0x8000000
; GPU core voltage (volts)
HWiNFO-GPU0-CoreVoltage=0x2000000
; GPU fan speed (RPM) as reported by the GPU0 sensor
;   IMPORTANT:  If your GPU sensor reports fan speed, see the motherboard GPU fan sensor note above.
HWiNFO-GPU0-GPUFan=0x3000000

; GPU #0 RAM: for AMD GPUs, enter the total amount of dedicated RAM in megabytes (1 GB = 1024 MB)
;             for nVidia GPUs, you MUST set this value to 0 (zero)
;             for Intel GPUs, you MUST set this value to 0 (zero), as these GPUs have no dedicated RAM.
GPU0-MemoryTotal=0

;
; GPU #1
; (For AMD GPUs, see the special note in instruction step #4 above.)
;
; sensor ID and instance
HWiNFO-GPU1-SensorId=0xe0002000
HWiNFO-GPU1-SensorInstance=0x0
; entry IDs
; GPU core clock frequency (MHz)
HWiNFO-GPU1-Clock=0x6000000
; GPU temperature (degrees)
HWiNFO-GPU1-Temp=0x1000000
; GPU load (percent)
HWiNFO-GPU1-CoreLoad=0x7000000
; GPU memory clock frequency (MHz)
HWiNFO-GPU1-MemoryClock=0x6000004
; GPU memory usage (percent)
;   NOTE: for nVidia GPUs ONLY, this sensor reports the percentage of RAM in use
;   NOTE: for all AMD and Intel GPUs, you MUST set this value to 0x0 since this sensor does not exist
HWiNFO-GPU1-MemoryUsage=0x7000008
; GPU memory allocated (MB)
;   NOTE: for nVidia GPUs, set the following value to the ID of the "GPU Memory Allocated" sensor (i.e., amount of VRAM allocated, in megabytes)
;   NOTE: for *some* AMD GPUs, set the following value to the ID of the "GPU Memory Usage" sensor (i.e., amount of VRAM allocated, in megabytes)
;   NOTE: for *most* AMD GPUs, set the following value to 0x0 since there is no sensor available to report allocated VRAM
;   NOTE: for Intel GPUs, set the following value to 0x0 since there is no sensor available to report allocated VRAM
HWiNFO-GPU1-MemoryAlloc=0x800003c
; GPU fan usage (percent, not RPM!)
;   IMPORTANT:  If your GPU sensor does not show fan usage, see below to set FanCalcMethod=1
HWiNFO-GPU1-FanSpeed=0x8000000
; GPU core voltage (volts)
HWiNFO-GPU1-CoreVoltage=0x2000000
; GPU fan speed (RPM) as reported by the GPU1 sensor
;   IMPORTANT:  If your GPU sensor reports fan speed, see the motherboard GPU fan sensor note above.
HWiNFO-GPU1-GPUFan=0x3000000

; GPU #1 RAM: for AMD GPUs, enter the total amount of dedicated RAM in megabytes (1 GB = 1024 MB)
;             for nVidia GPUs, you MUST set this value to 0 (zero)
;             for Intel GPUs, you MUST set this value to 0 (zero), as these GPUs have no dedicated RAM.
GPU1-MemoryTotal=0

;
; GPU #2
; (For AMD GPUs, see the special note in instruction step #4 above.)
; (Typically, GPU #2 and more will only be used with systems having multiple dedicated GPUs (SLI).)
;
; sensor ID and instance
HWiNFO-GPU2-SensorId=0xe0002000
HWiNFO-GPU2-SensorInstance=0x0
; entry IDs
; GPU core clock frequency (MHz)
HWiNFO-GPU2-Clock=0x6000000
; GPU temperature (degrees)
HWiNFO-GPU2-Temp=0x1000000
; GPU load (percent)
HWiNFO-GPU2-CoreLoad=0x7000000
; GPU memory clock frequency (MHz)
HWiNFO-GPU2-MemoryClock=0x6000004
; GPU memory usage (percent)
;   NOTE: for nVidia GPUs ONLY, this sensor reports the percentage of RAM in use
;   NOTE: for all AMD and Intel GPUs, you MUST set this value to 0x0 since this sensor does not exist
HWiNFO-GPU2-MemoryUsage=0x7000008
; GPU memory allocated (MB)
;   NOTE: for nVidia GPUs, set the following value to the ID of the "GPU Memory Allocated" sensor (i.e., amount of VRAM allocated, in megabytes)
;   NOTE: for *some* AMD GPUs, set the following value to the ID of the "GPU Memory Usage" sensor (i.e., amount of VRAM allocated, in megabytes)
;   NOTE: for *most* AMD GPUs, set the following value to 0x0 since there is no sensor available to report allocated VRAM
;   NOTE: for Intel GPUs, set the following value to 0x0 since there is no sensor available to report allocated VRAM
HWiNFO-GPU2-MemoryAlloc=0x800003c
; GPU fan usage (percent, not RPM!)
;   IMPORTANT:  If your GPU sensor does not show fan usage, see below to set FanCalcMethod=1
HWiNFO-GPU2-FanSpeed=0x8000000
; GPU core voltage (volts)
HWiNFO-GPU2-CoreVoltage=0x2000000
; GPU fan speed (RPM) as reported by the GPU2 sensor
;   IMPORTANT:  If your GPU sensor reports fan speed, see the motherboard GPU fan sensor note above.
HWiNFO-GPU2-GPUFan=0x3000000

; GPU #2 RAM: for AMD GPUs, enter the total amount of dedicated RAM in megabytes (1 GB = 1024 MB)
;             for nVidia GPUs, you MUST set this value to 0 (zero)
;             for Intel GPUs, you MUST set this value to 0 (zero), as these GPUs have no dedicated RAM.
GPU2-MemoryTotal=0

;
; Battery #0
;
; sensor ID and instance
HWiNFO-BAT0-SensorId=0xf000ba00
HWiNFO-BAT0-SensorInstance=0x0
; entry IDs
; battery voltage (V)
HWiNFO-BAT0-Voltage=0x2000000
; remaining capacity (Wh)
HWiNFO-BAT0-Capacity=0x8000000
; charge level (%)
HWiNFO-BAT0-ChargeLevel=0x8000001
; charge rate (W)
HWiNFO-BAT0-ChargeRate=0x8000002

;
; Battery #1
;
; sensor ID and instance
HWiNFO-BAT1-SensorId=0xf000ba00
HWiNFO-BAT1-SensorInstance=0x0
; entry IDs
; battery voltage (V)
HWiNFO-BAT1-Voltage=0x2000000
; remaining capacity (Wh)
HWiNFO-BAT1-Capacity=0x8000000
; charge level (%)
HWiNFO-BAT1-ChargeLevel=0x8000001
; charge rate (W)
HWiNFO-BAT1-ChargeRate=0x8000002

;
; максимальная скорость вентилятора (используется для оборудования, которое не может сообщить об использовании вентилятора в процентах)
;
; ПРИМЕЧАНИЕ: Если более высокие скорости вентилятора, чем показано здесь встречаются, GPU Meter / Все процессор Метр будет
;       автоматически корректно корректить эти значения с новой максимальной скоростью, если FanMaxAutoUpdate установлен на 1.
;
; ПРИМЕЧАНИЕ: Установите FanMaxAutoUpdate-0, чтобы предотвратить GPU Meter/All CPU Meter от корректировки максимальных значений.
;
; ПРИМЕЧАНИЕ: Некоторые системы не сообщают об использовании вентилятора GPU (т.е. процент максимальной скорости вентилятора).
;       GPU Meter будет рассчитывать процент использования для вас, используя максимальную скорость вентилятора
;       Значения.  Расчет контролируется переменной FanCalcMethod.  Обратите внимание, что это
;       применяется только к гаджету GPU Meter; Все процессор Метр гаджет должен всегда вычислить
;       использование процентов для вентилятора процессора, так как ни HWiNFO, ни SpeedFan не могут сообщить об этом значении.
;
;       FanCalcMethod 0 - Оборудование/HWiNFO сообщает проценты.
;       FanCalcMethod 1 и GPU Meter вычисляют проценты.
;
FanCalcMethod=1
FanCpuMax=500
FanGpuMax=500
FanMaxAutoUpdate=1
