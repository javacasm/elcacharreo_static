--- 
layout: post
status: publish
published: true
title: Actualizando redmine sin perder nuestros datos
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 800
wordpress_url: http://blog.elcacharreo.com/?p=800
date: 2013-09-18 23:07:42 +02:00
categories: 
- programacion
- ubuntu
tags: 
- redmine
- "actualizaci\xC3\xB3n"
- upgrade
- update
- backup
- restore
comments: []

---
<img class="alignleft" title="redmine" src="http://d33np9n32j53g7.cloudfront.net/assets/stacks/redmine/img/redmine-stack-110x117-33f4d5dcdb22e460d9853e7dd11ffd45.png" alt="" width="110" height="117" /><a href="http://www.redmine.org/">Redmine</a> es una aplicación de gestión de proyectos de código abierto muy popular en la red. A la vez que nos permite gestionar proyectos, con tareas, gestión de errores, usuarios que están vinculados con ciertos roles a los proyectos, control de horas para facturación,  etc.  Además nos facilita el gestionar la documentación asociada a los proyectos. Todo ello <a href="http://blog.elcacharreo.com/2011/06/06/teletrabajando-en-la-nube/">trabajando desde la nube</a>, es decir ningún usuario tiene que instalar nada en ningún equipo y puede acceder a sus tareas, proyectos y a la documentación asociada desde cualquier punto. Incluye además un servidor de Subversión, con lo que si nos dedicamos a programar, podemos vincular todo el trabajo con el código.

Yo la llevo usando desde hace bastante tiempo para seguir la vida de los<a href="http://blog.elcacharreo.com/2013/06/28/por-que-nunca-terminamos-los-proyectos-que-empezamos/"> mil proyectos</a> en los que siempre ando metido, más como repositorio de información, que como controlador de tareas/proyectos.

A principio de verano el servidor ubuntu donde tengo instalado redmine comenzó a fallar, hasta que ha dicho basta. Uno de los discos duros murió. Afortunadamente tengo copia de seguridad de todo y ha sido posible recuperar toda la información.

Para empezar descargamos una nueva versión de <a href="http://bitnami.com/stack/redmine">redmine desde bitnami,</a> donde podemos encontrar máquinas virtuales o imágenes ya preinstaladas. Yo he utilizado una máquina virtual con la versión 2.3.3. Una vez descargada recuperamos los diferentes backups.

Eliminamos la base de datos que ya trae
<pre>mysql -uroot -p --port=3306 //la contraseña es bitnami
drop database bitnami_redmine; // redmine si es una versión antigua
create database bitnami_redmine character set utf8;
grant all privileges on bitnami_redmine.* to 'redmine'@'localhost';
exit</pre>
Ahora restauramos el backup
<pre>mysql -uredmine bitnami_redmine &lt; 2013-02-01.sql</pre>
Copiamos los ficheros
<pre>cd /opt/bitnami/apps/redmine/htdocs/files/
tar jxvf 2013-04-10_files.tar.bz2</pre>
Ahora hacemos la migración de nuestros datos (versión 1.1.1 en mi caso) a la estructura de la versión instalada. Como la instalación de redmine contiene todo el código (en ruby) con los scripts de actualización entre versiones.
<pre>cd /opt/bitnami/apps/redmine/htdocs/
rake generate_secret_token
rake db:migrate RAILS_ENV=production</pre>
Por último limpiamos la instancia.
<pre>rake tmp:cache:clear
rake tmp:sessions:clear</pre>
Ahora rearrancamos la instancia
<pre>sudo ./ctlscript.sh restart</pre>
Y todo listo para seguir usando redmine.
