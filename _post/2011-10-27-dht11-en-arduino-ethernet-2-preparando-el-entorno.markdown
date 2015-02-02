--- 
layout: post
status: publish
published: true
title: "DHT11 en arduino ethernet 2: preparando el entorno"
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 164
wordpress_url: http://blog.elcacharreo.com/?p=164
date: 2011-10-27 18:40:11 +02:00
categories: 
- arduino
tags: 
- arduino
- ethernet
- dht11
comments: 
- id: 89
  author: "DHT11 (sensor de temperatura y humedad) en arduino ethernet I: introducci\xC3\xB3n &laquo; El Cacharreo.com"
  author_email: ""
  author_url: http://blog.elcacharreo.com/2011/10/26/dht11-sensor-de-temperatura-y-humedad-en-arduino-ethernet-i-introduccion/
  date: 2011-11-01 00:20:08 +0100
  date_gmt: 2011-11-01 00:20:08 +0100
  content: "[...] DHT11 en arduino ethernet 2: preparando el entorno &nbsp;&nbsp; C\xC3\xB3mo fabricar tu propia PCB I: teor\xC3\xADa [...]"
---
Para poder programar el arduino ethernet necesitamos actualizar nuestra instalación del ide arduino (que en mi caso previamente he instalado desde los repositorios oficiales de ubuntu). Para ello descargaremos desde la página de arduino una nueva versión del fichero <a href="http://arduino.cc/en/uploads/Main/boards.txt.zip">boards.txt</a> y reemplazaremos el existente. En mi caso (ubuntu 11.10 e instalado desde el gestor de software) el fichero está en <span class="Apple-style-span" style="font-family: monospace;">/usr/share/arduino/hardware/arduino</span>

Este fichero tiene un error que impide que se descarguen los programas. Existe una línea que en el fichero aparece como:

<code>ethernet.upload.protocol=stk500</code>

<code></code>y que debería ser

<code>ethernet.upload.protocol=arduino</code>

(es un bug reportado para la version 1.0 http://code.google.com/p/arduino/issues/detail?id=649)

En este punto es conveniente probar que podemos enviar un programa de prueba a nuestro arduino ethernet. Basta con el ultraclásico led-blinck que hará parpadear un led en la patilla que deseemos. Seleccionamos el puerto serie correspondiente <code>/dev/ttyUSB0</code> y el tipo de tarjeta <em>arduino ethernet</em>

En caso de tener problemas para descargar el programa pudiera ser que tuviéramos un bootloader con problemas (en las primeras versiones de la placa existía un problema de timing que dificultaba la descarga de programas). Para resolver este tema tenemos que actualizar el bootloader para lo que necesitamos o bien un programador ISP u otra placa de arduino que usaremos como programador. Podemos ver todos los detalles en la propia <a href="http://scuola.arduino.cc/en/content/upgrade-arduino-ethernet-bootloader-latest-version" target="_blank">página de arduino</a>.

Podemos ver la version de nuestro bootloader con el siguiente comando:

<code>avrdude -c arduino -p m328p -P /dev/ttyUSB0 -v</code>

Debemos ver la version de bootloader como "Firmware Version: 4.4"

A continuación vamos a añadir al entorno la librería dht11 que nos va a facilitar la comunicación con el sensor. La descargaremos de <a href="http://arduino-info.wikispaces.com/DHT11-Humidity-TempSensor">arduino-info</a> de wikispaces.

Para que el ide la reconozca, creamos una carpeta con el nombre dht11 en <code>/sketchbook/libraries</code> y colocamos ahí los ficheros dht11.cpp y dht11.h

Podemos probar que todo funciona sin mas que crear un sketch con el siguiente contenido:
<code>
#include </code>

dht11 DHT11;

Si compila tenemos todo está ok.

En el <a href="http://blog.elcacharreo.com/2011/10/29/dht11-en-arduino-ethernet-3-leyendo-el-sensor/">próximo capítulo</a> escribiremos el programa completo

Javacasm
