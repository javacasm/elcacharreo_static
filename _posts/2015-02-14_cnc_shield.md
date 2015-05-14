---
title: CNC shield para Arduino Nano
layout: post
published: false
---

![shield](https://i0.wp.com/img.dxcdn.com/productimages/sku_341412_1.jpg)

Se trata de un shield pensado para controlar 3 motores paso a paso (steppers) admitiendo hasta 6 finales de carrera. Lógicamente el número 3 viene de los 3 ejes (x,y,z) que contiene un cnc básico. 

El controlador es un arduino nano, pequeño compacto, con usb, mágnifico para montajes definitivos por su bajo coste y pequeño tamaño

El driver de motores paso a paso (Stepstick Stepper Driver) que usa es el famoso A4988 (o compatibles), familiarmente conocido como "pololu"

![pololu](http://www.electan.com/images/0J1420.600.jpg)

Su esquema de conexión es el siguiente:

![pololu esquema](https://a.pololu-files.com/picture/0J3360.600.png?d94ef1356fab28463db67ff0619afadf)

Este shield no nos servirá para controlar una impresora 3D, pues normalmente necesitan al menos 4 motores (3 y el extrusor), teniendo que controlar además los distintos elementos calefactores y sensores de temperatura.

### GCode

Existe un lenguaje estándar en las máquinas de control numérico llamado GCode y que permite definir los movimientos y enviar instrucciones a la máquina.

El software para transformar estas órdenes en las distintas acciones sobre los drivers (en general sobre la electrónica) se llama GRBL, por supuesto es totalmente open-source y podemos ver todos los detalles en [github](https://github.com/grbl/grbl), donde hay, código, documentación y ejemplos de GCode.

Podemos descargarlo como una librería arduino desde su github (recuerda cambiar el nombre a la carpeta generada por GBRL), la importamos, compilamos y la programamos nuestro Arduino con ella. (Me ha resultado curioso que dada la estructura de los ficheros podemos generar un ejecutable sólo con los includes). Por defecto la librería viene preparada para funcionar con Arduino UNO, aunque existen plantillas para otros modelos o podemos cambiar nosotros mismos la configuración en __cpu_map.h__.

[Protoneer](http://blog.protoneer.co.nz/arduino-cnc-shield/), uno de los fabricantes/diseñadores del CNC Shield ha creado una versión de GBRL específica para Arduino que podemos encontrar en [su github](https://github.com/Protoneer/GRBL-Arduino-Library) ([un vídeo de ejemplo](https://www.youtube.com/watch?v=QDo-FGbBEpI))



## CNC Shield 

[CNC Shield](http://blog.protoneer.co.nz/arduino-cnc-shield/)
[G-code en arduino](http://blog.protoneer.co.nz/arduino-cnc-controller/)
[G-code en windows](http://blog.protoneer.co.nz/quick-grbl-setup-guide-for-windows-arduino-g-code-interpreter/)

## CNC Shield para Arduino Nano

[GBRL para arduino nano](http://www.instructables.com/id/GRBL-Pinout-Arduino-Nano-v30/ALLSTEPS)

Esquema de conexión del shield para Arduino Nano

![Pinout CNC para nano](http://cdn.instructables.com/FG8/GDCU/I5DSF1YL/FG8GDCUI5DSF1YL.LARGE.jpg)

## Ejemplos de código

Vamos a ver distintos ejemplos de código desde el más sencillo para entender las interioridades de este tema, hasta el más complejo que nos va a dar las máximas prestaciones.

### Código genérico para mover un stepper con un pololu

Se trata de un código en el que se hace todo el movimiento "a mano", es decir sin utilizar ninguna librería sino que se hacen digitalWrite en los pines correspondientes


	// Este código está tomado del tutorial de Ikkaro.com (http://www.ikkaro.com/como-hacer-fresadora-cnc-casera-parte-4/)
	#define VELOCIDAD 1700


	int steps = 13;
	int direccion = 9;
	int reset = 10;
	int pasos = 3500;

	// the setup routine runs once when you press reset:
	void setup() {                
	  // initialize the digital pin as an output.
	  pinMode(steps, OUTPUT); 
	  pinMode(direccion, OUTPUT); 
	  pinMode(reset, OUTPUT);
	}

	// the loop routine runs over and over again forever:
	void loop() {
	  digitalWrite(reset, LOW);    //Mientras reset este en LOW el motor permanecerá apagado y no sufrirá. El chip apagará todos los puertos y no leerá comandos.
	  delay(100);
	  digitalWrite(reset, HIGH);   //Cuando reset se encuentre en HIGH el motor arrancará y leerá los comandos enviados.
	  digitalWrite(direccion, HIGH);
	    

	  for (int i = 0; i<pasos; i++)       //Equivale al numero de vueltas (200 es 360º grados) o micropasos
	  {
	    digitalWrite(steps, HIGH);  // This LOW to HIGH change is what creates the
	    digitalWrite(steps, LOW); // al A4988 de avanzar una vez por cada pulso de energia.  
	    delayMicroseconds(VELOCIDAD);     // Regula la velocidad, cuanto mas bajo mas velocidad.

	  } 
	  
	  digitalWrite(reset, LOW);   //Mientras reset este en LOW el motor permanecerá apagado y no sufrirá. El chip apagará todos los puertos y no leerá comandos.
	  delay(100);
	  digitalWrite(reset, HIGH);   //Cuando reset se encuentre en HIGH el motor arrancará y leerá los comandos enviados.
	  digitalWrite(direccion, LOW);

	  for (int i = 0; i<pasos; i++)       //Equivale al numero de vueltas (200 es 360º grados) o micropasos
	  {
	      
	    digitalWrite(steps, LOW);   // LOW to HIGH hace que el motor avance ya que da la orden
	    digitalWrite(steps, HIGH);    // al A4988 de avanzar una vez por cada pulso de energia.
	    delayMicroseconds(VELOCIDAD);         // Regula la velocidad, cuanto mas bajo mas velocidad.
	  }
	}



### Librería AccelStepper

Es una librería capaz de usar distintos tipos de drivers (pololus, puente en H, transistores,...) y además permite definir tanto la velocidad del movimiento como las aceleraciones, ganando el movimiento en suavidad. Además permite definir un número de pasos para el motor los dé y con solo llamar períodicamente al método run (que actualiza el estado del movimienoto) podemos olvidarnos del manejo del motor.

[documentación](https://www.pjrc.com/teensy/td_libs_AccelStepper.html) [librería](https://www.pjrc.com/teensy/arduino_libraries/AccelStepper-1.30.zip)




#### Ejemplo

	#include <AccelStepper.h>

	// AccelStepper mystepper(AccelStepper::DRIVER, pinStep, pinDirection);
	// A stepper motor controlled by a dedicated driver board.

	AccelStepper stepper1(AccelStepper::DRIVER, 2, 5);
	AccelStepper stepper2(AccelStepper::DRIVER, 3, 6);
	int v1=200.0,a1=100.0,d1=24;
	int v2=300.0,a2=100.0,d2=1000000;
	char buffer[50];
	void setup()
	{
	  Serial.begin(9600);
	  stepper1.setMaxSpeed(v1);
	  stepper1.setAcceleration(a1);
	  stepper1.moveTo(24);
	  sprintf(buffer,"Motor 1 v: %d a: %d d=%d",a1,v1,d1);
	  Serial.println(buffer);
	  
	  stepper2.setMaxSpeed(v2);
	  stepper2.setAcceleration(a2);
	  stepper2.moveTo(d2);
	  sprintf(buffer,"Motor 1 v: %d a: %d d=%d",a2,v2,d2);
	  Serial.println(buffer);

	}

	void loop ()
	{
	    if (stepper1.distanceToGo() == 0)
	      stepper1.moveTo(-stepper1.currentPosition());
	    stepper1.run();
	    stepper2.run();
	    Serial.println("run");
	}


### Enlaces

Se trata de una colección de enlaces a proyectos interesantes

[¿uso?](http://forum.arduino.cc/index.php?topic=87714.525)

[CNC para dibujar](https://sites.google.com/site/0miker0/home)
[cortador/grabado laser](https://arduinoclub.wordpress.com/2014/05/22/arduino-3-axis-mini-lazer-paper-cutter/)
[CNC básico con restos de PC](http://www.instructables.com/id/3-Axis-Arduino-Based-CNC-Controller/?lang=es&ALLSTEPS)

[Tutorial Ikkaro sobre CNC casera](https://www.youtube.com/watch?v=lvaBb-rPepY)

[Paso 1: mecánica](http://www.ikkaro.com/como-hacer-fresadora-cnc-casera/) [Paso 2: electrónica](http://www.ikkaro.com/como-hacer-fresadora-cnc-casera-parte-2/) [Paso 3: Software windows Gcode](http://www.ikkaro.com/como-hacer-fresadora-cnc-casera-parte-3/) [Paso 4: Programa arduino](http://www.ikkaro.com/como-hacer-fresadora-cnc-casera-parte-4/)

[Esquema CNC shield](http://stefanhermann.com/?p=353)

[Guía de ensamblaje de CNC Shield](http://blog.protoneer.co.nz/arduino-cnc-shield-v3-00-assembly-guide/)
[Usando CNC shield](http://forum.arduino.cc/index.php?topic=107322.0)