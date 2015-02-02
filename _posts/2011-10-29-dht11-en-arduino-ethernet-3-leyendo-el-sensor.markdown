--- 
layout: post
status: publish
published: true
title: "DHT11 en arduino ethernet 3: leyendo el sensor"
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
excerpt: "<img class=\"alignleft\" src=\"http://arduino-info.wikispaces.com/file/view/DHT11-HumidityTempVSG.jpg\" alt=\"dht11\" width=\"247\" height=\"288\" />Para testear todo vamos a hacer un sketch b\xC3\xA1sico donde leamos varios dht11. Hemos conectado 3 a los pines 2, 3 y 4. El esquema de conexionado no puede ser m\xC3\xA1s sencillo: s\xC3\xB3lo tenemos que seguir las indicaciones de la imagen.\n\n"
wordpress_id: 168
wordpress_url: http://blog.elcacharreo.com/?p=168
date: 2011-10-29 23:13:19 +02:00
categories: 
- arduino
tags: 
- ethernet
- dht11
- ardui
- temperatura
- sensor
comments: 
- id: 90
  author: "DHT11 en arduino ethernet 2: preparando el entorno &laquo; El Cacharreo.com"
  author_email: ""
  author_url: http://blog.elcacharreo.com/2011/10/27/dht11-en-arduino-ethernet-2-preparando-el-entorno/
  date: 2011-11-01 00:21:32 +0100
  date_gmt: 2011-11-01 00:21:32 +0100
  content: "[...] DHT11 en arduino ethernet 3: leyendo el sensor &nbsp;&nbsp; DHT11 (sensor de temperatura y humedad) en arduino ethernet I: introducci\xC3\xB3n &raquo;  [...]"
- id: 135
  author: "Arduino lee temperaturas con mayor precision: DS18x20 &laquo; El Cacharreo.com"
  author_email: ""
  author_url: http://blog.elcacharreo.com/2011/11/27/arduinolee-temperaturas-con-mayor-precision-ds18x20/
  date: 2011-11-27 23:23:45 +0100
  date_gmt: 2011-11-27 23:23:45 +0100
  content: "[...] temperaturas con mayor precision: DS18x20  Tras ver la baja resoluci\xC3\xB3n que tiene el sensor de temperatura DHT11\xC2\xA0he buscado alternativas para obtener una medici\xC3\xB3n de mayor [...]"
---
<img class="alignleft" src="http://arduino-info.wikispaces.com/file/view/DHT11-HumidityTempVSG.jpg" alt="dht11" width="247" height="288" />Para testear todo vamos a hacer un sketch básico donde leamos varios dht11. Hemos conectado 3 a los pines 2, 3 y 4. El esquema de conexionado no puede ser más sencillo: sólo tenemos que seguir las indicaciones de la imagen.

<a id="more"></a><a id="more-168"></a>

&nbsp;

Este el código para probar todo

<code>
</code>

<pre>#include &lt;dht11.h&gt;

dht11 DHT11;

#define nSensores 3
int puertos[nSensores];
float fHumedades[nSensores];
float fTemperaturas[nSensores];

void setup()
{
  Serial.begin(115200);
  puertos={2,3,4};
}

void getdata(int iIndice)
{
  int chk = DHT11.read(puertos[iIndice]);

  Serial.print("Sensor ");
  Serial.print(iIndice);
  Serial.print(" ");
  switch (chk)
  {
    case 0:
      fHumedades[iIndice]=(float)DHT11.humidity;
      Serial.print(fHumedades[iIndice], 2);
      Serial.print(" % ");
      fTemperaturas[iIndice]=(float)DHT11.temperature;
      Serial.print(fTemperaturas[iIndice], 2);
      Serial.println(" o C");
        break;
    case -1: Serial.println(" Checksum error"); break;
    case -2: Serial.println(" Time out error"); break;
    default: Serial.println(" Unknown error"); break;
  }

}

void loop()
{
  for(int i=0;i&lt;nSensores;i++)
    getdata(i);

  //delay(200);
}</pre>

<code>
</code>

Los datos que se leen cada 2 décimas de segundo se envían por el puerto serie. Con el monitor de puerto serie veremos los valores. Podemos apreciar en la siguiente imagen que la precisión de los sensores no es menor de los 2º que dice el fabricante. Próximamente espero realizar un estudio con los 10 sensores que tengo para ver la dispersion de sus medidas.

<a href="http://blog.elcacharreo.com/wp-content/uploads/2011/10/Pantallazo-del-2011-10-28-003016.png"><img class="alignleft size-medium wp-image-198" title="Pantallazo del 2011-10-28 00:30:16" src="http://blog.elcacharreo.com/wp-content/uploads/2011/10/Pantallazo-del-2011-10-28-003016-300x167.png" alt="" width="300" height="167" /></a>

<a href="http://blog.elcacharreo.com/wp-content/uploads/2011/10/2011-10-28-00.20.46_peque.jpg"><img class="aligncenter size-full wp-image-195" title="2011-10-28 00.20.46_peque" src="http://blog.elcacharreo.com/wp-content/uploads/2011/10/2011-10-28-00.20.46_peque.jpg" alt="" /></a>

En el próximo capítulo veremos como acceder a los datos del sensor desde internet.

Javacasm
