---
title: Estación meteorológica
layout: post
published: true
---

En este proyecto vamos a montar una estación meteorológica para el Colegio Federico García Lorca de Güevejar, donde los alumnos están trabajando el tema de la [meteorología](http://unblogfantasticoenguevejar.blogspot.com.es/search/label/Meteorolog%C3%ADa) y el [clima](http://unblogfantasticoenguevejar.blogspot.com.es/2014/12/presentaciones-proyecto-clima-y.html#) dirigidos por su profe [Diego](https://twitter.com/diegogg)

En concreto van a montar una estación meteorológica controlada por arduino basada en el [shield de sparkfun](https://www.sparkfun.com/products/12081) que puede controlar:

* Temperatura (Termómetro)
* Humedad (Higrómetro)
* Presión (barómetro)
* Lluvia (pluviómetro de balancín)
* Dirección del viento (veleta)
* Velocidad del viento (anenómetro)
* Luz
* Nivel de batería

![shield](https://cdn.sparkfun.com//assets/parts/8/7/0/7/12081-01.jpg)

Los sensores son de [este kit](https://www.sparkfun.com/products/8942)

![sensores](https://cdn.sparkfun.com//assets/parts/2/2/3/3/08942-01.jpg)

El shield también permite conectar un GPS lo que lo hace ideal para enviarlo en un globo sonda.

La ventaja de comprar un producto de calidad es que la documentación es excelente, como es el caso. Disponemos de los siguientes materiales (eso sí, en perfecto inglés)

* [Guía para arrancar(Getting started)](https://learn.sparkfun.com/tutorials/weather-shield-hookup-guide)
* [Código](https://github.com/sparkfun/Weather_Shield)

Veamos el proceso de instalación:

* Descargamos las [librerías](https://dlnmh9ip6v2uc.cloudfront.net/assets/b/5/9/7/f/52cd8187ce395fa7158b456c.zip) de los sensores de presión y humedad.

* Descomprimimos el zip en la carpeta libraries de nuestro directorio de arduino.

* Descargamos el [código de ejemplo](https://github.com/sparkfun/Weather_Shield/blob/master/firmware/Weather_Shield/Weather_Shield.ino) y lo adaptamos lévemente (traduciendo y simplificando la salida). Se puede descargar de [aquí](https://www.dropbox.com/s/6odc4ehre9zueqo/MeteoGuevejar.ino?dl=0)

* Instalamos el programa en nuestro Arduino Uno

* Conectamos los componentes: podemos ver imágenes del montaje en [la página del producto](https://www.sparkfun.com/products/8942), donde se aprecia que [las conexiones](https://cdn.sparkfun.com//assets/parts/2/2/3/3/08942-01.jpg) que llegan a la placa son la del pluviómetro y la de la veleta, conectándose el anemómetro a la veleta

Ya tenemos todo montado y vamos a ver la salida


	$,dirViento=45,velViento=nan,humedad=47.3,temp=16.1,lluvia=0.00,lluviaDia=0.00,pression=93979.00,bat=4.27,luz=0.17,#

	$,dirViento=45,velViento=nan,humedad=47.0,temp=16.2,lluvia=0.00,lluviaDia=0.00,pression=93979.50,bat=4.28,luz=0.18,#

	$,dirViento=45,velViento=nan,humedad=46.7,temp=16.2,lluvia=0.00,lluviaDia=0.00,pression=93979.25,bat=4.29,luz=0.17,#

	$,dirViento=45,velViento=nan,humedad=46.4,temp=16.2,lluvia=0.00,lluviaDia=0.00,pression=93980.25,bat=4.31,luz=0.19,#

	$,dirViento=45,velViento=nan,humedad=46.1,temp=16.1,lluvia=0.00,lluviaDia=0.00,pression=93976.00,bat=4.29,luz=0.19,#

	$,dirViento=45,velViento=nan,humedad=45.7,temp=16.1,lluvia=0.00,lluviaDia=0.00,pression=93974.00,bat=4.29,luz=0.19,#

![resultado](https://lh5.googleusercontent.com/-s-vjoko-s1E/VNoCBJY3WOI/AAAAAAAAzF8/3kZm_zF91xM/w1061-h785-no/IMG_20150210_133140.jpg)

Donde vemos que los datos son bastante correctos.
Hemos probado todos los instructumentos y sus lecturas son correctas ~~salvo el anemómetro que da siempre 0~~.

Viendo los componentes usados podemos pensar que no sería díficil buscar modelos en 3D de los componentes e imprimirlos....

Actualizado 12-2-2015: En el código original de sparkfun hay un error, se llama 2 veces a la función get_wind_speed(), lo que da lugar a que entre una y otra no de tiempo a medir la velocidad realmente. Basta con leer la primera vez y la segunda tomar el valor leído. He propuesto el cambio a sparkfun a ver si lo acepta. Sería un honor para mi que lo hicieran. El código nuestro está corregido.