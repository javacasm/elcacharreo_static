---
title: Plantilla
layout: post
published: false
---

Algo interesante cuando estamos imprimiendo una pieza es poder cambiar el filamento, con esto podemos conseguir que la pieza tenga varios colores.

Con una impresora de un único extrusor podemos conseguir esto cambiando el filamento en determinado momento.

Aunque a primera vista parece que los resultados no van a ser demasiado vistosos, si buscamos/hacemos el diseño adecuado se pueden conseguir resultados bastante interesantes, como los que nos enseñan los [Pequeños Makers del cole Federico Garcia Lorca de Güevejar](https://twitter.com/FGuevejar/status/783993369748004864)

![ejemplo cambio filamento](https://pbs.twimg.com/media/CuFNzOuXYAAB8Ut.jpg)

Donde hacen hasta 4 cambios de filamento en una misma pieza.

Para cambiar el filamento podemos hacer simplemente una pausa en la impresión y cambiarlo. Si lo hacemos así debemos tener en cuenta que hay que limpiar bien la boquilla para evitar que los colores se mezclen.

También podemos hacerlo usando extensiones (plugins) de Cura. En concreto usaremos el plugin de Postprocesado donde tenemos la opción de cambiar de filamento a una altura dada

En el caso de la versión para Linux tenemos que instalar los plugins con

    sudo apt install cura-extra-plugin-godmode cura-extra-plugin-postprocessing cura-extra-plugins-all


En la versión para Windows de Cura ya vienen instaladas las extensiones.

Una vez hayamos configurado nuestra impresión incluiremos el script de PostProcesado

![PostProcesado](https://github.com/javacasm/elcacharreo_static/blob/master/images/Plugin_postprocesado_cura.png?raw=true)

Seleccionamos la opción "Pause at Height"

![Pausa at height](https://github.com/javacasm/elcacharreo_static/blob/master/images/Pause_at_height.png?raw=true)

Y ahora configuramos los parámetros:

"Pause height":  Altura a la que se hará la parada
"Head Park X" y "Head Park Y" serán donde irá el extrusor al parar, para facilitar el cambio. Yo suelo poner 0,0
"Retraction": será la cantidad de filamento que se retira del extrusor para quitar el filamento.
"Extrude amount": cantidad del nuevo filamento que vamos a extruir para limpiar bien la boquilla del filamento anterior.
"Redo layers": es el numero de capas que se van a repetir para mejorar la adhesión. No suelo utilizarla.

![parametros](https://github.com/javacasm/elcacharreo_static/blob/master/images/Parametros_pause_at_height.png?raw=true)

Podemos añadir varios cambios sin más que añadir más secuencias de comandos

He preparado un breve vídeo sobre como hacerlo a ver si os es útil:


<iframe width="560" height="315" src="https://www.youtube.com/embed/8b5O6pSkeTc" frameborder="0" allowfullscreen></iframe>

 (https://youtu.be/8b5O6pSkeTc)

JAVACASM
