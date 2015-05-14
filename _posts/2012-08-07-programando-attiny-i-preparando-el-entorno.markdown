--- 
layout: post
status: publish
published: true
title: "Programando attiny I: Preparando el entorno"
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 588
wordpress_url: http://blog.elcacharreo.com/?p=588
date: 2012-08-07 21:11:09 +02:00
categories: 
- arduino
- tutoriales
tags: 
- arduino
- attiny
- programador
comments: []

---
<img class="alignleft" style="margin: 10px;" title="attiny45" src="http://ic-travel-china.com/versi1/images/stories/fruit/attiny45_1.jpg" alt="" />¿qué es attiny?
Es una <a href="http://en.wikipedia.org/wiki/Atmel_AVR" target="_blank">subfamilia de los atmel avr</a>: son microcrontoladores pensados para funcionar sin componentes externos aparte de la alimentación, por eso incluyen reloj interno y hasta se pueden reconfigurar patillas tan fundamentales para usarlas como IO

Existen en diferentes tamaños y familias. Copio <a href="http://en.wikipedia.org/wiki/Atmel_AVR_attiny_comparison_chart" target="_blank">una tabla de la wikipedia</a> con las princplaes caracteristicas:

&nbsp;
<table>
<thead>
<tr>
<th title="Sort ascending">device (family)<sup id="cite_ref-0"><a href="http://en.wikipedia.org/wiki/Atmel_AVR_attiny_comparison_chart#cite_note-0">[1]</a></sup></th>
<th title="Sort ascending">archi<sup id="cite_ref-1"><a href="http://en.wikipedia.org/wiki/Atmel_AVR_attiny_comparison_chart#cite_note-1">[2]</a></sup></th>
<th title="Sort ascending">i/o pins</th>
<th title="Sort ascending">flash b</th>
<th title="Sort ascending">ram b</th>
<th title="Sort ascending">eeprom b</th>
<th title="Sort ascending">twi</th>
<th title="Sort ascending">usi</th>
<th title="Sort ascending">spi</th>
<th title="Sort ascending">uart</th>
<th title="Sort ascending">8 bit counters</th>
<th title="Sort ascending">16 bit counters</th>
<th title="Sort ascending">pwm</th>
<th title="Sort ascending">adc</th>
<th title="Sort ascending">max clock mhz</th>
</tr>
</thead>
<tbody>
<tr>
<td>attiny28l</td>
<td>avr1</td>
<td>11</td>
<td>2048</td>
<td>32</td>
<td>-</td>
<td>-</td>
<td>-</td>
<td>-</td>
<td>-</td>
<td>1</td>
<td>-</td>
<td>1 x 1</td>
<td>-</td>
<td>4</td>
</tr>
<tr>
<td>attiny26</td>
<td>avr2</td>
<td>16</td>
<td>2048</td>
<td>128</td>
<td>128</td>
<td>-</td>
<td>-</td>
<td>-</td>
<td>-</td>
<td>2</td>
<td>-</td>
<td>1 x 2</td>
<td>11 ch / 10 b</td>
<td>16</td>
</tr>
<tr>
<td>attiny13/13a</td>
<td>avr25</td>
<td>6</td>
<td>1024</td>
<td>64</td>
<td>64</td>
<td>-</td>
<td>-</td>
<td>-</td>
<td>-</td>
<td>1</td>
<td>-</td>
<td>1 x 2</td>
<td>4 ch / 10 b</td>
<td>20</td>
</tr>
<tr>
<td>attiny25 / attiny45 / attiny85</td>
<td>avr25</td>
<td>6</td>
<td>2048 / 4096 / 8192</td>
<td>128 / 256 / 512</td>
<td>128 / 256 / 512</td>
<td>-</td>
<td>1</td>
<td>-</td>
<td>-</td>
<td>2</td>
<td>-</td>
<td>1 x 2</td>
<td>4 ch / 10 b</td>
<td>20</td>
</tr>
<tr>
<td>attiny24/24a / attiny44/44a / attiny84/84a</td>
<td>avr25</td>
<td>12</td>
<td>2048 / 4096 / 8192</td>
<td>128 / 256 / 512</td>
<td>128 / 256 / 512</td>
<td>-</td>
<td>1</td>
<td>-</td>
<td>-</td>
<td>1</td>
<td>1</td>
<td>2 x 2</td>
<td>8ch / 10 b</td>
<td>20</td>
</tr>
<tr>
<td>attiny261/261a / attiny461/461a / attiny861/861a</td>
<td>avr25</td>
<td>16</td>
<td>2048 / 4096 / 8192</td>
<td>128 / 256 / 512</td>
<td>128 / 256 / 512</td>
<td>-</td>
<td>1</td>
<td>-</td>
<td>-</td>
<td>1</td>
<td>1</td>
<td>1 x 3</td>
<td>11ch / 10 b</td>
<td>20</td>
</tr>
<tr>
<td>attiny43u</td>
<td>avr25</td>
<td>16</td>
<td>4096</td>
<td>256</td>
<td>64</td>
<td>-</td>
<td>1</td>
<td>-</td>
<td>-</td>
<td>2</td>
<td>-</td>
<td>2 x 2</td>
<td>4 ch / 10 b</td>
<td>8</td>
</tr>
<tr>
<td>attiny87 / attiny167</td>
<td>avr25</td>
<td>16</td>
<td>8192 / 16384</td>
<td>512</td>
<td>512</td>
<td>-</td>
<td>1</td>
<td>1</td>
<td>1</td>
<td>1</td>
<td>1</td>
<td>1 x 1</td>
<td>11 ch / 10 b</td>
<td>16</td>
</tr>
<tr>
<td>attiny2313 / attiny2313a/4313</td>
<td>avr25</td>
<td>18</td>
<td>2048 / 4096</td>
<td>128 / 256</td>
<td>128 / 256</td>
<td>-</td>
<td>1</td>
<td>-</td>
<td>1</td>
<td>1</td>
<td>1</td>
<td>1 x 4</td>
<td>-</td>
<td>20</td>
</tr>
<tr>
<td>attiny48 / attiny88</td>
<td>avr25</td>
<td>24 / 28</td>
<td>4096 / 8192</td>
<td>256 / 512</td>
<td>64</td>
<td>1</td>
<td>-</td>
<td>1</td>
<td>-</td>
<td>1</td>
<td>1</td>
<td>1 x 2</td>
<td>6/8 ch 10 b</td>
<td>12</td>
</tr>
<tr>
<td>attiny4 / attiny5 / attiny9 / attiny10</td>
<td>avrtiny20</td>
<td>4</td>
<td>512 / 1024</td>
<td>32</td>
<td>-</td>
<td>-</td>
<td>-</td>
<td>-</td>
<td>-</td>
<td>-</td>
<td>1</td>
<td>1 x 2</td>
<td>4 ch / 8 b (attiny5/10 only)</td>
<td>12</td>
</tr>
<tr>
<td>attiny20</td>
<td>avrtiny20</td>
<td>12</td>
<td>2048</td>
<td>128</td>
<td>-</td>
<td>slave</td>
<td>-</td>
<td>1</td>
<td>-</td>
<td>1</td>
<td>1</td>
<td>2 x 2</td>
<td>8 ch / 10 b</td>
<td>12</td>
</tr>
<tr>
<td>attiny40</td>
<td>avrtiny20</td>
<td>18</td>
<td>4096</td>
<td>256</td>
<td>-</td>
<td>slave</td>
<td>-</td>
<td>1</td>
<td>-</td>
<td>1</td>
<td>1</td>
<td>1 x 2</td>
<td>12 ch / 10 b</td>
<td>12</td>
</tr>
<tr>
<td>attiny1634</td>
<td></td>
<td>18</td>
<td>16384</td>
<td>1024</td>
<td>256</td>
<td>slave</td>
<td>1</td>
<td>-</td>
<td>2</td>
<td>1</td>
<td>1</td>
<td>2 x 2</td>
<td>12 ch / 10 b</td>
<td>12</td>
</tr>
</tbody>
</table>
&nbsp;

