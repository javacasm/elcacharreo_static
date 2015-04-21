---
title: Plantilla
layout: post
published: false
---

## roboblock

### Ejecutando roboblock

Para ejecutarlo necesitamos [bower](https://github.com/bower/bower) que es un empaquetador de interfaces de usuario que permite a un usuario sin privilegios de administrador ejecutar el sistema y ¿¿Correr un servidor web??

Lo instalamos via npm que es el gestor de paquetes de nodejs (que actuará como servidor web, que podemos instalr con

	sudo apt-get install npm


Una vez instalado ''npm'' instalamos ''bower''

	nmp install -g bower

No sé porqué pero es necesario hacer esto:

	ln -s /usr/bin/nodejs /usr/bin/node

Ahora hacemos la parte de instalación para el usuario

	bower install

(En mi caso había creado el fichero ~/.config/configstore como root y he tenido que cambiar el propietario)