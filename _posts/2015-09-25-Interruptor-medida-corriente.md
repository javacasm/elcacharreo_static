---
title: Plantilla
layout: post
published: false
---
2015-09-25-Interruptor-medida-corriente.md

![esquema](https://goo.gl/photos/wC8A5FeSVndqRGrC6)

[Imágenes](https://goo.gl/photos/RVeYP7u6zGor7B7U9)


# Descripción:

El objetivo es un interruptor para añadir a dispositivos que no lo tiene (como la prusa) y que además nos permite medir el consumo (usando la corriente)

En una primera versión (porque todavía no controlo el ESP8266) usará un arduino mini y un lcd o [wifi con ESP8266](http://www.prometec.net/arduino-wifi/) [o 2](http://www.leantec.es/blog/26_Como-conectar-Arduino-a-una-red-WIFi-con-el-m.html)

## Elementos

La entrada la hacemos por unas clemas a las que podemos añadir unos conectores para facilitar la conexión

Incluimos un interruptor para cortar la alimentación. Por medio de un jumper podemos hacer que el interruptor corte también la alimentación de arduino o no

# v2
En una segunda versión el ESP8266 o similar hace todo el trabajo eliminado el arduino