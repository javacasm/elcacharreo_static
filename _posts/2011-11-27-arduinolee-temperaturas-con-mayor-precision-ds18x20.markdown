--- 
layout: post
status: publish
published: true
title: "Arduino lee temperaturas con mayor precision: DS18x20"
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
excerpt: "<img class=\"alignleft\" src=\"http://tuxgraphics.org/common/images2/article09031/pinout-ds18s20.gif\" alt=\"\" width=\"109\" height=\"335\" />Tras ver la baja resoluci\xC3\xB3n que tiene el <a href=\"http://blog.elcacharreo.com/2011/10/29/dht11-en-arduino-ethernet-3-leyendo-el-sensor/\">sensor de temperatura DHT11</a>\xC2\xA0he buscado alternativas para obtener una medici\xC3\xB3n de mayor precisi\xC3\xB3n.\r\n\
  \r\n\
  La mejor opci\xC3\xB3n que he encontrado ha sido la familia de sensores con salida digital <a href=\"http://www.maxim-ic.com/app-notes/index.mvp/id/162\">DS18x20</a> de Maxim. Estos sensores llegan hasta la precisi\xC3\xB3n de 0.5\xC2\xBA en algunos modelos.\r\n\
  \r\n\
  Como dec\xC3\xADa tienen un interface digital con protocolo OneWire propietario de Maxim pero que cualquiera puede usar e implementar.\r\n\
  \r\n\
  Otra de las ventajas de estos sensores es que la conexi\xC3\xB3n puede realizarse con 3 hilos e incluso si los sensores de una determinada familia con 2 hilos, utilizando el cable de datos como alimentaci\xC3\xB3n. Basta con conectar la patilla de tierra (la derecha seg\xC3\xBAn se mira) y la de datos (la central) a 5V mediante una resistencia de 4.7K de pullup.\r\n\
  \r\n\
  Gracias a esta forma de conexi\xC3\xB3n tan sencilla y a que pueden ser alimentados de esta forma, podemos crear un bus de dos hilos donde iremos \"pinchando\" los sensores con total facilidad, lo que nos permitir\xC3\xA1 obtener datos de temperatura de diferentes localizaciones con facilidad.\r\n\
  \r\n\
  El precio de los sensores es de 2$ comprados en cantidad.\r\n\
  \r\n"
wordpress_id: 161
wordpress_url: http://blog.elcacharreo.com/?p=161
date: 2011-11-27 23:23:37 +01:00
categories: 
- "Sin categor\xC3\xADa"
- arduino
- electronica
tags: 
- arduino
- ds18x20
- temperatura
- sensores
comments: 
- id: 552
  author: Midiendo temperaturas con LM335 &laquo; El Cacharreo.com
  author_email: ""
  author_url: http://blog.elcacharreo.com/2012/04/09/midiendo-temperaturas-con-lm335/
  date: 2012-04-09 00:34:44 +0200
  date_gmt: 2012-04-08 22:34:44 +0200
  content: "[...] hemos visto como medir temperaturas con diferentes sensores como el dth11\xC2\xA0o el ds18x20. Ahora le toca el turno al LM335 de National (ahora de [...]"
- id: 3058
  author: Luis
  author_email: luis6800@gmail.com
  author_url: ""
  date: 2013-03-01 21:21:24 +0100
  date_gmt: 2013-03-01 20:21:24 +0100
  content: hermano muchas gracias. Buen aporte
---
<img class="alignleft" src="http://tuxgraphics.org/common/images2/article09031/pinout-ds18s20.gif" alt="" width="109" height="335" />Tras ver la baja resolución que tiene el <a href="http://blog.elcacharreo.com/2011/10/29/dht11-en-arduino-ethernet-3-leyendo-el-sensor/">sensor de temperatura DHT11</a> he buscado alternativas para obtener una medición de mayor precisión.

La mejor opción que he encontrado ha sido la familia de sensores con salida digital <a href="http://www.maxim-ic.com/app-notes/index.mvp/id/162">DS18x20</a> de Maxim. Estos sensores llegan hasta la precisión de 0.5º en algunos modelos.

Como decía tienen un interface digital con protocolo OneWire propietario de Maxim pero que cualquiera puede usar e implementar.

Otra de las ventajas de estos sensores es que la conexión puede realizarse con 3 hilos e incluso si los sensores de una determinada familia con 2 hilos, utilizando el cable de datos como alimentación. Basta con conectar la patilla de tierra (la derecha según se mira) y la de datos (la central) a 5V mediante una resistencia de 4.7K de pullup.

Gracias a esta forma de conexión tan sencilla y a que pueden ser alimentados de esta forma, podemos crear un bus de dos hilos donde iremos "pinchando" los sensores con total facilidad, lo que nos permitirá obtener datos de temperatura de diferentes localizaciones con facilidad.

El precio de los sensores es de 2$ comprados en cantidad.

<a id="more"></a><a id="more-161"></a>

Como era de esperar existe una implementación del protocolo para arduino. Descargamos la librería del <a href="http://www.pjrc.com/teensy/td_libs_OneWire.html">sitio del mantenedor</a> en la carpeta libraries de la carpeta skechbook. Ajustando la resistencia de pullup se puede modificar la espera necesaria para leer los sensores.

Me he permitido modificar levemente el ejemplo de la librería, de manera que arduino busca todos los elementos conectados al bus onewire, y va pidiendo a cada uno la temperatura. El ejemplo queda como sigue:

