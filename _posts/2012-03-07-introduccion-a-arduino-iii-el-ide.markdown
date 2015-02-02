--- 
layout: post
status: publish
published: true
title: "Introducci\xC3\xB3n a Arduino III: el IDE"
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 350
wordpress_url: http://blog.elcacharreo.com/?p=350
date: 2012-03-07 00:38:46 +01:00
categories: 
- arduino
- tutoriales
tags: 
- arduino
- tutorial
- IDE
comments: 
- id: 3744
  author: "Introducci\xC3\xB3n a arduino I: definici\xC3\xB3n y entorno &laquo; El Cacharreo.com"
  author_email: ""
  author_url: http://blog.elcacharreo.com/2012/03/05/introduccion-a-arduino-i-definicion-y-entorno/
  date: 2013-04-26 21:22:10 +0200
  date_gmt: 2013-04-26 19:22:10 +0200
  content: "[...] sobre el tema: \xC2\xBFQu\xC3\xA9 es arduino?, Introducci\xC3\xB3n al entorno, Escribiendo [...]"
---
Nada más fácil que instalar el entorno para programar Arduino.

Podemos seguir la <a href="http://arduino.cc/en/Guide/HomePage">guía de arduino</a> (en inglés porque la versión español necesita todavía de trabajo) o bien echarle un poquito de valor y<a href="http://arduino.cc/en/Main/Software"> descargar el ejecutable</a> según nuestro SO. Yo he usado fundamentalmente la versión linux sin problemas hasta esta última versión que ha empezado a darme algún cuelgue. Si aún nos sentimos con energía que gastar podemos <a href="http://files.arduino.cc/downloads/arduino-1.0-src.tar.gz">descargar el código fuente</a> y compilarlo ;)

Merece mencionar que el instalador de windows ocupa alrededor de los 90Mb mientras en el de linux no llega a los 5Mb. Esto es debido a que en linux los paquetes asociados a los compiladores para los microcontroladores Atmel no están inlcuídos mientras que en el instalador de  windows si. Por eso en linux es necesario instalar todos los paquetes necesarios. Una vez más toda esta parte está <a href="http://www.arduino.cc/playground/Learning/Linux">perfectamente documentada</a>

La última versión disponible es arduino 1.0 que apareció a la vez que las placas Arduino UNO en noviembre de 2011. Esta versión introduce muchos cambios tanto en el entorno como en las librerías. En cualquier caso podemos usar este entorno con placas anteriores.

También están disponibles las versiones anteriores de entorno. ¿Por qué usar una versión antigua? Porque al ser una versión reciente no todas las librerías existentes se han portado y algunas dan errores o de compilación o de funcionamiento. A pesar de esto yo recomiendo usar la versión 1.0

Una vez instalado basta dar un paseo por el menú para encontrar fácilmente el submenu de los ejemplos donde encontraremos por donde empezar nuestras proyectos.

También veremos la opción de compilar para probar que nuestro código compila y la opción de enviar a la placa que nos permitirá comprobar que todo está OK.

Otra de las herramientas más útiles es la consola serie que nos permite ver los datos que van y vienen (que leemos y que escribimos) a través del puerto serie y que será nuestra principal herramienta de depuración. Uno de los problemas más frecuentes al instalar el entorno es que no se detecta convenientemente el driver del puerto serie de arduino bajo windows. Podemos encontrar las soluciones en la misma <a href="http://arduino.cc/en/Guide/Windows#toc4">documentación</a>.

En esta última versión del entorno arduino la documentación ha avanzado mucho de manera que tenemos multitud de <a href="http://arduino.cc/en/Guide/HomePage">consejos y tutoriales</a> que nos permiten hacer nuestras pruebas de manera prácticamente autónoma.

Una vez que tenemos el entorno instalado estamos preparados para nuestro primer programa...

PD: Se deja como ejercicio montar todo el entorno de desarrollo basándose en <a href="http://arduino.cc/playground/Code/Eclipse">eclipse</a>. Si alguien se anime le cedo un post en este blog.

&nbsp;

Más sobre el tema: <a href="http://blog.elcacharreo.com/2012/03/05/introduccion-a-arduino-i-definicion-y-entorno/" target="_blank">Introducción a arduino</a>, <a title="Introducción a arduino" href="http://blog.elcacharreo.com/2012/03/07/introduccion-a-arduino-ii-que-es-arduin/" target="_blank">¿Qué es arduino?</a>, <a href="http://blog.elcacharreo.com/2012/03/07/introduccion-a-arduino-iii-el-ide/" target="_blank">Introducción al entorno</a>, <a title="Escribiendo código" href="http://blog.elcacharreo.com/2012/03/14/introducion-a-arduino-iv-escribiendo-codigo/" target="_blank">Escribiendo código</a>

Javacasm
