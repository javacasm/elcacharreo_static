---
title: Montaje I3 Prusa Hephestos VIII: Electronica
layout: post
published: false
---

En este post vamos a terminar el [montaje de la impresora](http://blog.elcacharreo.com/tag/hephestos/) instalando y conectando la electrónica, continuando con el montaje de una impresora Prusa i3 [Hephestos de Bq](http://bq.com/es/prusa). 

Comenzaremos fijando la placa Arduino y la RAMPS al marco, utilizando una pieza de plástico que nos servirá para fijar los cables y como aislante.

[PIEZAS]

Fijaremos los 2 tornillos en los agujeros opuestos sobre la pieza de plástico 

[RAMPS Y TORNILLOS]

y luego lo fijaremos en el marco

[FIJADA AL MARCO]

Ahora montaremos la estructura del LCD 
[PIEZAS]

(mejor revisar la forma de conectar las 2 piezas entre sí para no ponerlas al revés y que se pueda fijar bien en el marco)

Fijamos el LCD a la pieza grande y luego fijamos la pequeña que estará conectada con el marco, por medio de 2 tuercas

Para ello he tenido que agrandar uno de los agujeros

[LCD desde delante]

[LCD desde atrás]




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
