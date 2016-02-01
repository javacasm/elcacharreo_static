---
title: Plantilla
layout: post
published: false
---
2016-01-31-Montando_ciclops.md

# ¿Qué es ciclops?

Scanner de l uz estructurada

# Montaje
Caja plana
[fotoCaja]
con forma de maleta, cómoda de llevar y algo pesada a primera vista
[fotomaleta]
La documentación en papel y en varios idiomas
[fotodoc]
Los componentes distribuidos en cajas como nos tiene acostumbrado Bq
[fotocajas]
Yo habría puesto un número en la frontal de cada caja (aunque realmente son sólo 3 las cajas y todo está claro)

## Montaje del disco
Empezamos con el montaje del disco
[disco1]
Dentro todo está ordenado en cajas para evitar confusiones
[piezas disco]
Encontramos las piezas impresas, el soporte ¿Por qué no es una pieza impresa también?, una llave Alen pequeña el enorme rodamiento
[fotorosamiento]
El rodamiento encaja perfectamente con las piezas impresas (que están impresas en alta calidad [fotopiezaimpresa])
[foto rosamiento piezas]
Para apretar los tornillos se necesita una llave fija del 13 (que no he visto en ningún sitio que se dijera que fuera a hacer falta)
Pegamos la alfombrilla antideslizante
[fotoAntideslizante]
Quedando ya montado el disco
[fotodiscoMontado]

## Montaje de la estructura de las varillas

Primero motnaremos la base que une el soporte del motor y el de la electrónica

## Montaje de la base

Comenzamos ahora a montar la estructura
[fotocajaestructura]
El interior contiene tornillos, varillas y piezas impresas
[fotoInteriorCaja]
[foto contenido]
(en estra foto el soporte de la electrónica y de la cámara está al revés)
En estas piezas curvas se aprecia la calidad de la impresión
[fotopiezascurvas]

Empezamos con las 3 varillas más largas, que serán las que marquen la distancia entre el diso y el soporte
[piezasvarillas]
Ajustamos las tuercas a unos 3cm de un extremo y dejando que la varilla más corta marque la posición en las  más largas
[foto varillas con tuercas]

Ahora vamos a fijar el soporte del motor y el de la electrónica a las varillas
[piezasvarillassoportes]

Para ellos insertamos las tuercas en los huecos de las pizeas
[foto tuercas piezas]
Hacemos que las varillas más largas salgan unos 4cm por el extremo del soporte del motor (luego las ajustaremos)
[fotos varillas motor]
Ahora insertamos la varilla central en el soporte de la cámara
[fotovarillacamara]
Ajustamos la varillas más largas
[fotoTodas las varillas]

## Montaje de los brazos de los láseres

Ahora usaremos las restante 4 varillas para montar los 2 brazos donde soporte de los láseres
[foto piezas laseres]

Dejamos las tuercas a unos 4cm de los extremos
[foto varillatuercas]

Colocamos los brazos de un lado
[fotobrazosizqda]

Colocamos los brazos del otro  lado
[fotobrazosdrcha]

Quedando ya los brazos completos
[foto completos]

Aprovechamos para apretar las tuercas

## Sujección de los láseres

Ahora vamos a montar los los soportes de los láseres
[fotos de los soportes láseres]

Montamos con las 4 tuercas (y sus arandelas) los soportes de los láseres

## Montaje del motor paso a paso

Vamos a conectar el motor del plato. Para ello empezaremos preparando el engranaje
(el motor está en la caja de electrónica)
[foto del engranaje]

Vamos a colocar el motor en su pieza
[foto motor colocado]

y le añadimos el engranaje
[foto engranaje]

Ahora ponemos el disco en su lugar
[foto disco colocado]

Colocamos las gotas de silicona


## Electrónica
[foto de la electŕonica]
* Motor paso a paso
* WebCam Logitech
* Alimentación
* Placa Zum
* Placa ZumScan
* 2 Láseres

### Añadimos los láseres

Colocamos los láseres
[fotoColocacionLaseres]

Pasamos los cables por el hueco hacia abajo
[fotocables laser 1]
[fotocables laser 2]
Dejando todos los cables por atrás
[foto clabes atras]

### Cámara

Para colocar la cámara es necesario desmontar el soporte. para lo que usaremos la llave Alen
[foto cámara]

Quitamos los tapones laterales de goma
[foto tapones]

Quitamos el tornillo del pasado
[foto tornillo]

Empujamos el pasador
[foto pasador]

dejando la cámara sin base
[foto cámara]

ahora colocamos la cámara en la pieza soporte
[foto camara en soporte]

Colocamos la placa Zum con el ZumScam y el driver del motor en su lugar
[foto placa]

Conectamos los láseres: el L1 es el de la izquierda (visto desde atrás) y el L2 ede la derecha
[foto láseres conectados]

Conectamos el motor a la derecha del driver, con el cable negro arriba (según se mira)
[fotoconexion todo]

Ahora ya solo queda poner las canaletas para los cables sobre las varillas
[foto canaleta corta]
[foto canaleta larga]

y la tapadera de atrás

[foto tapadera]

## Montaje del patrón

Ya sólo nos queda montar el patrón
[foto piezas patron]

Retiramos las protecciones del metacrilato

Atornillamos
[foto tornillo]

Pegamos los patrones

# Configuración e instalación del software

http://www.bq.com/ciclop

Descargamos el [firmware](https://github.com/bqlabs/horus-fw) de la placa Zum (que Grbl)

Descargamos horus

https://static-bqreaders.s3.amazonaws.com/file/ciclop/Horus_Manual_ES.pdf

¿He instalado python-scipy y python-opencv?
Cuidado con el opencv

2039  sudo add-apt-repository ppa:bqopensource/opencv
2040  sudo add-apt-repository ppa:bqopensource/horus
2041  sudo apt-get update
2042  sudo apt-get install horus
2043  horus


[Pantallazo de los láseres]
Ahora ajustamos los láseres verticalmente
