---
title: Plantilla
layout: post
published: false
---
2015-07-22-Reduciendo-tamanio-programa-arduino.md


Un sketch vacío

Sketch uses 450 bytes (1%) of program storage space. Maximum is 32.256 bytes.
Global variables use 9 bytes (0%) of dynamic memory, leaving 2.039 bytes for local variables. Maximum is 2.048 bytes.

Si añadimos los includes de la librería Ethernet

#include <Dns.h>
#include <EthernetUdp.h>
#include <Ethernet.h>
#include <EthernetClient.h>
#include <Dhcp.h>
#include <EthernetServer.h>


Sketch uses 1.226 bytes (3%) of program storage space. Maximum is 32.256 bytes.
Global variables use 75 bytes (3%) of dynamic memory, leaving 1.973 bytes for local variables. Maximum is 2.048 bytes.

Vemos cómo el gasto de memoria sube un 3% ¡¡sin necesidad y sin usarla!!

Cuando se hace un include se están declarando variables globales que estarán en nuestro programa aunque no lo usemos.



