--- 
layout: post
status: publish
published: true
title: "Teletrabajando en la nube II: google apps"
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 522
wordpress_url: http://blog.elcacharreo.com/?p=522
date: 2012-06-26 01:37:49 +02:00
categories: 
- blog
- teletrabajo
- herramientas
tags: 
- nube
- google apps
comments: []

---
<img class="alignleft" style="margin: 20px;" src="http://www.grupoandroid.com/uploads/0e66df51e371e0e4e5521423208c2c8a.jpg" alt="" width="200" />Como ya vimos en la <a href="http://blog.elcacharreo.com/2011/06/06/teletrabajando-en-la-nube/">anterior entrada</a> cada día es más sencillo trabajar en la nube, usando herramientas de lo más avanzadas.

¿Qué podemos conseguir con ello?
<ul>
	<li>Trabajar en equipos de personas dispersas, es decir no importa donde estén físicamente</li>
	<li>Acceso ubicuo a la información</li>
	<li>Homogeneidad en las herramientas de trabajo</li>
	<li>Coste reducidísimo</li>
	<li>Dependencia mínima de software de terceros, sólo necesitamos un navegar y listo</li>
</ul>
<div>Veamos el procedimiento para crear esta infraestructura desde cero y gratuitamente (para menos de 10 usuarios)</div>
<ul>
	<li>Entramos en google apps. Recomiendo entrar en la versión en español www.google.es/apps. Seleccionamos en soluciones la versión gratuita.</li>
	<li>Seleccionamos la opcion gratuita (hasta 10 usuarios más que suficiente para arrancar un proyecto)</li>
	<li>Tenemos el dominio o lo adquirimos directamente ya que google es tambien gestor de dominios (si creemos haberlos comprado pero google nos ofrece comprarlo es que aún está pendiente la compra que puede tardar unas horas en formalizarse)</li>
	<li>Debemos verificar que somos los propietarios, la forma más sencillas es descargar un fichero desde google y subirlo a nuestro nuevo dominio (lo más sencillo es hacerlo mediante el administrador de ficheros hasta que nos hagamos con el panel de control). En este paso me he encontrado con 2 problemas: el primero que google jugaba a cambiarme el nombre de fichero en cada paso lo que me ha obligado a renombrar varias veces el ficheros y segundo que 1&amp;1 no te permite subir ficheros directamente sino que hay que crear una página web previamente a subir los ficheros.</li>
	<li>Otras formas de verificar es mediante una etiqueta en la página web o mediante registro de otros nombres en el dominio.</li>
	<li>Una vez validada la propiedad del dominio pasamos a los siguientes pasos de la configuración. En este caso se trata de añadir los registros MX a nuestro DNS. ¿qué es esto? Pues añadir unos registros DNS que hagan que todo el correo que se envía a nuestro dominio (*@nuestroDominio.Com) sea enviado a los servidores de google para que lo procesen.</li>
	<li>La creación de los usarios, donde podremos crear usuarios, grupos y alias</li>
	<li>Configuración de aplicaciones: gmail, docs, drive, calendar. En este primer paso solo tenemos que decir que las queremos usar. Luego veremos cómo facilitar el acceso a estos servicios creando url más sencillas (del tipo docs.nuestroDominio.com)</li>
</ul>
Y hasta aquí podemos hacer antes de que se propaguen los cambios en los DNS, que no debería de llevar más de 48 horas.

En la próxima entrada veremos como terminar todo el proceso.

Espero los comentarios de usuarios a los que les guste trabajar en la nube

Javacasm
