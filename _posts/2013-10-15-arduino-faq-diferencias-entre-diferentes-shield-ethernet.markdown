--- 
layout: post
status: publish
published: true
title: "Arduino FAQ: diferencias entre diferentes shield ethernet "
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 872
wordpress_url: http://blog.elcacharreo.com/?p=872
date: 2013-10-15 19:28:08 +02:00
categories: 
- arduino
- comunicaciones
- AFAQ
tags: []

comments: []

---
<h1><img style="float: left;" src="http://www.goshield.es/386-large_default/arduino-ethernet-shield-rev3-without-poe-module.jpg" alt="Arduino Ethernet Shield Rev3 sin módulo PoE" /></h1>
Existen básicamente dos tipos de shields, los basados en el chip <a href="http://www.wiznet.co.kr/Sub_Modules/en/product/Product_Detail.asp?cate1=5&amp;cate2=7&amp;cate3=26&amp;pid=1011" target="_blank">Wiznet W5100</a> (imagen a la izquierda) y en la librería  Ethernet de  Arduino’s IDE  (cuya documención podemos encontrar <a href="http://arduino.cc/en/Reference/Ethernet">http://arduino.cc/en/Reference/Ethernet</a>) y los basados en el chip <a href="http://www.microchip.com/wwwproducts/Devices.aspx?dDocName=en022889" target="_blank">enc28J60</a>  (imagen a la derecha) y que utilizan la librería <a href="https://github.com/jcw/ethercard" target="_blank">ethercard</a> (de JeeLabs).

<span id="docs-internal-guid-0ffaf2a0-bd25-5054-755b-74c051ceb84d"><img style="float: right;" src="https://lh5.googleusercontent.com/FXYttrbvoVoOcCPX67xSVteo6E59aAnxn_n5HgMvIdbiak-o0_K1CTF4ZUEnNK6YkAZY7Lv0oPcgu68hg400G7iEzYgOtxqUSxjjkQoZhZdIEoYAl8vQn5uSvDJD" alt="" width="250" /></span>Las dos admiten esencialmente la misma funcionalidad y se conectan a Arduino por SPI. Sin embargo la diferencia de coste es sorprendente. ¿A qué se debe?

A que el Wiznet W5100 incluye el stack TCP-IP completamente en hardware mientras que en el enc28J60 es necesario que nuestro microcontrolador realice todas las operaciones por software. Es decir el W5100 libera a nuestro micro de la mayor parte del trabajo duro del acceso a internet, mientras que con el enc28J60, tiene que sufrirlo entero.

Por tanto si tenemos que realizar un proyecto donde se usará mucho acceso a internet claramente necesitaremos la solución hardware.
