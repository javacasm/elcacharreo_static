---
title: Pasando-prototipo-montaje-definitivo
layout: post
published: false
---


Hola, lo primero decir que dado lo que se pretende hacer con el proyecto habría que probar primero el resultado de la fermentación, con unas tapitas por cierto... Es broma!!

Pienso que lo primero que hay que saber es lo requisitos:
* ¿Va a ser un proyecto que evolucione o ya tenemos toda la funcionalidad? Para ver si hay que dejar espacio en la caja

* Yo elegiría un arduino más pequeño, mini o nano, según necesitemos usb o no

* Para el cableado mejor usar una placa donde soldar o unas clemas

* Sobre la caja hay que saber si hay requisitos de aislamiento por temperatura o humedad, ....

En fin,que necesitamos más información...



Ok, organizamos una visita a Almeria...

Si se usan los botones del lcd-keypad  (algo que os recomiendo porque nos permite ajustar fácilmente parámetros con los botones y ver bastantes datos en pantalla) creo que lo mejor es usar un arduino de formato UNO porque es el tamaño del shield. La tamperatura del relé dependerá de si está más tiempo activado o desactivado, en cuyo caso a lo mejor hay que usar uno que esté normalmente abierto o normalmente cerrado.

Para las conexiones yo recomendaría un Arduino Prototype shield (http://www.arduino.cc/en/Main/ArduinoProtoShield) o similar que permite soldar montajes sencillos y se podría conectar entre arduino y el lcd.

Existen muchos diseños de cajas con lcd (http://www.thingiverse.com/search?q=arduino+keypad&sa=) Yo le añadiría un pequeño ventilador de 4cm para asegurar que le electrónica está segura todo el tiempo que queramos.