<span class="Apple-style-span" style="font-family: Consolas, Monaco, monospace; font-size: 12px; white-space: pre;">#include &lt;OneWire.h&gt;</span>
<pre>
// OneWire DS18S20, DS18B20, DS1822 Temperature Example
// Barely updated by javacasm
// http://www.pjrc.com/teensy/td_libs_OneWire.html
//
// The DallasTemperature library can do all this work for you!
// http://milesburton.com/Dallas_Temperature_Control_Library

OneWire  ds(11);  // on pin 11

void setup(void) {
  Serial.begin(115200);
}

void loop(void) {
  byte i;
  byte present = 0;
  byte type_s;
  byte data[12];
  byte addr[8];
  float celsius;
  int   iNSensors=0;  
  while(ds.search(addr))
  {
      iNSensors++;
      Serial.print("ROM =");
      for( i = 0; i &lt; 8; i++) {
        Serial.write(' ');
        if(addr[i]&lt;16)
        Serial.print(0);
        Serial.print(addr[i], HEX);
      }

      if (OneWire::crc8(addr, 7) != addr[7]) {
          Serial.println("CRC is not valid!");
          return;
      }

      // the first ROM byte indicates which chip
      switch (addr[0]) {
        case 0x10:
          Serial.print(": DS18S20 ");  // or old DS1820
          type_s = 1;
          break;
        case 0x28:
          Serial.print(": DS18B20 ");
          type_s = 0;
          break;
        case 0x22:
          Serial.print(": DS1822  ");
          type_s = 0;
          break;
        default:
          Serial.println("Device is not a DS18x20 family device.");
          return;
      } 

      ds.reset();
      ds.select(addr);
      ds.write(0x44,1);         // start conversion, with parasite power on at the end

      delay(700);     // maybe 750ms is enough, maybe not
      // we might do a ds.depower() here, but the reset will take care of it.

      present = ds.reset();
      ds.select(addr);    
      ds.write(0xBE);         // Read Scratchpad

      for ( i = 0; i &lt; 9; i++)
        data[i] = ds.read();

      // convert the data to actual temperature

      unsigned int raw = (data[1] &lt;&lt; 8) | data[0];
      if (type_s) {
        raw = raw &lt;&lt; 3; // 9 bit resolution default
        if (data[7] == 0x10) {
          // count remain gives full 12 bit resolution
          raw = (raw &amp; 0xFFF0) + 12 - data[6];
        }
      } else {
        byte cfg = (data[4] &amp; 0x60);
        if (cfg == 0x00) raw = raw &lt;&lt; 3;  // 9 bit resolution, 93.75 ms
        else if (cfg == 0x20) raw = raw &lt;&lt; 2; // 10 bit res, 187.5 ms
        else if (cfg == 0x40) raw = raw &lt;&lt; 1; // 11 bit res, 375 ms
        // default is 12 bit resolution, 750 ms conversion time
      }
      celsius = (float)raw / 16.0;

      Serial.print(celsius);
      Serial.println(" C");
  }

  Serial.print(iNSensors);
  Serial.println(" sensors.\n");
  ds.reset_search();
  delay(250);
}</pre>
&nbsp;

Basta ver los resultados del programa para ver que todos los sensores dan datos contenidos en 0.5ºC
<pre>ROM = 10 20 0A 35 02 08 00 00: DS18S20 21.19 C 
ROM = 10 F4 B6 3B 02 08 00 63: DS18S20 21.06 C 
ROM = 10 AC F4 3B 02 08 00 86: DS18S20 21.44 C 
ROM = 10 AA A3 C4 00 08 00 54: DS18S20 21.19 C 
ROM = 10 C6 81 5A 01 08 00 CE: DS18S20 20.94 C 
ROM = 10 B6 7B 5A 01 08 00 4D: DS18S20 21.06 C 
ROM = 10 EE F9 34 02 08 00 EB: DS18S20 21.25 C 
ROM = 10 51 71 5A 01 08 00 5C: DS18S20 21.00 C 
ROM = 10 19 97 11 01 08 00 BA: DS18S20 20.94 C 
ROM = 10 3D 2E 35 02 08 00 F6: DS18S20 21.00 C 
ROM = 10 F3 0D 35 02 08 00 CC: DS18S20 21.00 C 
ROM = 10 0B 30 A5 01 08 00 72: DS18S20 21.00 C 
ROM = 28 8C 61 C7 01 00 00 41: DS18B20 21.12 C 
ROM = 28 76 C7 61 01 00 00 F3: DS18B20 21.00 C 
ROM = 28 E1 B0 E1 00 00 00 89: DS18B20 20.87 C 
ROM = 28 C3 B1 E1 00 00 00 9C: DS18B20 20.94 C 
ROM = 22 82 BF 1A 00 00 00 12: DS1822  21.12 C 
ROM = 22 E3 C1 1A 00 00 00 29: DS1822  21.19 C</pre>
Proximamente publicaremos una comparativa entre los dos tipos de sensores desde un punto de vista más estadístico-

Web de referencia <a href="http://www.maxim-ic.com/app-notes/index.mvp/id/162">maxim</a>, <a href="http://www.arduino.cc/playground/Learning/OneWire">arduino playground</a> y <a href="http://www.pjrc.com/teensy/td_libs_OneWire.html">web del creador de la libreria oneWire</a>

&nbsp;

Javacas
