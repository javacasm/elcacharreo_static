--- 
layout: post
status: publish
published: true
title: CANcharreo BT Shield 1/5
author: migama
author_login: migama
author_email: migama@elcacharreo.com
author_url: http://blog.elcacharreo.com
excerpt: "Este es el primero de una serie de cinco posts que describir\xC3\xA1n los principales pasos de dise\xC3\xB1o y fabricaci\xC3\xB3n de un modulo CAN con Bluetooth integrado para a Arduino.\xC2\xA0Los pasos previstos son los siguientes:\r\n\
  \r\n\
  1.- Instalaci\xC3\xB3n de EAGLE PCB\r\n\
  \r\n\
  2.- Dise\xC3\xB1o del esquem\xC3\xA1tico\r\n\
  \r\n\
  3.- Dise\xC3\xB1o de la PCB\r\n\
  \r\n\
  4.- Fabricaci\xC3\xB3n del CANcharreo BT Shield\r\n\
  \r\n\
  5.- Programando Arduino con CANcharreo BT shield\r\n\
  \r\n\
  La velocidad de publicaci\xC3\xB3n de posts depender\xC3\xA1 en gran medida de las donaciones que recibamos, que a falta de numero de cuenta, tendr\xC3\xA1n que aportarse en forma de cerveza los viernes o en su defecto piononos los domingos.\r\n\
  \r\n"
wordpress_id: 126
wordpress_url: http://blog.elcacharreo.com/?p=126
date: 2011-07-26 17:29:41 +02:00
categories: 
- arduino
tags: 
- arduino
- PCB
- Eagle
comments: 
- id: 17
  author: javacasm
  author_email: javacasm@elcacharreo.com
  author_url: http://www.elcacharreo.com
  date: 2011-07-27 08:32:42 +0200
  date_gmt: 2011-07-27 08:32:42 +0200
  content: "\xC2\xA1\xC2\xA1Me encanta!! Cuenta con una verde de mi parte..."
- id: 19
  author: javacasm
  author_email: javacasm@elcacharreo.com
  author_url: ""
  date: 2011-07-27 17:57:14 +0200
  date_gmt: 2011-07-27 17:57:14 +0200
  content: |-
    Instalado en ubuntu y parte I del tutorial hecha.
    Esperando la siguiente...
---
Este es el primero de una serie de cinco posts que describirán los principales pasos de diseño y fabricación de un modulo CAN con Bluetooth integrado para a Arduino. Los pasos previstos son los siguientes:

1.- Instalación de EAGLE PCB

2.- Diseño del esquemático

3.- Diseño de la PCB

4.- Fabricación del CANcharreo BT Shield

5.- Programando Arduino con CANcharreo BT shield

La velocidad de publicación de posts dependerá en gran medida de las donaciones que recibamos, que a falta de numero de cuenta, tendrán que aportarse en forma de cerveza los viernes o en su defecto piononos los domingos.

<a id="more"></a><a id="more-126"></a>

Eagle es un programa de diseño de PCB sencillo pero bastante potente y con una completa librería de componentes. Nos descargamos desde <a href="http://www.cadsoftusa.com/">www.cadsoftusa.com</a> la versión gratis del programa, totalmente funcional pero limitada a una sola hoja de esquematico y a un tamaño máximo de la PCB de 80x100mm, lo cual nos basta para nuestro CANcharreo Shield.

Una vez instalado, abrimos el programa y configuramos la localización de las carpetas que contendrán las librerías y los archivos de proyectos a través del menú: Options – Directories

<a href="http://blog.elcacharreo.com/wp-content/uploads/2011/07/Directories.png"><img class="alignnone size-full wp-image-130" src="http://blog.elcacharreo.com/wp-content/uploads/2011/07/Directories.png" alt="" width="759" height="464" /></a>

Creamos la librería “CachaLib” en la cual añadiremos todos los componentes que vayamos utilizando en nuestros proyectos. Lo hacems desde File-New-Library y se nos abre una ventana como la de la siguiente imagen en la que podremos añadir componentes arrastrándolos desde otras librerías ya existentes en la ventana principal de Eagle.

<a href="http://blog.elcacharreo.com/wp-content/uploads/2011/07/New_Library.png"><img class="alignnone size-full wp-image-132" src="http://blog.elcacharreo.com/wp-content/uploads/2011/07/New_Library.png" alt="" width="780" height="581" /></a>

Dentro de la librería, los componentes están divididos en:

Package: Encapsulado o lo que es lo mismo, footprint del componente en la PCB

Symbol: Simbolo grafico que se utiliza para el esquematico

Device: Descripción del componente que incluye el símbolo y uno o varios packages

En la siguiente captura vemos el resultado de arrastrar el “device” C-EU desde la librería resistor.lbr hasta nuestra nueva librería. Una vez copiados los componentes no olvidemos File-Save guardando la librería en el directorio que hayamos elegido para nuestra librería.

<a href="http://blog.elcacharreo.com/wp-content/uploads/2011/07/Add_Component.png"><img class="alignnone size-large wp-image-136" src="http://blog.elcacharreo.com/wp-content/uploads/2011/07/Add_Component-1024x764.png" alt="" width="640" height="477" /></a>

Si el componente que necesitamos no está disponible en las librerías incluidas en Eagle, lo tendremos que crear desde cero, lo cual resulta un poco mas tedioso y que dejaremos para otro post sobre Eagle avanzado.

Migama

&nbsp;
