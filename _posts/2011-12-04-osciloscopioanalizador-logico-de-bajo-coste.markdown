--- 
layout: post
status: publish
published: true
title: "Osciloscopio/analizador l\xC3\xB3gico de bajo coste"
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 279
wordpress_url: http://blog.elcacharreo.com/?p=279
date: 2011-12-04 01:24:49 +01:00
categories: 
- arduino
- herramientas
tags: 
- arduino
- xprotolab
- osciloscopio
- analizador logico
comments: 
- id: 319
  author: Drinkgin
  author_email: drinkgin@hotmail.com
  author_url: ""
  date: 2012-02-18 21:26:03 +0100
  date_gmt: 2012-02-18 20:26:03 +0100
  content: "La mejor opci\xC3\xB3n que encontre en su dia fue un SCANALOGIC2 de IKALOGIC:\r\n\
    \r\n\
    \xE2\x9C\x94 20 Million Samples Per Second\r\n\
    \xE2\x9C\x94 4 channels for data capture/generation\r\n\
    \xE2\x9C\x94 Simultaneous capture &amp; generation\r\n\
    \xE2\x9C\x94 Supported protocols : UART, SPI, I2C, 1-wire, CAN, LIN 1.x &amp; LIN2.x, Maple bus\r\n\
    \r\n\
    Adem\xC3\xA1s el software de control es muy facil de usar, os dejo el enlace:\r\n\
    \r\n\
    http://shop.voipminic.com/accesorios/2122-analizador-logico-scanalogic-2.html\r\n\
    \r\n\
    Saludos!"
- id: 359
  author: javacasm
  author_email: javacasm@elcacharreo.com
  author_url: ""
  date: 2012-02-27 23:53:08 +0100
  date_gmt: 2012-02-27 22:53:08 +0100
  content: "Muy interesante. Le echaremos un vistazo. Si el fabricante o alg\xC3\xBAn distribuidor tiene a bien enviarnos un equipo con mucho gusto lo probaremos y comentaremos aqu\xC3\xAD nuestras impresiones."
- id: 788
  author: Voipminic
  author_email: joan@voipminic.com
  author_url: http://shop.voipminic.com
  date: 2012-06-07 12:11:55 +0200
  date_gmt: 2012-06-07 10:11:55 +0200
  content: "Buenos dias, soy Joan de Voipminic.com, nosotros le podemos enviar un equipo para que puedan realizar las pruebas que quieran.\r\n\
    \r\n\
    Nos gustar\xC3\xADa mucho que publicaran una review de los equipos que distribuimos.\r\n\
    \r\n\
    Ponganse en contacto con nostros en info arroba voipminic.com o por telefono 971 57 49 69.\r\n\
    \r\n\
    Muchas gracias por su atenci\xC3\xB3n."
---
Ando buscando un osciloscopio de 2 canales o un analizador lógico básicos para depurar errores en las comunicaciones entre varios arduinos. He mirado por la red y aparecen distintas opciones:
<ul>
	<li>La primera opción fue utilizar el pc como osciloscopio siendo las entradas los dos canales de audio. Si bien existe <a href="http://www.dxzone.com/catalog/Software/Oscilloscope/">mucho software</a>, no he encontrado ninguno que proporcione la calidad que necesito.</li>
	<li>Osciloscopios baratos. He encontrado opciones similares a estas:</li>
</ul>
<ol>
<ul>
	<li>Jeytech, un osciloscopio sencillo pero de un solo canal que se puede <a href="http://www.bricogeek.com/shop/herramientas-de-prototipado/169-osciloscopio-jyetech.html">comprar montado por 50€</a></li>
	<li>Un osciloscopio <a href="http://www.bricogeek.com/shop/herramientas-de-prototipado/360-osciloscopio-dso-nano-v2.html">más profesional por 90€</a></li>
</ul>
</ol>
<p style="padding-left: 30px;">Si bien ninguna me sirve por tener un solo canal y carecer de posibilidad de ampliación.</p>

<ul>
<ul>
	<li>Analizador lógico conectado al PC por usb: equipos similares a é<a href="http://www.sparkfun.com/products/8938">ste</a> permiten detectar problemas o analizar protocolos digitales. Son productos sencillos pero bien terminados y con buena reputación en la red.</li>
	<li>Analizador lógico/osciloscopi/generador de señales todo en uno: Xprotolab, que se puede <a href="http://www.saelig.com/product/PSHA026.htm">adquirir por 50$</a>, y que gana por goleada a todos los anteriores, por aspecto, versatilidad, tamaño y funcionalidades. No me resisto a poner un video de su funcionamiento
<iframe src="http://www.youtube.com/embed/dzQVHjQFqOc" frameborder="0" width="560" height="315"></iframe></li>
</ul>
	<li>Sistemas <a href="http://en.wikipedia.org/wiki/Do_it_yourself">DIY</a>. En un blog como éste el hacerlo uno mismo es un plus sobre cualquier otra opción. A poco que se busque se encuentran varios proyectos:</li>
</ul>
<a href="http://www.soasystem.com/eng/amla/amla1.png" target="_blank"><img class="alignleft" src="http://www.soasystem.com/eng/amla/amla1.png" alt="" height="100" /></a>
<ul>
	<li><a href="http://www.soasystem.com/eng/amla/">AMLA</a> se compone de un programa que se instala en un arduino mega y un programa que se ejecuta en el pc y recibe los datos que envía el arduino. Permite visualizar 8 valores digitales y uno analógico con una frecuencia máxima de 2MHz.</li>
	<li><a href="http://arduino.cc/forum/index.php?topic=52881.0" target="_blank">Analizador lógico</a> compatible con protocolo SUMP, para el que necesitamos un <a href="http://www.lxtreme.nl/ols/" target="_blank">cliente SUMP</a>. Debemos descargar el <a href="https://github.com/gillham/logic_analyzer" target="_blank">codigo arduino</a> (con extensión .ino desde arduino 1.0)</li>
	<li>
<div>Analizador lógico escrito en asm: Podemos ver un "resumen" del código en <a href="http://www.arduino.cc/playground/Main/LogicAnalyzer" target="_blank">arduino playground</a></div></li>
</ul>
<div>Prometo comentarios</div>
Javacas
