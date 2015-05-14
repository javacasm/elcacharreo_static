--- 
layout: post
status: publish
published: true
title: "Robot 4WD I: reuniendo los componentes"
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 689
wordpress_url: http://blog.elcacharreo.com/?p=689
date: 2013-03-27 13:20:27 +01:00
categories: 
- arduino
- raspberry
- robot
tags: 
- arduino
- robot
- 4wd
- dealextreme
comments: 
- id: 3451
  author: "Miguel \xC3\x81ngel Almaz\xC3\xA1n"
  author_email: almazanes14@gmail.com
  author_url: ""
  date: 2013-04-04 21:08:22 +0200
  date_gmt: 2013-04-04 19:08:22 +0200
  content: "En hobbyking podeis encontrar ruedas crawler por bastante buen precio:\r\n\
    \r\n\
    http://www.hobbyking.com/hobbyking/store/__25072__1_10_Crawler_90mm_Wheel_Tyre_12mm_Hex_2pc_.html\r\n\
    \r\n\
    Adem\xC3\xA1s si permaneces en la p\xC3\xA1gina unos minutos te descuenta casi un dolar.\r\n\
    \r\n\
    Un Saludo."
---
<img class="alignleft" style="margin-left: 10px; margin-right: 10px;" title="kit 4wd" src="http://img.dxcdn.com/productimages/sku_128715_1.jpg" alt="" width="200" height="200" />Vamos a empezar por ir viendo los componentes que queremos usar. Podemos encontrar casi todo en un <a href="http://dx.com/p/multi-function-4wd-arduino-robot-raider-car-kits-128715">kit</a> de dealextreme. Existen diferentes variantes, unas con algunos componentes más que otras. El coste no es mucho mayor si se adquieren los componentes por separado (en la misma tienda claro)

Veamos los componentes esenciales que contiene:
<ul>
	<li>Arduino UNO</li>
	<li>Driver motores L298 (pronto una comparativa de drivers de motores)</li>
	<li>Medidor de distance ultasonidos</li>
	<li>1 servo</li>
	<li>Protoboard pequeña</li>
	<li>Sensores para seguidores de líneas</li>
	<li>Mando a distancia y receptor infrarrojo</li>
</ul>
<div>Con este conjunto de componentes podremos hacer al menos 3 versiones:</div>
<div>
<ul>
	<li>Vehículo programado para hacer una ruta</li>
	<li>Vehículo controlado por infrarrojo</li>
	<li>Vehículo autónomo que descubrirá su propia ruta. Utilizaremos un sensor que hará un barrido.</li>
</ul>
</div>
Se pueden pensar ampliaciones del proyecto que contemplen usar una webcam y utilizar reconocimiento de imágenes. Obviamente para esta etapa necesitaríamos un procesador más potente que arduino, del estilo de una raspberry.

&nbsp;

javacasm

&nbsp;

&nbsp;

&nbsp;

&nbsp;
