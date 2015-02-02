--- 
layout: post
status: publish
published: true
title: Alimentar arduino con 3.3v
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 400
wordpress_url: http://blog.elcacharreo.com/?p=400
date: 2012-03-30 02:30:18 +02:00
categories: 
- arduino
- electronica
- tutoriales
tags: 
- arduino
- electronica
- 3.3v
- 5v
comments: []

---
<img class="alignleft" style="margin: 10px;" title="arduino 3.3v" src="http://www.ladyada.net/wiki/lib/exe/fetch.php?hash=028331&amp;w=500&amp;h=312&amp;media=http%3A%2F%2Fwww.ladyada.net%2Fimages%2Farduino%2F3v3%2Fdiode_t.jpg" alt="" width="350" height="218" />Cada vez son más los "periféricos" que queremos conectar a arduino que funcionan a 3.3v para lo cual necesitamos adaptar los niveles lógicos en la placa de Arduino son 5V.

Otro motivo puede ser que nuestra fuente de alimentación no llegue a 5v (como es mi caso).

Para llevar a cabo esta adaptación basta con sustituir el regular de la placa, que originalmente es de 5v por uno de 3.3v y hacer que la alimentación que llega desde el conectar usb, que originariamente no pasa por el regulador,  ahora pase por este. Esto último lo conseguiremos eliminando el fusible y añadiendo un diodo entre la salida del conector USB y el regulador como podemos ver en la foto adjunta.

Podemos ver todo el proceso detallado en la tutorial de <a href="http://www.ladyada.net/library/arduino/3v3_arduino.html">adafruit</a>.

Javacasm
