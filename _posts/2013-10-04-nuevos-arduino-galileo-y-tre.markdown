--- 
layout: post
status: publish
published: true
title: "Nuevos Arduino: Galileo y TRE"
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 837
wordpress_url: http://blog.elcacharreo.com/?p=837
date: 2013-10-04 10:32:24 +02:00
categories: 
- arduino
tags: 
- arduino
- tre
- galileo
- intel
- texas instruments
- ti
comments: []

---
Estaba claro que la Maker Faire de Roma habría novedades sobre Arduino, pero la verdad es que no esperaba que fueran tantas y tan interesantes. Acaban de presentarse 2 nuevo integrantes de la familia Arduino, uno propio, Arduino TRE desarrollado por la empresa Arduino en colaboración con Texas Instruments e  Intel Galileo creado por Intel pero certificado (un calificativo que veremos a partir de ahora en el mundo Arduino) como 100% compatible. Ambos permiten usar shields ya existentes y programas de Arduino Ambos son placas mucho mas potentes de las que estamos acostumbrados a ver hasta ahora, comparables a una Raspberry Pi, pero con un arduino completo integrado en la placa. En este sentido siguen la misma filosofía de <a href="http://blog.elcacharreo.com/2013/09/26/primeras-pruebas-con-arduino-yun/" target="_blank">Arduino Yún</a> de integrar un dispositivo Arduino completo, con su propio microcontrolador ATMEGA comunicado directamente con la CPU principal. Veamos sus características   <img class="alignleft" style="margin-left: 10px; margin-right: 15px;" title="Intel Galileo" src="http://arduino.cc/en/uploads/ArduinoCertified/IntelGalileo_fabD_Front_450px.jpg" alt="" width="220" height="156" /><a href="http://arduino.cc/en/ArduinoCertified/IntelGalileo" target="_blank">Intel Galileo</a>, desarrollada por Intel, pero compatible 100% con Arduino. Veamos sus características
<ul>
	<li>Incorpora un Intel® Quark SoC X1000 Application Processor, de 32 bit, perteneciente a la familia Pentium con lo que su arquitectura es x86 con una velocidad de 400MHz.</li>
	<li>Dispone de 512Kb de RAM,</li>
	<li>256MB de Almacenamiento</li>
	<li>Ethernet 10/100,</li>
	<li>conector PCI,</li>
	<li>Reloj de tiempo real RTC</li>
	<li>USB HOST2.0</li>
	<li>USB de programación</li>
	<li>Tarjeta microSD</li>
</ul>
<div>Estará disponible a partir del 29 de Noviembre</div>
<img class="alignleft" style="margin-left: 15px; margin-right: 15px;" title="Arduino Tre" src="http://arduino.cc/en/uploads/Main/ArduinoTre_LandingPage.jpg" alt="" width="216" height="147" /><a href="http://arduino.cc/en/Main/ArduinoBoardTre" target="_blank">Arduino TRE</a> desarrollado por Arduino en colaboración con Texas Instruments.
<ul>
	<li>Incluye un procesador <a title="TI" href="http://e2e.ti.com/blogs_/b/toolsinsider/archive/2013/10/03/introducing-arduino-tre.aspx">Texas Instruments Sitara AM335x ARM Cortex-A8 processor</a> corriendo a 1GHz</li>
	<li>512Mb de RAM,</li>
	<li>HDMI (HD),</li>
	<li>audio stereo,</li>
	<li>USB, Ethernet</li>
	<li>tarjeta microSD como almacenamiento externo.</li>
</ul>
Del lado de Arduino monta un ATMega32u4 (el que usa Leonardo) que viene siendo el habitual últimamente. Esta placa es el resultado de la colaboración entre los equipos de desarrollo de Arduino y <a href="http://beagleboard.org/" target="_blank">BeagleBoard</a>. Arduino TRE estará disponible en la primavera de 2014. La nueva rama de versiones del IDE de Arduino 1.5.x abre completamente la posibilidad de integrar diferentes SDKs. De hecho la <a href="http://arduino.cc/en/Main/Software#toc3" target="_blank">1.5.4 ya integra Arduino Yún y DUE</a> y existe una<a href="http://arduino.cc/en/Main/Software#toc5" target="_blank"> 1.5.3 que sólo soporta Intel Galileo</a>. En un futuro próximo se esperra una versión que soporte todas las arquitecturas. Nada se sabe del precio por ahora, pero apuesto que rondarán los 100€ 
<br/>Hablaremos sobre ellas en nuestro <a href="http://cevug.ugr.es/arduino_avanzado/" target="_blank">curso Avanzado de Arduino</a> 
<br/>Más información en el <a href="http://blog.arduino.cc/2013/10/03/a-sneak-preview-of-arduino-tre/" target="_blank">blog de Arduino</a>
