---
title: Alimentación y datos de la estación meteorológica
layout: post
published: false
---



El siguiente paso de nuestra estación meteorológica ** ENLACE ** es comenzar a probar su funcionamiento real en el exterior. Aquí aparecen 2 dudas: la primera es cómo alimentarla y la seguna cómo comunicarnos con ella.

Vamos a empezar con la segunda que ya la tenemos más avanzada porque ya hablamos de ella en **  ENLACE ** otro post: la respuesta es la telemetría. La solución más sencilla es usar comunicación radio. 

el problema lo hemos tenido con el software de arduino que 8 horas después consumía 5gb de RAM!!!



### Cargador potente

Podemos ver un [proyecto](https://learn.sparkfun.com/tutorials/weather-station-wirelessly-connected-to-wunderground/electronics) que lo usa.

Tiene varios componentes:

[Cargador solar sunny-buddy](http://www.electan.com/sunny-buddy-mppt-solar-charger-p-5981.html) Se trata de un cargador avanzado capaz de exprimir cada rayo de sol. Utiliza voltajes de entrada entre 6 y 20v y es capaz de cargar con una corriente máxima de 450mA. La intensidad máxima también depende de la cantidad de sol que recibe el panel y de la inclinación con la que llega al panel.

[Batería LiPo de 6000mAh](https://www.sparkfun.com/products/8484?_ga=1.128837322.798400039.1418704562) A mayor capacidad mayor cantidad de tiempo que puede funcionar el sistema sin sol. Existen [muchos tipos](https://www.sparkfun.com/categories/54) con distintas capacidades.

[Célula solar de 2.5W](https://www.sparkfun.com/products/7840?_ga=1.128920266.798400039.1418704562) A mayor potencia, más rápido vamos a poder cargar la batería.

