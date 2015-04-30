---
title: Probando ATX Board de staticboards
layout: post
published: false
---
He estado probando  una placa ATX Board que [Staticboards](http://www.staticboards.es/) tuvo la amabilidad de enviarnos. Se trata de una placa pensada para poder utilizar una fuente de alimentación ATX con nuestra impresora 3D.

![Placa ATX Board](https://lh3.googleusercontent.com/-wOFzhn04MQs/VUK4dQtBSSI/AAAAAAAA5uM/GePSDocyNrA/w1158-h651-no/ATX%2BBoard.png)

Varias son las ventajas de usar una placa como esta:

* No necesitamos cortar los cables de la fuente sino que podemos conectarla directamente, con lo que podemos volver a usar la fuente en un PC.
* Es muy sencillo sacar los cables de 12v de los bornes, por ejemplo para alimentar una impresora 3D
* Podemos usarla para montar un sencilla fuente de laboratorio, con los voltajes de 12v,-12v, 5v, 3.3v. Todas estos voltajes están disponibles desde una regleta en el lateral.
* Dispone de 2 conectores USB que nos permite aliimentar pequeños dispositivos como Raspberry o Arduino o similar.
* Tenemos un interruptor para poner la fuente en StandBy, quedando disonible un voltaje de 5v en el pin 5vSBY
* Podemos encender la fuente desde el estado de StandBy sin más que poner el pin PS_ON en estado bajo, para lo que tenemos unos pines disponibles.

Para probarla usé una fuente compacta (álgo más pequeña que una ATX) pero que tenía un conector (antiguo) de 20 pines y funcionó perfectamente. Finamente vi que también había otro conector pequeño (de 4 pines) que  se conectaba junto al grande de 20 formando un conector estandar de 24 pines.

![Conexión con arduino](https://lh5.googleusercontent.com/-P9Fjwx9rMjA/VUJUeegdNSI/AAAAAAAA5sk/vdAYHVcp3UU/w869-h651-no/IMG_20150428_153702.jpg)

He probado a activarla completamente desde Standby desactivando el pin PS_on con una placa arduino. El montaje no puede ser más sencillo: Conectamos un pin digital (en mi caso yo usé el pin 13) y desde un programa sencillo lo activamos y descativamos (en mi caso lo controlaba pulsando la tecla 0 u 1). Cuando el pin está en estaba LOW la fuente se arranca.

Algo que sí que me gustaría es que los conectores USB estuvieran alimentados en estado de Standby para así poder activarla completamente desde una raspberry alimentada desde lis USB. Con el funcionamiento actual podemos hacerlo alimentándola desde el pin 5vsby.

Al comentar este tema con Javier de Staticboards, me comentó que el hacerlo así es para que se puedan apagar los dispositivos conectados a USB. Ciertamente ambas opciones para alimentar el USB tienen sentido. Yo pensé que el USB estaba alimentado siempre desde el principio y por eso me extrañó porque además ya me había pensado conectar un arduino vía wifi y que se podía encender desde el móvil y que él se encargaría de arrancar todo, pero realmente es igual de fácil el alimentarlo desde el conector 5vSBY. Aunque no he medido los consumos, imagino que no habŕa problema para proporcionar los 200mA que necesita un arduino para funcionar. He buscado por ahí la intensidad que suele entregar el pin 5vSBY y parece que da hasta 400mA

He preparado un video con la revisión de la placa https://youtu.be/8pY5zXjVptw

En definitiva, una placa muy interesante para todo aquel que quiera darle un buen uso a una placa ATX, bien sea para alimentar un impresora 3D o una mini-fuente de laboratorio.

JAVACASM