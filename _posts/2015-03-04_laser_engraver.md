	---
title: CNC Grabador laser
layout: post
published: false
---

![cnc laser engraver](http://g02.a.alicdn.com/kf/HTB1CsZlGVXXXXaMXFXXq6xXFXXXi/222118304/HTB1CsZlGVXXXXaMXFXXq6xXFXXXi.jpg)

He visto que hay hasta lasers de 2000mw. Ya se habló del tema en otro hilo por aquí sobre otra grabadora. Parece que los láseres violeta pueden grabar hasta metales. A ver si busco el enlace.
[Mejora]Convierte tu impresora en una cortadora laser

Un análisis rápido:
Perfiles de aluminio de doble altura (¿T-slot?)
2 motores nema 17, uno por eje con transmisión por correas y un eje que traslada a los 2 lados del eje y
Las piezas que unen los perfiles son de metracrilato de ¿10mm? No parecen complejas de diseñar
Un arduino nano y un shield CNC con 2 drivers para los motores y otro para el laser (¿sirve el laserlolu?)


Grabador laser basado en perfiles de aluminio (T-slot)

[aliexpress](http://es.aliexpress.com/item/300mw-Blue-Violet-Laser-Engraving-Machine-Mini-DIY-Laser-Engraver-IC-Marking-Printer-Carving-Size-17/32257315377.html)

[banggood](http://www.banggood.com/es/300mW-Desktop-DIY-Violet-Laser-Engraving-Machine-Picture-CNC-Printer-p-958365.html?utm_design=13&utm_source=emarsys&utm_medium=spain86_email&utm_campaign=newsletter-emarsys&utm_content=Claire&sc_src=email_1281195&sc_eh=b6345b9e09989cbb1&emst=c2PSWFBTgu_56530_1281195_102)

[perfiles](http://www.thingiverse.com/search/page:3?q=profile&sa=)

[Especial láseres de Instructables](http://www.instructables.com/id/Burning-Lasers/)

Otros diseños
[MrBean](http://www.mr-beam.org/)

[lazerblade](http://www.darklylabs.com/)
[campaña lazerblade](https://www.kickstarter.com/projects/1537608281/lazerblade-the-affordable-laser-cutter-engraver)

Mira este diseño, es el que me dio la idea
http://www.banggood.com/300mW-Desktop-DIY-Violet-Laser-Engraving-Machine-Picture-CNC-Printer-p-958365.html
Me baso como tu en la base de una i3 con los siguientes cambios:
* Dos correas por fuera de la extructura  para maximizar el área de trabajo
* Usar un eje que va de lado a lado con 2 poleas, una para cada correa, y un solo motor que acciona el eje. Puede estar casi a la mista altura que la estructura del puente
* Puedes bajar el puente porque ya no necesitas esa altura, con lo que puedes enfocar igual

A ver si me busco un fichero freecad de la base de la i3 y lo modifico con mis ideas
Gracias por tus comentarios.

[diyoupcb](http://www.diyouware.com/es/gallery?page=2)

### Varios modelos a partir de dvd e impresoras
[instructable](http://www.instructables.com/id/Laser-engraving-machine-Producing-Laser-Engraving-/)

[modelo big](http://www.instructables.com/id/3W-4x4-Arduino-Laser-CutterEngraver/?ALLSTEPS)

### Modelo comprado

![a](http://gloimg.gearbest.com/gb/pdm-product-pic/Electronic/2016/05/31/goods-img/1464803282718111875.jpg)

[2500mW lasser engraver](http://www.gearbest.com/3d-printers-3d-printer-kits/pp_364360.html)

It can engrave materials: Wood, bamboo, plastic, paper, leather, rubber .
This machine can cut paper, felt, fabric, 1-2mm balsa (1.6W or more, and low efficiency)

![kit](http://gloimg.gearbest.com/gb/pdm-product-pic/Electronic/2016/05/31/source-img/20160531103823_63430.jpg)

### Drivers

[laser driver](http://www.instructables.com/id/DIY-Laser-Diode-Driver-Constant-Current-Source/?utm_content=bufferb6c56&utm_medium=social&utm_source=facebook.com&utm_campaign=buffer)

### Referencias

[Consideraciones a tener en cuenta para laser cutting](http://makezine.com/2016/09/29/5-important-things-consider-laser-cutting/)
