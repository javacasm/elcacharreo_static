---
title: Plantilla
layout: post
published: false
---
2017-03-09_Movimiento-servos-robots.md

Para  suavizar los movimientos de un robot que utiliza servos

Hay que tener en cuenta que cuando movemos una estructura esta tiene una inercia y si queremos que los movimientos sean suaves debemos hacerlos poco a poco, es decir acelerando. Si hacemos un movimiento brusco veremos que hace saltos y se tambalea.

* Usar movimientos "grado a grado": si queremos ir desde la posición 20º hasta la de 30º hacemos un bucle y vamos pasando de uno en uno. Se puede definir una aceleración y si los movimientos son largos definir una "velocidad de crucero" (un salto mayor). Por ejemplo subir de uno en uno hasta esa velocidad y mantenerla hasta que vayamos a frenar que la iremos reduciendo poco a poco
* Trabajar con writeMicroseconds en lugar de write lo que nos da una resolución x10

Para bajar el consumo

* Attach y detach cuando no se necesite ¿depende de la estabilidad?
* Medir consumo en reposo, desconectados y en movimiento
