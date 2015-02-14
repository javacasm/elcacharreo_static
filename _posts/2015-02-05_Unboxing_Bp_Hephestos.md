---
title: Montando una Prusa Hephestos I: Revisión del material
layout: post
published: true
---
Voy a comenzar a montar una impresora 3D Prusa I3 Hephestos, fabricada por Bq. Comenzaremos revisando el material.


## Primera revisión

![contenido](https://lh5.googleusercontent.com/iI71oSypZAVALO0bzUtbVU5Et7i0o_8wWiATpplTqksO=w423-h317-p-no)

* Con solo abrir la caja salta a la vista que el empaquetado es totalmente profesional
* Viene bastante documentación en papel, incluyendo por supuesto con la garantía por escrito. De un vistazo rápido vemos:
	* Claramente aparece la url para tener acceso a la documentación online, yo añadiría un email/teléfono de soporte (que sí está accesible online)
	* Advierten de que se pierde la garantía si modificamos la electrónica, para pasar de 230º la temperatura de hotend o si añadimos otros elementos (imagino que principalmente la cama caliente, debido a que sus 11-15A de consumo pueden son demasiados para una Ramps)
	* Todos los documentos viene numerados de forma clara.
	* El marcado como número 1 muestra unos pasos previos al montaje (incluir la tuercas en el plástico, limar los ejes de los motores, etc...)

	![empaquetado](https://lh4.googleusercontent.com/S6rGingkLwgZWwW-fa5Wb4RfeRNJdoh5FjlEgYnIw8Hp=w240-h317-p-no)	

* Todas las cajas también están perfectamente etiquetadas y numeradas. Al sacarlas de la caja externa vemos que va a ser difícil volver a colocarlas de la misma manera. ¿Haría falta unas instrucciones de recolocación? ;p (Después hemos visto que se puede recolocar sin problema)
* Personalmente pondría las etiquetas de manera que se puedan leer cuando están abiertas (en la caja 2 está por debajo).

	![herramienta](https://lh5.googleusercontent.com/-Cf3-qix9hkg/VNi0OFqoqiI/AAAAAAAAzMo/XNMkVcg8ggQ/w393-h294-p-no/IMG_20150205_113530.jpg)

* No me resisto a abrir la caja 7 de herramientas, donde hay:
	* Destornillador de plástico para ajustar la electrónica
	* Llaves Alen para la tornillería
	* Llave fija para la estructura
	* Herramientas para la limpieza del hotend
	* Piezas impresas para sujetar el rollo de plástico a la estructura. Viendo de cerca estas piezas se ve que están impresas con gran calidad (aunque en el cilindro se aprecia que esa impresora tenía un leve cabeceo en el eje Z)

	![piezas](https://lh4.googleusercontent.com/-yEG5VmxnXpk/VNi0OLDbQOI/AAAAAAAAzMw/IehZAgy6bEo/w393-h294-p-no/IMG_20150205_114247.jpg)	

* Viendo la caja de las piezas que hay que preparar para el montaje se ve que la calidad de las piezas es bastante alta, todas vienen en bolsas de plástico

* Se repite el problema de volver a encajar las cosas una vez que las sacamos: es difícil volver a meter las piezas en la caja una vez que las sacamos, y no he visto ninguna advertencia sobre su fragilidad.

	![extrusor](https://lh3.googleusercontent.com/Uw3TTDoByhfhtnv9AnG4MmMfb6T0VZf0MCjuqJRzJyrQ=w440-h329-p-no)

* El extrusor es una bloque metálico compacto, con los engranajes internos (pienso que un mk7) y con un ventilador para el motor y otro de capa . Viene en una caja perfectamente embalado. 


	![tornillería](https://lh6.googleusercontent.com/-MgQTfnj6aqw/VNi0OGyxSVI/AAAAAAAAzM4/lP4fwB3Zsd4/w425-h317-p-no/IMG_20150205_115632.jpg)

* La tornillería viene perfectamente organizada en bolsas con todos los componentes del tipo junto. Un pero: pondría el texto en español (como el resto de las etiquetas) o al menos una pequeña hoja donde traduzca los 4-5 términos: (screw,nut,bolt,...)
* El cristal viene empaquetado y protegido perfectamente en su caja, pero echo en falta un aviso sobre el contenido, es fácil que se caiga y rompa.
* Algunas piezas vienen en sobres (dentro de la caja) y estos son díficiles de abrir, se podrían usar de los que tiene un plastiquito que abre todo más fácil.

	![electrónica](https://lh6.googleusercontent.com/AsLKQj08yl1_wNJScyFdvEQLmoNEolitcCeloPYykDyo=w440-h329-p-no)

* La electrónica (de elecfreaks) tiene muy buen aspecto, incluye un Freaduino Mega, una Ramps 1.4 y un LCD con control y SD, para usar la impresora independientemente del PC. No veo ninguna pieza que sea el mando del lcd. ** TODO: me apunto buscar piezas para completar o mejorar el aspecto de la hephestos ¿habrá algún repositorio con todas ellas?.

	![motores](https://lh5.googleusercontent.com/qLbMQqdkn6Zgd56uHwQyAhKjBllCfRXFRKBejXFQvKbD=w257-h341-p-no)

* Los motores paso apaso son de calidad y se nota, con conector lo que facilita el montaje, veo que tiene el eje limado cuando en las instrucciones he visto que hay que limarlo. ¡¡Mucho mejor, pero hay que actulizar las instrucciones!! Consulto con el servicio técnico y me informan de que  ya está corregido en la web (igual que la advertencia sobre la fragilidad del cristal y que en papel ya se está enviando la nueva versión, me debe de haber llegado una de las antiguas :-/ ).

	![alimentación](https://lh5.googleusercontent.com/6dj09tBa5xmYH0ab6jz7_5QIT7YoYXVv8jLxNgPfDmDl=w456-h341-p-no)

* Debido a que ĺa Hephestos está pensada para usar PLA sin cama caliente la alimentación es como el cargador de un portátil, pero con suficiente potencia para mover todo el sistema: 12v 8A **TODO: me hago este apunte para revisar cómo queda integrado en la estructura**

	![marco](https://lh6.googleusercontent.com/WIaV-PMuoLPn46OdoqgBEKBd4QVaBOnfD6Q26-98gERK=w407-h303-p-no)

* El marco tiene un acabado mate muy bonito, se ve muy pulido. Me ha sorprendido no ver ningún logo de Bq ni tampoco el nombre del modelo.

* Después de abrir todas las cajas echo en falta el que se incluyan un par de metros de plástico para poder probar el funcionamiento en el mismo momento que se termine de montar.

En definitiva se ve un kit de una calidad enormemente profesional.

Próxima parada: revisión de las instrucciones de montaje