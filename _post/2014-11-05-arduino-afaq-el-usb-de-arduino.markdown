--- 
layout: post
status: publish
published: true
title: "Arduino AFAQ: el USB de arduino"
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 4475
wordpress_url: http://blog.elcacharreo.com/?p=4475
date: 2014-11-05 00:40:12 +01:00
categories: 
- arduino
- AFAQ
tags: 
- arduino
- USB
- ftdi
- atmega
comments: []

---
<a href="http://upload.wikimedia.org/wikipedia/commons/1/16/Arduino_ftdi_chip-2.jpg"><img class="alignleft" src="http://upload.wikimedia.org/wikipedia/commons/1/16/Arduino_ftdi_chip-2.jpg" alt="" width="256" /></a>En las primeras placas Arduino, el microcontrolador (normalmente ATMega 168 y Atmega328) no es capaz de conectar directamente vía USB, por lo que es necesario añadir un segundo chip de comunicaciones.

El chip usb que tiene arduino UNO (y los anteriores) sólo es capaz de servir como alimentación y como comunicación entre la placa y el ordenador. Esto se debe a la capacidad del chip que incorpora (un ATMega16U en las últimas versiones y un chip específico FTDI en las primeras) está limitado a esa funcionalidad.

El nuevo chip ATmega32u4 que incorporan las placas nuevas, sustituyendo tanto a nuestro querido ATMega328 como al chip de comunicaciones, permite más funcionalidad además de la comunicación y alimentación: es capaz de funcionar como un ratón o un teclado, es decir, podemos decidir al conectarlos al pc de qué manera actúa. Normalmente usaremos sólo el modo de comunicaciones pero si queremos podemos usar los otros modos.

¿Qué utilidad tiene emular un teclado? pues podemos "engañar" al pc y hacer que nuestra placa envíe el equivalente de una pulsación de tecla con lo que podrías hacer que se "escribiera" un fichero en nuestro PC con los datos que leemos en la placa.

¿qué utilidad tiene emular un ratón? Imagínate preparar un sistema para discapacitados que simule un ratón por ejemplo filtrando los movimientos de la cabeza o algo así. Para ello tendríamos que usar un sensor y procesar esos datos y enviarlos imitando un ratón.

Sobre que unas placas usen el ATMeta16u2 u otro es un tema de costes y mientras el fabricante nos proporcione el driver para conectarlo al IDE a nosotros nos es transparente.
