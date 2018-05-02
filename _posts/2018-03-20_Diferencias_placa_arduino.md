---
title: Plantilla
layout: post
published: false
---
2018-03-20_Diferencias_placa_arduino.md


Tiene muchas cosas interesantes de las que hablar....

¿Qué os parece si jugamos a las N diferencias?

1. El microcontrolador

![microcontrolador](https://raw.githubusercontent.com/javacasm/ArduinoCompletoDE2018/master/material/images/Arduino_1-N_diferencias.png)

Tu ya has dicho una: el microcontrolador tiene distinto encapsulado, el de la derecha usa un chip que se puede extraer y en formato agujero pasante o through hole, conocido como formato PDIP. La idea es que puedes programar el chip con la placa y luego usarlo en un montaje directamente sin necesidad de la placa, lo que reduce el coste obviamente... El chip de la izquierda tiene formato SMD o superficial y cuesta bastante menos que el otro formato. Además es mucho más fácil de soldar de manera automática

Veamos la diferencia entre los formatos usando las infografías del gran @pighixxx

ATMega328 PDIP

![ATMega328 PDIP](http://doolox.com/g/pig/pighixxx-atmega328.jpg)

Si ahora vemos el otro encapsulado SMD

![ATMega 328 SMD](http://farhek.com/a/a/at/atmega328-datasheet-pinout_atmega8-datasheet_constant-voltage-transformer-function-of-relays-wire-for-house-wiring-on-semiconductor-diode-kicker-4-ohm-forward-reverse-with-limit-switch-di.png)


¿Veís alguna diferencia? Pista tiene que ver con el color verde

2. El chip de comunicaciones


![Chip comunicaciones](https://raw.githubusercontent.com/javacasm/ArduinoCompletoDE2018/master/material/images/Arduino_2-N_diferencias.png)


Sustituye al FTDI

[Atemega8U32 Datasheet](https://cdn.sparkfun.com/datasheets/Components/General%20IC/ATMEGA8U2.pdf)

![Atemega8U32](https://cdn.sparkfun.com//assets/parts/4/6/6/9/13703-01.jpg)

Chip chino CH340

3. Posibilidades de mejorar la conectividad (añadir pines)


![conectividad/pines](https://raw.githubusercontent.com/javacasm/ArduinoCompletoDE2018/master/material/images/Arduino_3-N_diferencias.png)
