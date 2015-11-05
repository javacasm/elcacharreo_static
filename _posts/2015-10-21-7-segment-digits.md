---
title: 7-segment-digits
layout: post
published: false
---

Algunos de los problemas con los que nos encontramos cuando queremos hacer proyectos reales con arduino es que suelen ser:
* Nos faltan pines para hacer el montaje. Este lo podemos resolver usando un modelo mayor de Arduino, como el Mega
* Los pines de arduino no nos proporcionan la alimentación suficiente para los dispositivos que se han conectado. Solemos resolverlo añadiendo algún circuito electrónico al que controlamos desde arduino y que si que nos proporciona la corriente suficiente.

Dado que eston son problemas muy habituales, existe hardware específico con el que podemos resolver los 2 a la vez. Veamos algunos ejemplos


Se trata de chip capaces de controlar un gran número de leds, incluso manejando grandes corrientes

### MAX7219 
Conocido como LED matrix driver

para matrices de leds y para 7-segmentos

Instalamos LedControl http://embedded-lab.com/blog/?p=6862&utm_source=feedburner&utm_medium=feed&utm_campaign=Feed%3A+EmbeddedLab+%28Embedded+Lab%29

### TM1638
http://tronixstuff.com/2012/03/11/arduino-and-tm1638-led-display-modules/

### TMS1637

http://playground.arduino.cc/Main/TM1637

### 595


### TM5960

### Usando hardware específico

https://www.sparkfun.com/products/11441
![imagen](https://cdn.sparkfun.com//assets/parts/7/2/8/8/11441-01.jpeg)

http://cdn.sparkfun.com/datasheets/Components/LED/Serial-7-Segment-Display-v31.pdf

[tutoriales](https://learn.sparkfun.com/tutorials/using-the-serial-7-segment-display/introduction?_ga=1.195695532.1633812673.1445449179)