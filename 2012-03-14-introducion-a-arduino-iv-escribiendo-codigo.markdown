--- 
layout: post
status: publish
published: true
title: "Introduci\xC3\xB3n a Arduino IV: Escribiendo c\xC3\xB3digo"
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 357
wordpress_url: http://blog.elcacharreo.com/?p=357
date: 2012-03-14 00:29:27 +01:00
categories: 
- arduino
- tutoriales
- programacion
tags: 
- arduino
- tutorial
- IDE
- c++
- freeduino
- librarias
- arduino playgroundyg
comments: []

---
Una vez que tenemos el entorno instalado, el siguiente paso es empezar a programar.

El lenguaje en el que se programa Arduino es C++. Podemos elegir entre hacer código C o C++, todo dependerá de si usamos o no objetos. La gran mayoría del código y de las librerías ya desarrolladas está escrito en C++, pues aunque lleva un sobrecoste en cuanto al peso del código generado, compensa la claridad que obtenemos.

Todo sketch (páquete formado por todo el código que luego programaremos en la placa) de arduino se limita a completar dos funciones:

<code>void setup()
{}</code>

y

<code>void loop()
{}
</code>

El primer método contendrá todo el código necesario para inicializar nuestro entorno: por ejemplo diremos que pines utilizamos de entrada y cuales de salida, a qué velocidad deseamos comunicarnos con el puerto serie, ... etc. Esta función sólo se ejecutará una vez después de haber encendido la placa o tras resetearla.

El método <code>loop()</code> contiene el código que se ejecutará una y otra vez de forma repetitiva hasta el fin de los tiempos con una frecuencia que está limitada por el reloj al que funciona nuestra placa.

Cuando decidimos compilar nuestro programa, el entorno arduino insertará nuestro código en una plantilla parecida a esta:
<p style="padding-left: 30px;"><code>void main ()
{
setup();
while(1){
loop();
}
}</code></p>
y compilará todo incluidas las librerías que usemos

Como ya hemos mencionado antes es enorme la cantidad de código que ya se ha desarrollado para Arduino. Gran parte de el está formado por código que permite comunicar con diferentes protocolos, o que conecta con diferentes sensores o que permite manejar determinados dispositivos. Esté código se integra en lo que denominamos librerias. Así tenemos una librería que permite conectar con dispositivos I2C o manejar displays LCD.

El propio entorno Arduino trae incluídas una gran cantidad de librerías. En el caso que quisiéramos añadir alguna más basta con incluirla en la carpeta Libraryde nuestra carpeta de usuario (podemos ver cual es la carpeta de usuario viendo nuestra configuración en la opción <code>Preferences</code>) .

Para facilitar la utilización de las librerías más usuales y recordar la sintaxis de C++ disponemos de muchos recursos en internet, entre ellos este <a href="https://sites.google.com/site/mechatronicsguy/arduinocheatsheet">chuletario (Arduino cheat sheet)</a> o este <a href=" http://arduino.cc/playground/uploads/Main/arduino_notebook_v1-1.pdf">Libro de Progración de Arduino (Arduino programing notebook)</a>.

También existen webs donde se incluyen a modo de recetario miles de ejemplos como <a href="http://www.freeduino.org/">freeduino</a> o <a href="http://arduino.cc/playground/">arduino Playground</a>

Más sobre el tema: <a href="http://blog.elcacharreo.com/2012/03/05/introduccion-a-arduino-i-definicion-y-entorno/" target="_blank">Introducción a arduino</a>, <a title="Introducción a arduino" href="http://blog.elcacharreo.com/2012/03/07/introduccion-a-arduino-ii-que-es-arduin/" target="_blank">¿Qué es arduino?</a>, <a href="http://blog.elcacharreo.com/2012/03/07/introduccion-a-arduino-iii-el-ide/" target="_blank">Introducción al entorno</a>, <a title="Escribiendo código" href="http://blog.elcacharreo.com/2012/03/14/introducion-a-arduino-iv-escribiendo-codigo/" target="_blank">Escribiendo código</a>

Javacasm
