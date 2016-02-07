---
title: Feedback servo
layout: post
published: false
---

buscar servos con otra electronica, estaba en hackaday.io

Buscar sensor magnético que te da los º de giro

Montar un potenciómetro en la tapa de obijuan

https://github.com/Obijuan/3D-parts/tree/master/Servo_lower_cover


En este robot  https://www.kickstarter.com/projects/2107823129/plen2-the-worlds-first-printable-open-source-human o en el brazo metálico, se ve perfectamente como se puede utilizar


Para hacer un movimiento más suave queríamos obtener feedback de la posición de cada servo.
Aunque finalmente los dejamos porque nunca se hizo la 2ª fase del curso donde se utilizaba este feedback, guardaba por ahí la información, y aunque supongo que ya tendréis más que estudiado el tema, te paso algunos de los enlaces por si os interesan.

La primera opción por supuesto fue leer el potenciómetro del servo, como hacen en este tutorial de adafruit https://learn.adafruit.com/analog-feedback-servos/about-servos-and-feedback Pero aunque es simple, no me gusta desmontar y toquetear la electrónica de los servos.

Luego al ver el diseño que habías hecho de la tapa de atrás del servo pensé que se podía modificar la pieza para incluir un potenciómetro entre la parte cilíndrica y la rectangular y obtener el feedback sin modificar el servo.

Otro tema que estuve pensando era el añadir una electrónica de control al servo que permitiera una comunicación digital desde el "cerebro" del robot. En su momento pensaba  utilizar un attiny84/85 que controlara cada servo. Hoy en día usaría un esp8266.

Sobre este tema conozco un proyecto [Moti](https://hackaday.io/project/249-moti-a-smart-servo) que pretendía reemplazar la electrónica y el potenciómetro del servo para hacer casi un servo completamente digital.
