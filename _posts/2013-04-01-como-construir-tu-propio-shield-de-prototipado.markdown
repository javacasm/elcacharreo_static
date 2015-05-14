--- 
layout: post
status: publish
published: true
title: "C\xC3\xB3mo construir tu propio shield de prototipado"
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 709
wordpress_url: http://blog.elcacharreo.com/?p=709
date: 2013-04-01 04:50:30 +02:00
categories: 
- arduino
- electronica
- tutoriales
- fabricacion
tags: 
- arduino
- prototipo
- breadboard
comments: []

---
Es bastante habitual que los que nos dedicamos a esto del cacharreo llevemos varios montajes a la vez o que queramos dejar montado alguno que nos haya quedado bien o del que estemos especialmente orgullosos. Dejar una placa arduino con todo el cablerío conectado no suele ser una buena idea pues lo normal es que siempre andemos escasos de ellas.

Es ahí donde se suelen recurrir a las placas de prototipo. Existen <a href="https://www.google.es/search?q=arduino+prototype+shield&amp;hl=es&amp;safe=off&amp;tbm=isch&amp;tbo=u&amp;source=univ&amp;sa=X&amp;ei=6iFYUdO9JeaP7Aa6kICQDg&amp;ved=0CGoQsAQ&amp;biw=1680&amp;bih=949" target="_blank">multitud de diseños</a>, unos con más componentes "fijos", que aporta alguna funcionalidad o ayuda en el montaje que otros.

Lo que suelen tener todos es unas patillas que se conectan a la placa arduino  y un conjunto de conectores hembra donde añadiremos nuestro montaje.

[gallery link="file" columns="2"]

Yo he montado éste a partir de una placa de prototipo y unos <a href="http://www.bricogeek.com/shop/arduino/226-conector-hembra-arduino-6-pines.html" target="_blank">conectores (headers) largos</a> que permiten conectar con Arduino por el lado "macho" y nos dejan conectar lo que necesitemos por lado "hembra". En el centro colocamos nuestra breadboard y así podemos conectar nuestro montaje.

Como podéis ver en la foto el problema viene con la separación no estándar de los pines del lado "digital" de arduino, para solucionarlo he doblado levemente los pines de ese lado.
El resultado es que al insertarlo queda levemente inclinado como se ve en la otra fotografía. Este shield ha de ser el último que coloquemos, puesto que no mantiene la distancia entre los pines según el estándar arduino.

El acabado es más que correcto por unos pocos euros de coste. Para la próxima versión recordaré invertir los pines del lado derecho en la etiqueta...

Javacasm
