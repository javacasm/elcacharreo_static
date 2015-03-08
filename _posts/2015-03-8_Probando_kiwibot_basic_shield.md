---
title: Probando Kiwibot Arduino Basic Shield
layout: post
published: false
---

Los amigos de [Leantec](http://www.leantec.es/) por mediación de [José Pujol](https://tecnopujol.wordpress.com/) (del que por cierto recomiendo su excelente [charla sobre Arduino](https://prezi.com/sjyu2znxwrq_/charla-arduino-kiwibot/)) me han hecho llegar un placa Kiwibot (y algunos complementos que comentaré otro día). Está desarrollado íntegramente por el [equipo de la Asociación Kiwibot](http://www.kiwibot.es/quienes_somos/) en España y más concretamente en Sevilla.



## Kiwibot Basic Shield 
Es lo que ellos llaman un shield básico para Arduino, pero a mi juicio es cualquier cosa menos básico, puesto que integra la mayoría de los componentes que se suelen usar en un curso de arduino, desde un nivel básico (led, pusadores y potenciómetros) hasta uno de nivel avanzado como son las matrices de leds.

Salta a la vista que está diseñado desde la experiencia de los muchos años de enseñanza sobre Arduino que me constan de algunos de los componentes del equipo.

Para trabajar fácilmente con Kiwibot han desarrollado una [extensa documentación](https://tecnopujol.wordpress.com/arduino/arduino-basic-shield/) (que he tenido el gusto de revisar a fondo) y [una librería](http://www.kiwibot.es/escudo-arduino/libreria-matriz-de-leds/) que nos permite desde un primer momento, así como [varios ejemplos](http://www.kiwibot.es/escudo-arduino/) y un programa para probar el buen funcionamiento de todos los componentes y que nos permite ver cómo usarlos de un vistazo.

Como corresponde a su perfil **docente**, han publicado también [Guías de trabajo](http://www.kiwibot.es/escudo-arduino/guia-de-trabajo-arduino/) para que se puedan usar en las aulas.

La documentación está accesible, con el esquemático y todos los componentes necesarios para el montaje de la placa.

## El hardware

Desde que se le echa un primer vistazo a la placa salta a la vista la enorme profesionalidad con la que está hecha. Me gustaría saber el número de reviones que han hecho hasta llegar a este nivel.

Se le nota inspiración en la poco usada Arduino Esplora, sobre todo en la forma de gamepad.

Vamos a enumerar los componetes de que dispone

* Los pines D0 y D1 están disponibles en un conector para añadir un módulo bluetooth

* Los pines D2 y D3 están conectados a 2 pulsadores de gran tamaño (lo que se agradece para facilitar el uso). La elección de los pines no es casual, pues esto nos permite usar las interrupciones hardware de arduino con los pulsadores.

* Un conmutador nos permite conmutar entre el uso del led RGB y la matriz de leds 

* Facilmente podemos usar 4 servos con los 4 conectores de los pines ....

* Sensor de ultrasonidos para medir distancia, donde probé el que me mandaron y funciona perfectamente.

* Buzzer

* Ax y Ax conectados al acelerómetro

* Ax a un sensor de temperatura ¿LM35?

* Ax a un sensor luminoso LDR

* A0 y A1 a un joystick


## Mejoras que me gustaría ver en una siguiente revisión:

* Un conmutador que permita liberar los pines A4 y A5 para así poder conectar dispositivos I2C (cada vez más frecuentes)

* Intercambiar las posiciones del sensor de temperatura por la LDR y quizás dejarla a esta a mayor altura para poder orientarla hacia el led RGB
y usarla como un sensor de color básico.

* Utilizar el montaje de LM35 con resistencia entre Vcc y la salida para así poder medir temperaturas negativas

* Añadir unos agujeros a la placa para poder fijarla a una estructura

## Conclusión

Un excelente Shield, muy trabajado y que nos permite de una forma muy sencilla aprender a trabajar con una enorme cantidad de sensores