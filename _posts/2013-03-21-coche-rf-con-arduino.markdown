--- 
layout: post
status: publish
published: true
title: Coche RF con Arduino
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 639
wordpress_url: http://blog.elcacharreo.com/?p=639
date: 2013-03-21 00:00:14 +01:00
categories: 
- arduino
- electronica
tags: 
- arduino
- rf
- coche
comments: []

---
<a href="http://blog.elcacharreo.com/wp-content/uploads/2013/03/20121014_162506_peque.jpg"><img class="alignleft size-thumbnail wp-image-682" style="margin: 10px;" title="20121014_162506_peque" src="http://blog.elcacharreo.com/wp-content/uploads/2013/03/20121014_162506_peque-150x150.jpg" alt="" width="150" height="150" /></a>Vamos a ir viendo los pasos para montar un arduino en un coche RF.

Lo primero es tener claro el coche a usar, para luego saber como controlarlo. En bricogeek tiene un <a href="http://www.bricogeek.com/shop/motores/285-controlador-de-motores-doble-puente-h-l298.html" target="_blank">controlador de motores DC</a> que probablemente es el que necesites. Con esto vamos a poder controlar los motores fácilmente.

Otra cosa a decidir es cómo controlar el coche, yo creo que lo mas sencillo de momento es colocar el arduino en el coche y que controle los motores de una forma automática para luego modificarlo y que en función de sensores de colisión o de medida de distancia cambie su ruta, el <a href="http://www.bricogeek.com/shop/261-sensor-de-proximidad-sharp-gp2y0a21yk.html" target="_blank">sensor más sencillo</a> sería de infrarojos y si lo que quieres es seguir lineas puedes usar <a href="http://www.bricogeek.com/shop/sensores/217-sensor-optico-qrd1114.html" target="_blank">éste</a>.

Con esto ya tienes lo necesario para manejar el coche en función de lo que el coche "vea". Montar todo esto no me parece complicado.

Un paso posterior seria añadirle bluetooth u otro sistema de radio para que lo controles desde un móvil por ejemplo o desde un mando a distancia.

Si no tienes ningún coche RF puedes usar alguno de las tiendas de todo a 1€ (bueno en realidad casi todo vale más de 1€). Yo compré hace poco uno en Carrefour por 7€

Pronto más detalles de un montaje similar.

javacasm
