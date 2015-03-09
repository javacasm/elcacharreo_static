---
title: Probando Kiwibot Arduino Basic Shield
layout: post
published: false
---

![kiwibot](https://lh6.googleusercontent.com/SPTirwdo0LU0eQQQMSYh-XBHxusPJ052W5Lwl9LvEPwx=w1598-h660-no)

Los amigos de [Leantec](http://www.leantec.es/) por mediación de [José Pujol](https://tecnopujol.wordpress.com/) (del que por cierto recomiendo su excelente [charla sobre Arduino](https://prezi.com/sjyu2znxwrq_/charla-arduino-kiwibot/)) me han hecho llegar un placa Kiwibot (y algunos complementos que comentaré otro día) para que lo pruebe, lo cual les agradezco enormemente. La placa está desarrollado íntegramente por el [equipo de la Asociación Kiwibot](http://www.kiwibot.es/quienes_somos/) en España y más concretamente en Sevilla y podemos comprarla en [Leantec](http://www.leantec.es/tienda/home/74-arduino-basic-shield-.html.

## ¿Qué es Kiwibot Basic Shield ?

Es lo que ellos llaman un shield básico para Arduino, pero a mi juicio es cualquier cosa menos básico, puesto que integra la mayoría de los componentes que se suelen usar en un curso de arduino, desde un nivel básico (led, pusadores y potenciómetros) hasta uno de nivel avanzado como son las matrices de leds.

Salta a la vista que está diseñado desde la experiencia de los muchos años de enseñanza sobre Arduino que me constan de algunos de los componentes del equipo.

Para trabajar fácilmente con Kiwibot han desarrollado una [extensa documentación](https://tecnopujol.wordpress.com/arduino/arduino-basic-shield/) (que he tenido el gusto de revisar a fondo) y [una librería](http://www.kiwibot.es/escudo-arduino/libreria-matriz-de-leds/) que nos permite desde un primer momento, así como [varios ejemplos](http://www.kiwibot.es/escudo-arduino/) y [un programa](https://github.com/KiwiBotOpenSource/TestFuncionamientoBasicShield/blob/master/TestFuncionamientoBasicShield.ino) para probar el buen funcionamiento de todos los componentes y que nos permite ver cómo usarlos de un vistazo.

Como corresponde a su perfil **docente**, han publicado también [Guías de trabajo](http://www.kiwibot.es/escudo-arduino/guia-de-trabajo-arduino/) para que se puedan usar en las aulas.

La documentación está accesible, con el esquemático y todos los componentes necesarios para el montaje de la placa.

## El hardware
![kwbt](https://lh3.googleusercontent.com/Jper6UO4WY_jvZsTJay5mUKiW5zSL89oISUrUxPHCZoi=w1598-h718-no) (he retocado la imagen para resaltar la serigrafía)

Desde que se le echa un primer vistazo a la placa salta a la vista la enorme profesionalidad con la que está hecha. Me gustaría saber el número de reviones que han hecho hasta llegar a este nivel.

Se le nota inspiración en la poco difundida Arduino Esplora, sobre todo en la forma de gamepad.

Vamos a enumerar los componentes de que dispone y dónde están conectados

* Los pines D0 y D1 están disponibles en un conector para añadir un módulo bluetooth.

* Los pines D2 y D3 están conectados a 2 pulsadores de gran tamaño (lo que se agradece para facilitar el uso). La elección de los pines no es casual, pues esto nos permite usar las interrupciones hardware de arduino con los pulsadores.

* Un conmutador nos permite conmutar entre el uso del led RGB y la matriz de leds, ya que ambos comparten los pines D5, D6 y D9. La matriz de led está formada por 5x7 leds rojos lo que nos permite dibujar cómodamente (usando la librería) hasta 2 caracteres perfectamente visibles. Para facilitar el uso de la matriz se han incluído un par de chips (shift registers) que nos permiten controlar con 35 leds con sólo 3 pines. 

![matriz leds](https://lh4.googleusercontent.com/-jCh-RctrMwo/VOTfPmnS4LI/AAAAAAAAzoQ/45Yo11WE3sQ/w1073-h805-no/IMG_20150216_001055.jpg)

* Facilmente podemos usar 3 servos con los correspondientes conectores de los 3 pines (Vcc,GND y señal) de los pines D4, D7 y D8. 

* El pin D10 está conectado a un buzzer.

* Los pines D11 y D12 están pensados para usar un sensor de ultrasonidos para medir distancia. Probé el que me mandaron y funciona perfectamente, midiendo con bastante precisión.

* El pin D13 está conectado al pulsador del joystick

Los pines analógicos están organizados de la siguiente forma:

* A0 a un sensor luminoso LDR

* A1 a un sensor de temperatura LM35

* A2 y A3 están conectados a los ejes X e Y del acelerómetro

* A4 y A5 nos permiten usar un joystick

Como vemos tenemos disponible en un mismo shield un gran abanico de sensores y módulos.

## Mejoras para una siguiente revisión

Algunas mejoras que me gustaría ver en siguientes versiones:

* Un conmutador que permita liberar los pines analógicos A4 y A5 y así poder conectar dispositivos I2C (cada vez más frecuentes).

* Intercambiar las posiciones del sensor de temperatura por la LDR y quizás dejarla a esta a mayor altura para poder orientarla hacia el led RGB
y usarla como un sensor de color básico.

* Utilizar el montaje de LM35 con resistencia entre Vcc y la salida para así poder medir temperaturas negativas

* Añadir unos agujeros a la placa para poder fijarla a una estructura

* Sería interesante saber si los servos están alimentados de desde 5V o desde Vin, para así poder alimentar propiamente los servos.

* Mejor cambiar el color a un tono más kiwi ;)

## Conclusión

Un excelente Shield, muy trabajado y que nos permite de una forma muy sencilla aprender a trabajar con una enorme cantidad de sensores

Gracias a Leatec y a José Pujol por permitirme probarla