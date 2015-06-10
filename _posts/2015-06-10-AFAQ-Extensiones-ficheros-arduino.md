---
title: Extensiones-ficheros-arduino
layout: post
published: false
---


Hola Vicky, aunque los entornos de Processing y Arduino se parezcan, a nivel de lenguaje la diferencia es grande:

* Arduino permite lenguaje C++ ( y por tanto C que es una parte de C++), y por tanto podemos usar ficheros de cabeceras (o de declaración) o de código (.h y .c o  .hpp y .cpp según usemos C o C++). 

* Processing utiliza lenguaje Java donde sólo se permiten ficheros de tipo .java

* Si en el IDE de Arduino creamos un fichero con una extensión de las 4 posibles el compilador hará lo que dicte el lenguaje, es decir usar el compilador de C o C++ según el tipo.

* Si en el IDE de Arduino creamos un fichero sin extensión (se nombrará con extensión .ino), antes de llegar a compilar el fichero se le añadirán automáticamente algunos ficheros (depende de la versión de IDE) como por ejemplo Arduino.h

* Ventajas de usar ficheros "clásicos" de C o C++: se consigue optimizar más el tamaño y utilizar el comportamiento natural (si es que se puede decir así) del compilador.

* Ventajas de usar ficheros .ino: el uso es más sencillo y no nos tenemos que preocupar de incluir los includes "normales"

* Existen algunos casos en los que es necesario usar ficheros .hpp y .cpp (de tipo C++) y es para crear librerías

Por ser práctico: salvo que sepamos que queremos usar alguna propiedad de C o C++ o queramos hacer librerías es más sencillos usar ficheros sin extensión.

Espero haber aclarado algo.
Saludos