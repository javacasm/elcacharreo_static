--- 
layout: post
status: publish
published: true
title: "Configurando conexi\xC3\xB3n directa con raspBerry"
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 764
wordpress_url: http://blog.elcacharreo.com/?p=764
date: 2013-05-01 01:46:02 +02:00
categories: 
- tutoriales
- ubuntu
- raspberry
tags: 
- tutorial
- ubuntu
- raspberry
- "conexi\xC3\xB3n"
comments: 
- id: 3804
  author: Acceso remoto a raspberry &laquo; El Cacharreo.com
  author_email: ""
  author_url: http://blog.elcacharreo.com/2013/02/01/acceso-remoto-a-raspberry/
  date: 2013-05-01 16:17:13 +0200
  date_gmt: 2013-05-01 14:17:13 +0200
  content: "[...] remoto a raspberry  Ya vimos en un post anterior c\xC3\xB3mo conectar nuestra raspberry a un pc directamente. A partir de aqu\xC3\xAD o bien si est\xC3\xA1 conectada normalmente a nuestra red, podremos acceder a ella [...]"
---
<a href="http://blog.elcacharreo.com/wp-content/uploads/2013/05/20130501_003523.jpg"><img class="alignleft size-thumbnail wp-image-766" style="margin-left: 10px; margin-right: 10px;" title="20130501_003523" src="http://blog.elcacharreo.com/wp-content/uploads/2013/05/20130501_003523-150x150.jpg" alt="" width="150" height="150" /></a>Vamos a configurar nuestra raspberry y un portátil con Ubuntu para facilitar al máximo la conexión y así no tener que utilizar muchos componentes. De esta manera podremos trastear con un kit mínimo, evitando tener que usar un teclado, ratón y sobre todo un monitor.

En concreto usaremos símplemente un cable de red (ethernet) y un cable micro-usb para alimentar la raspberry.

Con esta configuración no podemos consumir en total más de los 500mA que proporciona el USB.

Tendremos que modificar ficheros de configuración en el PC y en la raspberry.

Asumiremos que tenemos conexión a internet via Wifi y utilizaremos el cable ethernet para dar conectividad a la raspberry. Crearemos una red entre el portátil y la raspberry creando una subred distinta y haremos que el portátil actúe como gateway de esa red enrutando los paquetes hacia la raspberry y dándole acceso a internet.

Comencemos editando la configuración del pc, para lo que ejecutaremos en el pc:
<pre>sudo vi /etc/network/interfaces</pre>
y dejamos el contenido del fichero (la red que se usa normalmente es las 192.168.1.x de ahí que el gateway sea 192.168.1.1 que es el real)

<a href="http://blog.elcacharreo.com/wp-content/uploads/2013/05/paso1.png"><img class="aligncenter size-full wp-image-767" title="paso1" src="http://blog.elcacharreo.com/wp-content/uploads/2013/05/paso1.png" alt="" width="291" height="212" /></a>

Ahora vamos a editar la configuración de la raspberry. La forma más sencilla es editando los ficheros de configuración desde el pc, para lo que insertamos la tarjeta sd de la raspberry (obviamente con esta apagada) en el pc y ejecutamos en este:
<pre>sudo vi /media/10b4c001-2137-4418-b29e-57b7d15a6cbc/etc/network/interfaces</pre>
Quedando el mismo:

<a href="http://blog.elcacharreo.com/wp-content/uploads/2013/05/paso2.png"><img class="aligncenter size-full wp-image-769" title="paso2" src="http://blog.elcacharreo.com/wp-content/uploads/2013/05/paso2.png" alt="" width="232" height="230" /></a>

Ahora, colocamos la tarjeta sd en la raspberry y volvemos a encenderla

Conectamos el cable ethernet entre los dos

En el PC hacemos comprobamos que la tarjeta eth0 está ok y con la ip correspondiente, haciendo
<pre>ifconfig /all</pre>
Veremos que aparece el interface eth0 con ip 192.168.0.80

Ahora vamos a hacer que el portátil actúe como router. Para ello ejecutamos los siguientes comandos
<pre>sudo su -</pre>
<pre>root@ubuntu-asus:~# echo 1 &gt; /proc/sys/net/ipv4/ip_forward
root@ubuntu-asus:~# /sbin/iptables -t nat -A POSTROUTING -o wlan0 -j MASQUERADE</pre>
<pre>Por último editamos el fichero de configuración de DNS con</pre>
<pre>sudo vi /etc/resolv.conf</pre>
<pre>y lo dejamos así</pre>
<img class="aligncenter size-full wp-image-770" title="paso3" src="http://blog.elcacharreo.com/wp-content/uploads/2013/05/paso3.png" alt="" width="273" height="167" />

Ahora solo falta probar que tenemos conectividad, haciendo un ping
<pre>ping 192.168.0.90</pre>
Si todo es correcto ya podremos acceder

JAvacasm
