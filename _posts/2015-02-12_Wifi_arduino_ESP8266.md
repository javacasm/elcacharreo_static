---
title: Wifi en arduino: Usando ESP8266
layout: post
published: true
tag: telemetria,radio,arduino,wifi
---

Hasta hace muy poco el conectar arduino a wifi era algo esencialmente caro, difícil y cuestionable: 
* Caro porque los shield costaban del orden de los 70-80€, 
* Difícil porque cada uno tenía su protocolo, su manera de configurarlos y sus propios problemas. Sé de gente a la que se le colgaba el router cuando conectaban su arduino al wifi.
* Cuestionable porque dado que el shield wifi se basaba en un microcontrolador, normalmente de 32 bits (para el tema de la encripción que necesitan los modernos wifis) y capaz de hacer mucho más que una placa arduino, dudabas si el proyecto estaba bien planteado.

Actualmente han aparecido unas soluciones basadas en un sistema SOC (system on chip) que facilitan y abaratan mucho esta cuestión: tanto que podemos comprar uno por ¡¡¡¡ 5$ !!!!. Están basadas en el SOC ESP8266. Un SOC no es otra cosa que un sistema embebido que actúa como un ordenador completo y que podemos programar, sin más que [actualizar su firmware](http://harizanov.com/2014/11/esp8266-powered-web-server-led-control-dht22-temperaturehumidity-sensor-reading/)

Existe un módulo que contiene al ESP8266 y que podemos conectar fácilmente al puerto serie (¿se puede utilizar otros pines con SoftwareSerial? de arduino y por medio de unos comandos AT de configuración podemos tener nuestra placa conectada al wifi. Al ser conexión via serie no vamos a poder aprovechar la velocidad del wifi, pero tampoco lo necesitamos.

Otra ventaja de ser conexión serie es que podemos utilizar practicamente cualquier hardware.

En esta primera entrada sobre este tema, me voy a limitar a dar enlaces a algunos proyectos interesantes basados en este sistema:

* [Servidor web con Arduino y ESP8266](http://www.prometec.net/servidor-web-esp8266/)
* [Arduino y wifi con ESP8266](http://www.prometec.net/arduino-wifi/) Donde podemos ver un repaso a muchos de los comandos AT y su funcionamiento.
* [Control de un led vía wifi](http://83.56.32.125/esp8266.html) Ejemplo de como interaccionar vía web con el hardware (led, pero igual haríamos con un relé)
* [WIFI module ESP8266 for IoT (lot of links)](http://www.epanorama.net/newepa/2014/11/09/wifi-module-esp8266-for-iot/) Gran fuente de enlaces en inglés muy detallados sobre el tema.
* [ESP8266 WiFi Module Quick Start Guide](http://rancidbacon.com/files/kiwicon8/ESP8266_WiFi_Module_Quick_Start_Guide_v_1.0.4.pdf) Para empezar por el principio.

Pronto nuestro propias pruebas, poniendo accesible la estación meteorológica.