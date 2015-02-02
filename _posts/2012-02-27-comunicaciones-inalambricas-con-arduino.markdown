--- 
layout: post
status: publish
published: true
title: "Comunicaciones inal\xC3\xA1mbricas con arduino"
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 250
wordpress_url: http://blog.elcacharreo.com/?p=250
date: 2012-02-27 23:46:14 +01:00
categories: 
- arduino
- comunicaciones
tags: 
- arduino
- Comunicaciones
- bluetooth
- wifi
- radio
- zigbee
comments: 
- id: 944
  author: ilion
  author_email: ilion_org@yahoo.es
  author_url: ""
  date: 2012-07-01 21:26:07 +0200
  date_gmt: 2012-07-01 19:26:07 +0200
  content: "Por fin!! Esto es lo que andaba buscando para aclararme con las comunicaciones inal\xC3\xA1mbricas en arduino, muy claro.\r\n\
    gracias por hacernos las cosas un poco m\xC3\xA1s f\xC3\xA1ciles a los que estamos empezando en esto y naufragamos entre tanta informaci\xC3\xB3n, se agradece.\r\n\
    un saludo"
---
Si hay algo necesario para llegar al <a href="http://es.wikipedia.org/wiki/Internet_de_las_Cosas">internet de las cosas</a> (aparte de dar "cierta" inteligencia a las cosas) son las comunicaciones que deben funcionar en cualquier parte y con total facilidad, a ser posible sin cables y sin ninguna configuración.

Cada vez es más sencillo dar "cerebro" a cualquier equipo, son muchas las posibilidades y cada vez se requieren menos conocimientos para hacerlo. Ahí tenemos todo el ecosistema arduino, con decenas de variantes y miles de proyectos de los que aprender.

La parte de las comunicaciones inalámbricas también es cada vez más sencilla, y el número de posibilidades aumenta a un ritmo increíble. Vamos a hacer un rápido repaso de algunas de las distintas posibilidades ordenándolas por complejidad y posibilidades. A medida que vayamos probando y usando los diferentes equipos iremos añadiendo artículos explicando su uso y ventajas.

Podemos decir que las tecnologías se pueden clasificar en 2 grandes grupos: las que dan capacidades de comunicaciones por red (como pueden ser wifi o zigbee) o las que emulan una comunicaciones serie pero vía radio:
<ul>
	<li>Emulación de comunicaciones serie via radio</li>
<ul>
	<li>Módulos de radio: muy sencillos de usar y con un alcanza de decenas de metros</li>
	<li>rfm12b <a href="http://jeelabs.net/projects/hardware/wiki/RFM12B_Board">http://jeelabs.net/projects/hardware/wiki/RFM12B_Board</a></li>
	<li>bluetooth</li>
	<li><a href="http://iteadstudio.com/store/index.php?main_page=product_info&amp;products_id=53">nRF24L01</a> con <a href="http://www.mdfly.com/index.php?main_page=product_info&amp;cPath=1_22&amp;products_id=880&amp;zenid=h1ati35k1d2jrn8vov9h3qap72">ejemplo</a> un precio muy bajo (6€)</li>
</ul>
	<li>Comunicaciones por redes</li>
<ul>
	<li>zigduino</li>
	<li>zigbee</li>
	<li>wiffly</li>
</ul>
</ul>
Próximamente iremos probando algunos de las diferentes comunicaciones.

Javacasm
