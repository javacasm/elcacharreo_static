--- 
layout: post
status: publish
published: true
title: "Introducci\xC3\xB3n a netduino II"
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 100
wordpress_url: http://blog.elcacharreo.com/?p=100
date: 2011-06-19 23:06:06 +02:00
categories: 
- netduino
tags: 
- tutorial
- howto
comments: 
- id: 683
  author: Olalla
  author_email: olalla@correo.ugr.es
  author_url: ""
  date: 2012-05-15 10:49:25 +0200
  date_gmt: 2012-05-15 08:49:25 +0200
  content: "Hola,\r\n\
    Estoy trabajando con una placa parecida a Netduino: Fez Panda II. Por lo que he visto se programan pr\xC3\xA1cticamente igual. Me preguntaba si podr\xC3\xADan ayudarme.. Ahora estoy intentando que la placa mande un email utilizando SMTP, pero no lo consigo...\r\n\
    Mi problema es que no puedo introducir los credenciales, puesto que al abrir el proyecto en Visual Studio, selecciono .Net Micro Framework, y ah\xC3\xAD no tengo 'System.Net.Mail'.\r\n\
    \xC2\xBFLo han probado con Netduino?\r\n\
    \r\n\
    Gracias"
- id: 684
  author: javacasm
  author_email: javacasm@elcacharreo.com
  author_url: ""
  date: 2012-05-15 17:06:59 +0200
  date_gmt: 2012-05-15 15:06:59 +0200
  content: "Olalla el MicroFramework no tiene todas las librer\xC3\xADasa del framework y en concreto la de mail no est\xC3\xA1. Tendr\xC3\xA1s que usar una implementaci\xC3\xB3n propia como por ejemplo esta http://bansky.net/blog/2008/08/sending-e-mails-from-net-micro-framework/\n\
    Suerte con tu proyecto."
---
Como <a href="http://blog.elcacharreo.com/2011/06/19/introduccion-a-netduino-i/">prometíamos</a> aquí comenzamos una serie de artículos sobre netduino y como desarrollar proyectos en esta plataforma.

Para empezar a programar es necesario instalar todo el entorno de desarrollo.
<ol>
	<li>En primer lugar hay que instalar Visual Studio 2010. Podemos descargar una versión gratuita desde <a href="http://www.microsoft.com/visualstudio/en-us/products/2010-editions/visual-csharp-express">Microsoft</a> (sí microsoft ya tiene versiones gratuitas, aunque limitadas de sus productos de desarrollo), la versión Express.</li>
	<li>Instalamos el .Net MicroFramework descargándolo desde <a href=" http://www.netduino.com/downloads/MicroFrameworkSDK.msi ">netduino</a></li>
	<li>Instalamos el SDK de netduino en su versión de <a href=" http://www.netduino.com/downloads/MicroFrameworkSDK.msi ">32bits</a> o <a href=" http://www.netduino.com/downloads/MicroFrameworkSDK.msi ">64bits</a></li>
	<li>Rearrancamos y conectamos nuestro netduino usando su cable USB. Windows nos preguntará si aceptamos el driver a pesar de no estar firmado por Microsoft.</li>
	<li>Abrimos visual studio y creamos un nuevo proyecto de tipo MicroFramework y con la plantilla Netduino (en mi caso la placa que tengo)<a href="https://lh5.googleusercontent.com/-j-JPNBJWgYA/Tf54s8EXdMI/AAAAAAAAACQ/2alO-MXwQbo/s800/microframeworkNetduino.png"><img class="alignnone" src="https://lh5.googleusercontent.com/-j-JPNBJWgYA/Tf54s8EXdMI/AAAAAAAAACQ/2alO-MXwQbo/s144/microframeworkNetduino.png" alt="" width="86" height="60" /></a></li>
	<li>En el fichero Program.cs  editamos el interior de la función Main, añadiendo éste contenido</li>
<code> OutputPort ledAzul = new OutputPort(Pins.ONBOARD_LED, false);
while (true)
{
ledAzul.Write(!ledAzul.Read());    // invertimos el led
Thread.Sleep(1000);     // esperamos un segundo
}
</code>
	<li>Cambiamos el destino de ejecución del programa (que por defecto es el emulador) en el menu Proyecto -&gt; Propiedades, en la pestaña .Net Micro Framework seleccionamos USB en Transporte y Netduino_netduino en Device</li>
	<li>Pulsamos F5  para iniciar la depuración y veremos como nuestro netduino cobra vida parpadeando su led azul cada segundo</li>
</ol>
&nbsp;

Sin entrar en detalles vemos que el programa declara un objeto de tipo OutputPort (puerto de salida) asociado al pin conectado al led de la placa (pin13), y realizamos un bucle sin fin en el que a cada paso ponemos el pin13 al estado contrario que el que tenía y esperamos 1 segundo.

¡¡No está mal para ser nuestro primer paso!!

Referencia: <a href="http://www.netduino.com/downloads/gettingstarted.pdf">netduino getting started</a>

&nbsp;

Java
