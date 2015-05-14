--- 
layout: post
status: publish
published: true
title: "AFAQ - Arduino Frecuently Asked Questions: \xC2\xBFCu\xC3\xA1les son los pines SPI en las distintas placas?"
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 856
wordpress_url: http://blog.elcacharreo.com/?p=856
date: 2013-10-08 13:42:32 +02:00
categories: 
- arduino
- comunicaciones
- AFAQ
tags: []

comments: []

---
<img class="alignleft" title="SPI" src="http://upload.wikimedia.org/wikipedia/commons/thumb/e/ed/SPI_single_slave.svg/350px-SPI_single_slave.svg.png" alt="" width="350" height="109" />Uno de los protocolos de comunicaciones más usados en Arduino es el <a href="http://en.wikipedia.org/wiki/Serial_Peripheral_Interface_Bus">SPI</a>. Se utiliza para comunicarse con multitud de dispositivos. Cómo norma general, la manera más sencilla de encontrar los pines SPI es en el conector ICSP. Algunas placas los duplican entre los pines digitales, pero otras no.

<strong>Arduino UNO </strong>
SCK pin D13
MOSI pin D11
MISO pin D12

<strong>Arduino Leonardo </strong>
SCK ICSP pin 3
MOSI ICSP pin 4
MISO ICSP pin 1

<strong>Arduino Mega </strong>
SCK pin D52
MOSI pin D51
MISO pin D50
