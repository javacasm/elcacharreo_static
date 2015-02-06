--- 
layout: post
status: publish
published: true
title: "Refactorizando c\xC3\xB3digo Arduino"
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 4025
wordpress_url: http://blog.elcacharreo.com/?p=4025
date: 2014-10-29 22:54:51 +01:00
categories: 
- arduino
tags: 
- arduino
- codigo
- "refactorizaci\xC3\xB3n"
comments: []

---
<a href="/images/uploads/2013/10/Configuración-Sprinter.png"><img class="alignleft wp-image-916 size-medium" src="/images/uploads/2013/10/Configuración-Sprinter-250x300.png" alt="Configuración Sprinter" width="250" height="300" /></a>Si hay algo bueno de impartir cursos es la posibilidad de aprender con todo lo que hacen los alumnos. Hoy en el curso Avanzado de Arduino hemos estado viendo como optimizar y refactorizar código arduino.

Vamos a ver el ejemplo que no es otro que el código que permite hacer que un led se encienda o apague al plusar un pulsador. La parte que nos interesa es esta, donde se hace el enclavamiento, usando una variable Estado_Led que guarda el valor de este.

<pre>if (Estado_Led==0) // Y el Led esta apagado...
{
     digitalWrite(Pin_Led,HIGH); //Encendemos el Led
     Estado_Led=1; //Ponemos un 1 a la variable del Led conforme está encendido
     delay(tiempo); //Tiempo prudencial para evitar falsos contactos o lectoras del pulsador
}
else // Y el Led esta encendido...
{
     digitalWrite(Pin_Led,LOW); //Apagamos el Led
     Estado_Led=0; //Ponemos un 0 a la variable Led conforme esta apagado
     delay(tiempo); //Tiempo prudencial para evitar falsos contactos o lectoras del pulsador
}</pre>

&nbsp;

Tanto en el código del  if como en el del else hacemos lo mismo. Voy a cambiarlo lévemente (o por LOW y 1 por HIGH

<pre>if (Estado_Led==LOW) // Y el Led esta apagado...
{
      Estado_Led=HIGH; //Ponemos un 1 a la variable del Led conforme está encendido
      digitalWrite(Pin_Led,HIGH); //Encendemos el Led
}
else // Y el Led esta encendido...
{
      Estado_Led=LOW; //Ponemos un 0 a la variable Led conforme esta apagado
      digitalWrite(Pin_Led,LOW); //Apagamos el Led
}
// Se hace delay en los 2 casos y lo sacamos fuera
delay(tiempo); //Tiempo prudencial para evitar falsos contactos o lectoras del pulsador
</pre>

Si ahora nos fijamos loo que estamos haciendo es un digitalWrite del nuevo valor de Estado_Led, con lo que podemos sacar el digital write porque también es común.
Quedaría así:

<pre>if (Estado_Led==LOW) // Y el Led esta apagado...
{    Estado_Led=HIGH; }
else // Y el Led esta encendido...
{    Estado_Led=LOW;  }
digitalWrite(Pin_Led,Estado_Led); //Apagamos el Led
delay(tiempo); //Tiempo prudencial para evitar falsos contactos o lectoras del pulsador
</pre>

Todavía se puede reducir más pues aplicando las léyes de la lógica booleana lo que estamos haciendo es invertir el valor de Estado_Led y eso se hace con el operador !
Lo dejamos así

<pre>Estado_Led=!Estado_Led;
digitalWrite(Pin_Led,Estado_Led); //Apagamos el Led
delay(tiempo); //Tiempo prudencial para evitar falsos contactos o lectoras del pulsador
</pre>

JAVACASM
