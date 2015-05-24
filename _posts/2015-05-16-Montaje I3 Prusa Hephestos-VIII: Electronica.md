---
title: Montaje I3 Prusa Hephestos VIII: Electronica
layout: post
published: false
---

En este post vamos a terminar el [montaje de la impresora](http://blog.elcacharreo.com/tag/hephestos/) instalando y conectando la electrónica, continuando con el montaje de una impresora Prusa i3 [Hephestos de Bq](http://bq.com/es/prusa). 

![electronica](https://lh3.googleusercontent.com/-lhBAqWrFVyE/VV-4xXaCAQI/AAAAAAAA7o0/0x9MYmunJZs/w602-h803-no/IMG_20150523_011131.jpg)

Comenzaremos fijando la placa Arduino y la RAMPS al marco, utilizando una pieza de plástico que nos servirá para fijar los cables y como aislante.

[Electrónica](https://lh3.googleusercontent.com/-l0uo3WRDsAs/VVfB4k8J4EI/AAAAAAAA7xo/o_aKKTlNkjc/w1070-h803-no/IMG_20150516_022127.jpg)

Fijaremos los 2 tornillos en los agujeros opuestos sobre la pieza de plástico y luego lo fijaremos en el marco

[RAMPS Y TORNILLOS](https://lh5.googleusercontent.com/-AXEGupkjdd4/VWJLhteAWVI/AAAAAAAA7xk/_HYRy3Gdolg/w602-h803-no/IMG_20150523_202851.jpg)

(en la foto se ve que hemos fijado ya algunos cables, pero iremos paso a paso)

Ahora montaremos la estructura del LCD 

[PIEZAS LCD](https://lh3.googleusercontent.com/-efYM255wiyw/VVfB4sfTYVI/AAAAAAAA7Sk/wW1DrYhIwkY/w1070-h803-no/IMG_20150516_022854.jpg)
	
(mejor revisar la forma de conectar las 2 piezas entre sí para no ponerlas al revés y que se pueda fijar bien en el marco)

[LCD MONTADO](https://lh3.googleusercontent.com/-JAX-4r5sntM/VVfB4rsVe5I/AAAAAAAA7yM/OZFzLpRDONs/w1070-h803-no/IMG_20150516_024208.jpg)

[LCD MONTADO ATRAS ](https://lh5.googleusercontent.com/-FFu7D9jRXI4/VVfB4txIyeI/AAAAAAAA7yU/3LizVc8dGpM/w1070-h803-no/IMG_20150516_024214.jpg)

Fijamos el LCD a la pieza grande y luego fijamos la pequeña que estará conectada con el marco, por medio de 2 tuercas

Para ello he tenido que agrandar uno de los agujeros

Veamos cómo queda desde alante:

[LCD desde delante](https://lh5.googleusercontent.com/-0dAg_NRrNuI/VVfB4gE-faI/AAAAAAAA7Sk/laFrcw3pdbk/w1070-h803-no/IMG_20150516_024449.jpg)

y desde atrás

[LCD desde atrás](https://lh5.googleusercontent.com/-EwUp66Yd8es/VVfB4gBHxgI/AAAAAAAA7Sk/Ac88JGsfnow/w1070-h803-no/IMG_20150516_024442.jpg)


Vamos a introducir todos los cables que llegan hasta el extrusor en la cadeneta: cable del motor, alimentación del casquillo calefactor, sensor de temperatura y los 2 ventiladores.

[CABLES a poner]

Primero colocamos la cadeneta corta (25 eslabones) que va desde el extrusor hasta la zona del motor del eje X

[CABLES EN LA 1ª CADENETA]

Ahora insertamos los cables en la cadeneta más larga (27 eslabones)

[CABLES EN LAS CADENETAS]

Ahora vamos a insertar el cable del fin de carrera del eje X, que es el cable más largo

[CABLE DEL FIN DE CARRERA]

Es el momento colocar las canaletas en su sitio
Empezaremos por la que lleva los cables a lo largo del eje X

[Colocando canaleta]

Para colocarlas he preferido limarlas para evitar forzarlas. Pienso que se podrían rediseñar para facilitar el montaje

[Canaleta colocada]

Ahora vamos a colocar la canaleta larga que se mueve en el eje Z. Tendrá el cable del fin de carrera y ahora introducimos el cable del motor del eje X

El cableado queda ajustado en esta canaleta, costando bastante trabajo el insertar el último cable que es el motor X y que tiene un conector grande. Conviene marcar el cable de uno de los motores para luego no confundirnos.

La electrónica necesita un ventilador, vamos a montarlo. Necesitamos el soporte y dos tornillos

[PIEZAS]

Una vez fijado ya está listo para colocarlo
[VENTILADOR MONTADO]

Pero antes hay que reorganizar los cables, el ventilador será lo último que conectemos.

Conectamos los cables del extrusor. Los distintos tipos de conectores hacen que sea prácticamente imposible equivocarse. Sí que creo que los cables son excesivamente cortos, si fueran un poco más largos podríamos dejar todos los conectores en la parte de arriba (como se ve en la documentación por cierto) dejando más limpio el montaje. En el futuro cuando tenga que desmontar el extrusor no descarto girarlo para poder sacar los cables por atrás y así dejarlo más compacto

[Cables]

Guiamos los cables para que se queden lo más organizado posible, sujetándolos con bridas.

[Cables con bridas]

Ahora es tiempo de ir conectando los cables.

[ESQUEMA CONEXIONADO]

Empezamos con los cables de la capsula calefactora y de los ventiladores que hay que atornillar

Capsula calefactora

[FOTO]

Ahora conectaremos el ventilador de capa (blower) qu eson los cables rojo y negro con una línea blanca

[FOTO]

Conectamos la alimentación, el ventilador del extrusor y el ventilador de la electrónica a la regleta de alimentación, con cuidao de no equivocarnos de la polaridad. (en la foto no se ve conectado el ventilador de la electrónica)

[FOTO]

Conectamos los motores cada uno en su lugar.

[FOTO]

Es el turno de los finales de carrera

[FOTO]

De momento vamos a dejar los cables sin ajustar más hasta que pruebe que todo funciona ok.

Vamos a colocar el ventilador, necesario para mantener la electrónica a una buena temperatura.

[FOTO ]

Es el momento de probar que todo funciona. Como va a requerir varias prueba vamos a documentar esas pruebas en otro post.

El ajuste de nos va a permitir que quede todo más límpio. Claramente habría sido más cómodo haber recortado los cables.
