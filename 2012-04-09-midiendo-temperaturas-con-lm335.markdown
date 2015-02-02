--- 
layout: post
status: publish
published: true
title: Midiendo temperaturas con LM335
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 415
wordpress_url: http://blog.elcacharreo.com/?p=415
date: 2012-04-09 00:34:36 +02:00
categories: 
- arduino
- electronica
- tutoriales
tags: 
- arduino
- temperatura
- lm335
- sensor temperatura
- sensor
comments: []

---
&nbsp;

<a href="http://upload.wikimedia.org/wikipedia/commons/3/35/LM35_temperature_sensor_semiconductor_thermometer_1480374_5_6_HDR_enhancer.jpg"><img class="alignleft" src="http://upload.wikimedia.org/wikipedia/commons/3/35/LM35_temperature_sensor_semiconductor_thermometer_1480374_5_6_HDR_enhancer.jpg" alt="" width="163" /></a>Ya hemos visto como medir temperaturas con diferentes sensores como el <a href="http://blog.elcacharreo.com/tag/dht11/" target="_blank">dth11</a> o el <a href="http://blog.elcacharreo.com/2011/11/27/arduinolee-temperaturas-con-mayor-precision-ds18x20/" target="_blank">ds18x20</a>. Ahora le toca el turno al LM335 de National (ahora de TI).

Funciona como un diodo zenner en el que el voltaje umbral es proporcional a la temperatura, con lo que el montaje es tan sencillo como se ve en la imagen. La resistencia R1 puede ser de 1K o 2K, pues lo importante es el voltaje que mediremos en el punto medio.

Mediremos la salida y podremos calcular la temperatura a partir de los miliVoltios leídos:

<p style="padding-left: 30px;"><code>T(ºC) = 100*v (en mV) - 273.15</code></p>

La transformación desde el valor analógico medido en arduino sería

<code>T(ºC) = 100*(valorRaw *5/1024) -273.15</code>

Además se puede <a href="http://www.arduino.cc/cgi-bin/yabb2/YaBB.pl?num=1285376572">calibrar</a> para obtener mayor precisión

Más detalles en el <a href="http://www.ti.com/lit/ds/symlink/lm135.pdf">datasheet</a>

Javacasm
