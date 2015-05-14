--- 
layout: post
status: publish
published: true
title: "Introducci\xC3\xB3n a netduino I"
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 68
wordpress_url: http://blog.elcacharreo.com/?p=68
date: 2011-06-19 21:35:26 +02:00
categories: 
- arduino
- netduino
tags: 
- arduino
- netduino
comments: 
- id: 10
  author: "Introducci\xC3\xB3n a netduino II &laquo; El Cacharreo.com"
  author_email: ""
  author_url: http://blog.elcacharreo.com/2011/06/19/introduccion-a-netduino-ii/
  date: 2011-06-19 23:06:11 +0200
  date_gmt: 2011-06-19 23:06:11 +0200
  content: "[...]  [...]"
---
El universo arduino ha popularizado el uso de hardware entre personas de menor perfil técnico demostrando que, al igual que pasó con el software, cualquiera con un poco de cuidado es capaz de desarrollar un prototipo hardware, algo impensable hace unos años.

Además ha permitido generar una enorme familia de placas de <a href="http://en.wikipedia.org/wiki/Arduino" target="_blank">hardware compatibles</a> y de distintas tecnologías con la facilidad de uso como característica principal.

Una de estas placas compatibles a nivel eléctrico, aunque muy diferente en cuanto a la tecnología que usa es <a href="http://www.netduino.com" target="_blank">netduino</a>

<img class="aligncenter" title="netduino" src="https://lh4.googleusercontent.com/-D5-y47YPmxs/Tf5WdqLDpqI/AAAAAAAAAA8/s07qb75rEIo/s400/DSCF0440.JPG" alt="netduino" width="400" height="267" />

Netduino está basado en un micro Atmel de 32-bit corriendo 48MHz de arquitectura ARM7 con 128 KB de almacenamiento de código y una RAM de 60 KB. Nos permite usar 20 GPIOs con SPI, I2C, 2 UARTs (1 RTS/CTS), 4 PWM y  6 canales ADC.

Esta arquitectura contrasta la original de Arduino basado en un micro de 8bits ATmega168 con 16kb de código y 1k de RAM, si bien ahora tenemos disponibles placas arduino con ATmega2560 con 256kb de código  y 6kb de RAM

Netduino se programa con Microsoft .Net Micro framework utilizando Visual Studio 2010 mientras que Arduino se programa en un derivado del entorno de Processing usando una lenguaje basado en c++ o java.

Un búsqueda rápida nos dice que arduino tiene 12 millones de resultados frente a los 250 mil de netduino.

En próximos artículos de esta serie veremos como realizar proyectos con netduino.

Java
