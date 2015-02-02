--- 
layout: post
status: publish
published: true
title: "AFAQ - Arduino Frecuently Asked Questions I : Tipos de memoria"
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 846
wordpress_url: http://blog.elcacharreo.com/?p=846
date: 2013-10-06 01:37:32 +02:00
categories: 
- arduino
- tutoriales
- cursos
tags: 
- arduino
- faq
- memoria
- eeprom
- sram
- flash
comments: []

---
Vamos a incluir una sección con aquellas preguntas que frecuentemente nos hacemos sobre Arduino. Empezaremos con todo un clásico
<h3><img class="alignleft" title="memoria de ferrita" src="http://upload.wikimedia.org/wikipedia/commons/thumb/d/da/KL_CoreMemory.jpg/260px-KL_CoreMemory.jpg" alt="" width="260" height="260" />¿Cuántos tipos de memoria tiene Arduino y porqué?</h3>
Vamos a empezar afinando la pregunta. ¿Cuántos tipos de memoria tiene el ATMega328 (que es el micro actualmente más usado en Arduino)?

Tiene 3 tipos, cada con sus características y funciones:
<ul>
	<li>SRAM: memoria muy rápida, tanto en lectura como en escritura, donde se almacenan las variables de nuestros programas. Su contenido se pierde al perder la alimentación el micro. Arduino UNO dispone de 2Kb</li>
	<li>Flash: memoria donde se almacena el programa. Es muy similar a la de un pendrive. Sólo se puede escribir durante el proceso de arranque desde el bootloader, después se bloquea ante escritura. En ella se guardan las instrucciones de nuestro programa y el propio bootloader. A todos los efectos desde nuestro programa es una memoria de solo lectura. Su contenido no se pierde al desconectar la alimentación. Tiene un número máximo de 10.000 reescrituras. Arduino UNO dispone de 32k</li>
	<li>EEPROM: memoria de lectura y escritura, de acceso lento, pero que puede ser modificada desde programa. Por esta razón se suele utilizar para guardar configuraciones, estados de un programa que se requiere recuperar después, etc. No se borra al perder la alimentación y tiene un número máximo de 100.000 reescrituras. Arduino UNO dispone de 1Kb</li>
</ul>
<div>Veamos una comparativa del tamaño de las distintas memoria de diferentes placas Arduino (tomada de la excelente página <a href="http://www.arduino-tutorials.com/" target="_blank">Arduino-Tutorials</a>)</div>
<div> <img class="aligncenter" title="comparativa memoria placas arduino" src="http://arduino-tutorials.com/wp-content/uploads/2012/01/arduino-memory-comparison-chart.png" alt="" width="359" height="243" /></div>
Más información en la <a href="http://www.atmel.com/Images/doc8161.pdf" target="_blank">especificación del ATMega 328</a> y en la <a href="http://arduino.cc/en/Tutorial/Memory" target="_blank">página sobre memoria de arduino.cc</a>
