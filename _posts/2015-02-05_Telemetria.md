---
title: Telemetría
layout: post
published: true
---
![Telemetría en f1](https://fasterf1.files.wordpress.com/2010/12/susposul9.jpg)

Vamos a empezar una serie de artículos sobre las aplicaciones de arduino a la [telemetría](http://es.wikipedia.org/wiki/Telemetr%C3%ADa). Es lo bueno de impartir cursos: nunca paras de aprender con las preguntas de los alumnos. Siempre hay propuestas de nuevos proyectos.



Comenzaremos viendo las distintas alternativas y sus ventajas e incovenientes

## Alternativas

* 3Dr (UART sobre radio)
* Bluetooth
* Wifi ([algo sobre el tema en este blog](http://blog.elcacharreo.com/tag/wifi/) )
* Zigbee
* RF
* Nordic 
* GSM
Veamos una tabla comparativa

Nombre|conexión|coste|alcance|ancho de banda|inconvenientes
-----|----|----|----|----|----
3Dr|UART/serie|barato|1-2Km|100Kb/s| --
Bluetooth|UART/serie|barato|6-8m|100Kb/s|corto alcance
Wifi|SPI/Serie|hay alternativas baratas|50m|1Mb/s|interferencias y mósulos complejos
Zigbee|UART/Serie|medio|1-2Km|100kb|caros y propietarios
RF|digital|baratisimo|10m|1Kb/s|muchísimas interferencias
Nordic|SPI|baratisimo|1-2km|2Mb/s|--
GSM|UART/Serie|medio|ilimitado|1Mb/s|necesita covertura y costes de uso



## Proyectos similares

Veamos algunos proyectos y qué sistema usan

* [Uso de telemetría en drone (en)](http://copter.ardupilot.com/wiki/3dradio/) 

* [Telemetría con dataloger (es)](http://blog.alvarolopez.net/2012/09/inflight-telemetry-and-data-logger-with-arduino/) Utiliza 3DR y su software en la [segunda parte](http://blog.alvarolopez.net/2012/09/telemetria-y-data-logger-with-arduino-part-ii/)

* [Telemetría de cohete de agua](http://www.instructables.com/id/Radio-Telemetry-for-a-Model-Rocket/) Utiliza Jeenode

Parece que los más usados son los sitemas 3DR 

## Veamos dónde comprarlos baratos

* [Dx](https://www.dx.com/es/s/telemetria)
* [Pareja con USB](http://eud.dx.com/product/433mhz-single-ttl-3d-robotics-3dr-radio-telemetry-kit-for-apm-apm2-blue-green-844235604#.VNMsYjaG-Ht)