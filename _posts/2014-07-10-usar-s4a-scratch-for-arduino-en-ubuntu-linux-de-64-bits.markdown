--- 
layout: post
status: publish
published: true
title: Usar S4A (scratch for arduino) en  ubuntu (linux) de 64 bits
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 1532
wordpress_url: http://blog.elcacharreo.com/?p=1532
date: 2014-07-10 01:27:11 +02:00
categories: 
- arduino
- tutoriales
- ubuntu
tags: 
- arduino
- scratch
- ubuntu
- s4a
- 64bits
comments: []

---
<img class="alignleft" src="http://cdn.instructables.com/FP4/ID12/HDHW4OKH/FP4ID12HDHW4OKH.MEDIUM.jpg" alt="" width="401" height="300" /><a href="http://scratch.mit.edu/">Scratch</a> es un entorno de programación visual que permite crear programas interactivos de forma sencilla. Se le ha dotado de un interface muy amigable donde se puede programar sin  introduzcir comandos ni código, sino que los programas se construyen añadiendo bloques que tienen su propio significado, lo que lo hace muy adecuado para que lo utilicen personas que no están acostumbradas a programar e incluso niños.

Dado que internamente funciona como un entorno de ejecución de máquinas virtuales, se pueden utilizar distintas máquinas virtuales lo que le da una gran versatilidad. Existe una versión <a href="http://s4a.cat">S4A</a>  (scratch for arduino) que permite la interacción con arduino, permitiendo que lo programemos de la misma manera sencilla.

Vamos a ver cómo ejecutar S4A (scratch for arduino) en una máquina Linux (Ubuntu) de 64 bits.

Si intentamos instalar el <a href="http://vps34736.ovh.net/S4A/S4A15.deb">paquete que proporcionan los creadores de S4A</a> obtenemos un error de que la arquitectura i386 no está instalada

El problema viene de que S4A está necesita las librerías de 32bits ... Siempre me ha parecido una chapuza añadir la arquitectura de 32 bits y las librerías necesarias para que un programa funcione.

La solución que vamos a usar aprovecha que scratch es un entorno de ejecución de máquinas virtuales. S4A contiene el entorno de ejecución (de 32bits) y la máquina virtual.

Lo que haremos será usar la máquina virtual que tiene el paquete scratch  con la imagen de S4A. Veamos como hacerlo:

Instalamos la version de 64 bits de scratch

<pre>sudo apt-get install scratch</pre>

Descargamos <a href="http://vps34736.ovh.net/S4A/S4A15.deb">el paquete de S4A</a> y lo descomprimimos en nuestra carpeta

Copiamos el script que ejecuta scratch y lo modificamos para que arranque la imagen de S4A

<pre>cp /usr/bin/scratch ./S4A</pre>

Lo editamos y cambiamos

<pre>IMAGE="/usr/share/scratch/Scratch.image"</pre>

por

<pre>IMAGE="/home/javacasm/Descargas/s4a/S4A.image"</pre>

Con esto podremos utilizar sin problema S4A en nuestra máquina de 64bits

JAVACASM
