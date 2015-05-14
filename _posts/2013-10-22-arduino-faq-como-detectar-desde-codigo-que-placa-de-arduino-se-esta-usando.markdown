--- 
layout: post
status: publish
published: true
title: "Arduino FAQ: C\xC3\xB3mo detectar desde c\xC3\xB3digo qu\xC3\xA9 placa de Arduino se est\xC3\xA1 usando"
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 881
wordpress_url: http://blog.elcacharreo.com/?p=881
date: 2013-10-22 23:50:10 +02:00
categories: 
- arduino
- tutoriales
- programacion
- AFAQ
tags: 
- arduino
- c++
- define
- constantes
- uno
- mega
- leonardo
comments: []

---
<img class="alignleft" src="http://www.dotnetperls.com/pound.png" alt="#define" width="162" height="220" />Muchas veces cuando desarrollamos alguna aplicación en Arduino nos damos cuenta que lo he hemos hecho funciona bien en el modelo concreto de Arduino y estamos usando, pero que fallaría en otro.

En otras ocasiones nos interesa usar código distinto según la placa que usemos (cuando accedemos directamente a los registros)

En esos casos podemos usar unas directivas de compilación que nos definen el tipo de placa y micro seleccionado.

Hay que dejar claro que esta detección se hace en tiempo de compilación, no en tiempo de ejecución, pero dado que desde el IDE de Arduino siempre se compila antes de transferir el código, el efecto es el mismo.

<span style="line-height: 1.4;" data-mce-mark="1">Existen estas constantes (hay muchas más) para la placas más utilizadas</span>
<table class="tab">
<thead>
<tr>
<th>Constante</th>
<th>CPU</th>
<th>Board</th>
</tr>
</thead>
<tbody>
<tr>
<td><code>__AVR_ATmega168__</code></td>
<td>ATmega 168</td>
<td>Arduino <a href="http://arduino.cc/en/Main/ArduinoBoardDiecimila">Decimilia</a> and older</td>
</tr>
<tr>
<td><code>__AVR_ATmega328P__</code></td>
<td>ATmega 328P</td>
<td>Arduino <a href="http://arduino.cc/en/Main/ArduinoBoardDuemilanove">Duemilanove</a> and <a href="http://arduino.cc/en/Main/ArduinoBoardUno">Uno</a></td>
</tr>
<tr>
<td><code>__AVR_ATmega1280__</code></td>
<td>ATmega 1280</td>
<td><a href="http://arduino.cc/en/Main/ArduinoBoardMega">Arduino Mega</a></td>
</tr>
<tr>
<td><code>__AVR_ATmega2560__</code></td>
<td>ATmega 2560</td>
<td><a href="http://arduino.cc/en/Main/ArduinoBoardMega2560">Arduino Mega 2560</a></td>
</tr>
<tr>
<td><code>__AVR_ATmega32U4__</code></td>
<td>ATmega 32U4</td>
<td><a href="http://arduino.cc/en/Main/ArduinoBoardLeonardo">Arduino Leonardo</a></td>
</tr>
<tr>
<td><code>__SAM3X8E__</code></td>
<td>AT91SAM3X8E</td>
<td><a href="http://arduino.cc/en/Main/ArduinoBoardDue">Arduino Due</a></td>
</tr>
</tbody>
</table>
y en tu código lo comprobamos de esta manera
<pre>#if not (defined(__AVR_ATmega2560__) || defined(__AVR_ATmega1280__))
    #error Codigo para  Arduino Mega
#endif</pre>
En caso de haber seleccionado una placa distinta a la que estamos usando se produce un error de compilación.

También existen otras constantes,como <span style="font-family: Consolas, Monaco, monospace; font-size: 12px; line-height: 18px;">ARDUINO </span>para la versión del IDE o <span style="font-family: Consolas, Monaco, monospace; font-size: 12px; line-height: 18px;">F_CPU </span>para la frecuencia del reloj (útil para reescalar el tiempo)
