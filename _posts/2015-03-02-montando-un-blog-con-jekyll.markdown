--- 

title: Montando un blog con jekyll
layout: post
status: publish
published: false
categories: []

tags: []

comments: []

---

# Montando un blog con jekyll

Cansado de tantos problemas de rendimiento y mantenimiento de wordpress he decidido migrar a un sistema más sencillo de mantener y sobre todo rápido, sin depender de infraestructura, con vistas a poder user un hosting doméstico (sí en casa, que 100Mb de subida dan para mucho :) )

Veamos los pasos

* Instalar ** jekyll ** BUSCAR EL ENLACE
* Extraer la información de wordpress. Jekyll tiene una [página](http://import.jekyllrb.com/docs/home/) destinada a estos temas y en concreto una para [wordpres](http://import.jekyllrb.com/docs/wordpress/). Tenemos que tener operativo ruby y tener instaladas algunas gemas pero dado que ya habíamos instalado jekyll debemos tenerlo todo listo. 
	La importación no puede ser mas sencilla: personalizamos para nuestra configuración (esencialmente sobre la base de datos) y ejecutamos, obteniendo  un directorio **_posts** donde se genera un fichero MarkDown por cada post. 
	En mi caso como tenía un plugin de foros en wordpress existen algunos posts que hay que evitar que se vean, que son los que contienen la información de los foros. Sólo hay que marcar la etiqueta **published** a _false_ y listo.
* Copiamos el contenido de la carpeta **_posts** a la instalación de jekyll y generamos la estructura del bloq con 

		jekyll build

	Tras lo cual tendremos una carpeta _site que será el blog propiamente.

* Para facilitar la publicación desde mi máquina (o desde cualquier otra)