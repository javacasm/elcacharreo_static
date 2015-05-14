--- 
layout: post
status: publish
published: true
title: Calibrando el extrusor de una impresora 3d prusa I3
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
excerpt: "<a href=\"http://blog.elcacharreo.com/wp-content/uploads/2013/10/IMG_20131030_113513.jpg\"><img class=\"alignleft  wp-image-920\" style=\"margin-left: 10px; margin-right: 10px;\" title=\"IMG_20131030_113513\" alt=\"\" src=\"http://blog.elcacharreo.com/wp-content/uploads/2013/10/IMG_20131030_113513_mini.jpg\" width=\"244\" height=\"325\" /></a>\r\n\
  \r\n\
  Como dice la gente que sabe de esto, el imprimir piezas 3D con calidad solo es cuesti\xC3\xB3n de \"calibrar, calibrar y calibrar\".\r\n\
  \r\n\
  En este art\xC3\xADculo vamos a ver el proceso de calibraci\xC3\xB3n del extrusor. Se trata de conseguir que cuando queremos extruir una cantidad determinada de pl\xC3\xA1stico \xC3\xA9sta sea lo m\xC3\xA1s exacta posible. El proceso es extremadamente sencillo, y consiste en hacer una extrusi\xC3\xB3n de una cantidad concreta de filamento, medir la extrusi\xC3\xB3n realizada y en funci\xC3\xB3n de la relaci\xC3\xB3n entre ambas determinar unas constantes m\xC3\xA1s correctas que las est\xC3\xA1ndar para nuestra impresora.\r\n\
  \r\n\
  Aunque esta calibraci\xC3\xB3n se est\xC3\xA1 haciendo en un impresora 3d Prusa i3, el procedimiento es totalmente v\xC3\xA1lido para otros tipos de impresoras.\r\n"
wordpress_id: 914
wordpress_url: http://blog.elcacharreo.com/?p=914
date: 2013-10-30 17:51:22 +01:00
categories: 
- arduino
- fabricacion
- impresoras 3d
tags: 
- impresoras 3D
- "calibraci\xC3\xB3n"
- sprinter
- marlin
comments: []

---
<a href="http://blog.elcacharreo.com/wp-content/uploads/2013/10/IMG_20131030_113513.jpg"><img class="alignleft  wp-image-920" style="margin-left: 10px; margin-right: 10px;" title="IMG_20131030_113513" alt="" src="http://blog.elcacharreo.com/wp-content/uploads/2013/10/IMG_20131030_113513_mini.jpg" width="244" height="325" /></a>

Como dice la gente que sabe de esto, el imprimir piezas 3D con calidad solo es cuestión de "calibrar, calibrar y calibrar".

En este artículo vamos a ver el proceso de calibración del extrusor. Se trata de conseguir que cuando queremos extruir una cantidad determinada de plástico ésta sea lo más exacta posible. El proceso es extremadamente sencillo, y consiste en hacer una extrusión de una cantidad concreta de filamento, medir la extrusión realizada y en función de la relación entre ambas determinar unas constantes más correctas que las estándar para nuestra impresora.

Aunque esta calibración se está haciendo en un impresora 3d Prusa i3, el procedimiento es totalmente válido para otros tipos de impresoras.
<a id="more"></a><a id="more-914"></a>
Para hacerlo sólo necesitamos un calibre (si no se tiene calibre se puede usar una regla pero tendremos menor precisión) y algo que nos permita marcar el filamento de plástico. Nosotros usaremos cinta aislante enrollada en el filamento.

Veamos el sencillo proceso:
<ul>
	<li>Marcamos el filamento a unos 7cm de donde entra en el extrusor (no es importante esta medida, sólo hay que dejar suficiente para hacer un par de medidas)</li>
	<li>Medimos la distancia entre la marca y el extrusor con el calibre y lo ponemos a cero. Es muy importante que la medida se pueda hacer lo más precisa posible, porque de lo contrario no valdrá para nada.</li>
	<li></li>
	<li>Hacemos una extrusión a una velocidad baja (para evitar que aparezcan otros problemas como pérdida de pasos etc) de un cierto tamaño.  Nostros haremos varias de 30mm a 50mm/min</li>
	<li>Hemos obtenido estos valores</li>
</ul>
<table>
<tbody>
<tr>
<td>velocidad</td>
<td>medida</td>
</tr>
<tr>
<td>50</td>
<td>30,87</td>
</tr>
<tr>
<td>50</td>
<td>30,67</td>
</tr>
<tr>
<td>100</td>
<td>29,37</td>
</tr>
<tr>
<td>300</td>
<td>27,87</td>
</tr>
</tbody>
</table>
Vemos que para velocidades altas se producen resultados peores, esto es debido a que se pueden perder pasos. Por eso mejor usar de momento velocidades bajas, ya habrá tiempo de subirlas.

A partir de las distintas medidas podemos tomar 30.77cm  como valor medio. A partir de éste calcularemos las constantes que aparecen en el software que controla nuestra impresora 3D.

Para ello abrimos con el entorno de arduino el código del software que usamos (normalmente Sprinter o Marlin)

Seleccionamos el proyecto Sprinter y  en el fichero configuración configuration.h buscamos
<pre>#define _AXIS_STEP_PER_UNIT {80, 80, 3878.8, 777.6}</pre>
<pre>(En Marlin buscamos #define DEFAULT_AXIS_STEPS_PER_UNIT {78.7402,78.7402,200.0*8/3,760*1.1} )</pre>
Los 3 primeros valores se corresponden a los pasos de motor que deben de darse en cada dirección para moverse una cierta distancia (X, Y y Z),  siendo el cuarto el que nos indica los pasos para extruir una cierta cantidad de filamento. Este último será el que tenemos que modificar.
<div></div>
<a href="http://blog.elcacharreo.com/wp-content/uploads/2013/10/Configuración-Sprinter.png"><img class="aligncenter size-full wp-image-916" title="Configuración Sprinter" alt="" src="http://blog.elcacharreo.com/wp-content/uploads/2013/10/Configuración-Sprinter.png" width="500" height="600" /></a>

&nbsp;

En nuestro caso usábamos el valor 777.6, hacemos una regla de 3 para calcular el nuevo valor.
<pre style="padding-left: 30px;">Si 30.77mm es lo obtuvimos usando el factor 777.6 obtendrermos un valor de <span style="text-align: center;">30 con 30*777.6/30.77 = 758.14</span></pre>
Modificamos el valor en el fichero y volvemos a cargar el software en nuestra placa.

Volvemos  a hacer una medida
<p style="text-align: center;"><a href="http://blog.elcacharreo.com/wp-content/uploads/2013/10/IMG_20131030_124903.jpg"><img class="aligncenter  wp-image-919" title="IMG_20131030_124903" alt="" src="http://blog.elcacharreo.com/wp-content/uploads/2013/10/IMG_20131030_124903_mini.jpg" width="326" /></a></p>
Y vemos que hemos obtenido un valor más preciso. Iterando este proceso podemos llegar a conseguir mayor precisión aún.

Por cierto, ¡¡¡hay que acordarse de quitar la cinta, si no lo hacemos podemos atascar nuestro extrusor!!!