¿como programarlo?

Necesita ICSP, pero podemos usar un arduino uno o diecimilla como programador
<ul>
	<li>Descargamos la ultima versión del ide arduino,  es recomendable estar en la 1.0.1 que corrige bastantes errores. Como siempre de la <a href="http://arduino.cc/en/Main/Software" target="_blank">web de arduino</a></li>
	<li>Descargamos la librería <a href="https://github.com/damellis/attiny/zipball/Arduino1" target="_blank">attiny</a> y la descomprimimos en la carpeta hardware del directorio de usuario de arduino (si no lo sabemos lo podemos ver en las preferencias). Normalmente será Documentos&gt;arduino&gt;Hardware y al descomprimir se creará una carperta attiny</li>
	<li>Reiniciamos el ide y si todo ha ido ok, al desplegar las variantes de tarjetas veremos que nos aparecen nuevas variantes<img class="aligncenter" title="Variantes de tarjetas attiny" src="http://img.readitlater.com/i/hlt.media.mit.edu/wp-content/uploads/2011/10/ATtiny-Boards-Menu/RS/w680.png" alt="" width="385" height="180" /></li>
	<li>Ahora hay que conectar nuestro attiny al arduino. Podemos hacerlo conectando directamente con cables o usando un <a href="http://blog.elcacharreo.com/2011/11/14/recibido-el-regalo-de-instructables/">shield</a></li>
</ul>
<img class="alignright" title="attiny programmer shield" src="http://cdn.instructables.com/FX5/90UN/GTNKVSPH/FX590UNGTNKVSPH.LARGE.jpg" alt="" width="400" /><img class="alignleft" title="conexion arduino-attiny" src="http://img.readitlater.com/i/hlt.media.mit.edu/wp-content/uploads/2011/06/Screen-shot-2011-06-06-at-1.46.39-PM/RS/w680.png" alt="" width="250" />

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;
<ul>
	<li>Abrimos el sketch ArduinoISP y lo descargargamos a nuestro arduino, habiendo seleccionado la versión y el puerto correspondiente.</li>
	<li>Ahora abrimos el sketch que vamos a descargar al attiny y seleccionamos el modelo de attiny a usar.</li>
	<li>Lo descargamos y veremos que nuestro flamante attiny está programado</li>
</ul>
