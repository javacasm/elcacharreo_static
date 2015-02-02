--- 
layout: post
status: publish
published: true
title: Acceso remoto a raspberry
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 774
wordpress_url: http://blog.elcacharreo.com/?p=774
date: 2013-05-01 20:33:49 +02:00
categories: 
- comunicaciones
- tutoriales
- raspberry
tags: []

comments: []

---
Ya vimos en un post anterior <a href="http://blog.elcacharreo.com/2013/05/01/configurando-conexion-directa-con-raspberry/">cómo conectar nuestra raspberry a un pc directamente</a>. A partir de aquí o bien si está conectada normalmente a nuestra red, podremos acceder a ella remotamente de varias formas:
<ul>
	<li>SSH: es la forma más habitual de conexión con ordenadores remotos con Linux, y aunque nos siga sorprendiendo la raspbery lo es. Para poder conectarnos, antes tenemos que activar el servicio ssh en la raspberry. Lo haremos desde la configuración a la que llegaremos usando el siguiente comando</li>
</ul>
<pre style="padding-left: 30px;">sudo raspi-config</pre>
<p style="padding-left: 30px;">y activando ssl en la siguiente pantalla</p>
<p style="text-align: center;"><img class="aligncenter" title="raspberry config" src="https://learn.adafruit.com/system/assets/assets/000/003/151/medium800/learn_raspberry_pi_raspi_config_ssh1.png?1396792349" alt="" width="480" height="298" /></p>
<p style="padding-left: 30px;">Para obtener la ip de nuestra raspberry, desde una ventana de terminal usamos el comando</p>

<pre style="padding-left: 30px;">sudo ifconfig</pre>
<p style="padding-left: 30px;">y en el resultado buscamos ip addr</p>
<p style="text-align: center;"><img class="aligncenter" title="ifconfig" src="https://learn.adafruit.com/system/assets/assets/000/003/154/medium800/learn_raspberry_pi_finding_ip_address.png?1396792421" alt="" width="480" height="297" /></p>
<p style="padding-left: 30px;">Una vez activado podremos acceder usando</p>

<pre style="padding-left: 30px;">ssh pi@192.168.x.x</pre>
<p style="padding-left: 30px;">con contraseña (si no la hemos cambiado, lo cual es recomendable) raspberry.</p>

<ul>
	<li>Escritorio remoto: nos permite acceder al entorno gráfico de nuestra raspberry. Usaremos VNC del que existen tanto cliente como servidores gratuitos y para diferentes plataformas.</li>
</ul>
<p style="padding-left: 30px;"><a href="http://blog.elcacharreo.com/wp-content/uploads/2013/05/rasp_escritorio.png"><img class="aligncenter size-medium wp-image-780" title="rasp_escritorio" src="http://blog.elcacharreo.com/wp-content/uploads/2013/05/rasp_escritorio-300x223.png" alt="" width="300" height="223" /></a></p>
<p style="padding-left: 30px;">Empezaremos instalando el servidor</p>

<pre style="padding-left: 30px;">sudo apt-get install tightvncserver</pre>
<p style="padding-left: 30px;">Una vez instalado podemos ejecutarlo con</p>

<pre style="padding-left: 30px;">tightvncserver :1</pre>
<p style="padding-left: 30px;">Con esto conseguimos que se arranque en este momento. Para hacer que el servicio se ejecute en cada arranque podemos descargar <a href="http://www.penguintutor.com/otherfiles/tightvncserver-init.txt">este script</a>. Para instalar en nuestra raspberry haremos:</p>

<pre style="padding-left: 30px;">wget http://www.penguintutor.com/otherfiles/tightvncserver-init.txt
sudo mv tightvncserver-init.txt
sudo mv tightvncserver-init.txt /etc/init.d/tightvncserver
sudo chown root:root /etc/init.d/tightvncserver
sudo chmod 750 /etc/init.d/tightvncserver
sudo update-rc.d tightvncserver defaults</pre>
<p style="padding-left: 30px;">Rearrancamos con</p>

<pre style="padding-left: 30px;">sudo reboot</pre>
<p style="padding-left: 30px;">y listo. Ya podemos conectarnos desde nuestro cliente VNC usando la ip de la raspberry</p>
Javacasm
