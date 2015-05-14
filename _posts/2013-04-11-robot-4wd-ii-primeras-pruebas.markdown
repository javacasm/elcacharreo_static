--- 
layout: post
status: publish
published: true
title: "Robot 4WD II: primeras pruebas"
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
excerpt: "La placa de manejo de motores que vamos a usar est\xC3\xA1 basada en el chip\xC2\xA0<a href=\"http://www.st.com/web/catalog/sense_power/FM142/CL851/SC1790/SS1555/PF63147\">L298</a>\xC2\xA0que es un puente en H capaz de manejar 2 motores.\r\n\
  \r\n\
  Las <a href=\"http://www.instructables.com/id/DIY-Arduino-Motor-Shield-L298N-Chip-2-4-Amps-/\">placas basadas en este chip</a>\xC2\xA0suelen tener capacidad para controlar 2 motores normales o un paso a paso de 4 entradas y suelen manejarse del siguiente modo:\r\n\
  <ul>\r\n\
  \t<li>Se usan 2 pines para controlar la direccion de giro de cada motor. Un pin establece la polaridad de cada uno de los \xC2\xA0hilos de cada motor, as\xC3\xAD si ponemos uno a 1 y el 0 a 0 tendremos que la corriente va de positivo al otro girando en un sentido. Para hacer el giro en sentido contrario cambiaremos los estados. Si activamos las 2 entradas a 0 el motor estar\xC3\xA1 en estado libre y si ponemos las 2 a 1 estar\xC3\xA1 bloqueado</li>\r\n\
  \t<li>Un pin activa las salidas para cada motor, conectando este pin a una salida PWM conseguiremos modular la \"intensidad\" de la salida dando la sensaci\xC3\xB3n de velocidad</li>\r\n\
  </ul>\r\n\
  <div>En resumen necesitamos 6 pines: 4 para controlar la direcci\xC3\xB3n y 2 para controlar la velocidad.</div>\r\n"
wordpress_id: 693
wordpress_url: http://blog.elcacharreo.com/?p=693
date: 2013-04-11 20:35:06 +02:00
categories: 
- arduino
- electronica
tags: 
- robot
- 4wd
- l298
comments: []

---
La placa de manejo de motores que vamos a usar está basada en el chip <a href="http://www.st.com/web/catalog/sense_power/FM142/CL851/SC1790/SS1555/PF63147">L298</a> que es un puente en H capaz de manejar 2 motores.

Las <a href="http://www.instructables.com/id/DIY-Arduino-Motor-Shield-L298N-Chip-2-4-Amps-/">placas basadas en este chip</a> suelen tener capacidad para controlar 2 motores normales o un paso a paso de 4 entradas y suelen manejarse del siguiente modo:
<ul>
	<li>Se usan 2 pines para controlar la direccion de giro de cada motor. Un pin establece la polaridad de cada uno de los  hilos de cada motor, así si ponemos uno a 1 y el 0 a 0 tendremos que la corriente va de positivo al otro girando en un sentido. Para hacer el giro en sentido contrario cambiaremos los estados. Si activamos las 2 entradas a 0 el motor estará en estado libre y si ponemos las 2 a 1 estará bloqueado</li>
	<li>Un pin activa las salidas para cada motor, conectando este pin a una salida PWM conseguiremos modular la "intensidad" de la salida dando la sensación de velocidad</li>
</ul>
<div>En resumen necesitamos 6 pines: 4 para controlar la dirección y 2 para controlar la velocidad.</div>
<a id="more"></a><a id="more-693"></a>
Veamos las conexiones:
<pre>//Test the L298N motor driver shield – Arduino UNO

// motor A
int dir1PinA = 13;
int dir2PinA = 12;
int speedPinA = 11;

//motor B
int dir1PinB = 10;
int dir2PinB = 8;
int speedPinB = 9;</pre>
En las imágenes se puede ver el conexionado utilizando el cable que viene en el kit con el que conectamos la placa de sensores conectada a la placa de arduino con el driver de motores
<a href="http://blog.elcacharreo.com/wp-content/uploads/2013/03/20130215_000952_peque.jpg"><img class="alignleft  wp-image-690" title="20130215_000952_peque" src="http://blog.elcacharreo.com/wp-content/uploads/2013/03/20130215_000952_peque-150x150.jpg" alt="" width="300" /></a>

<a href="http://blog.elcacharreo.com/wp-content/uploads/2013/03/20130215_000843_peque.jpg"><img class=" wp-image-691 alignright" title="20130215_000843_peque" src="http://blog.elcacharreo.com/wp-content/uploads/2013/03/20130215_000843_peque-150x150.jpg" alt="" width="300" /></a>

Para esta primera prueba he hecho un programa sencillo, pero que ya está preparado para futuras funcionalidades.
<pre>

//Test the L298N motor driver shield – Arduino UNO

int dir1PinA = 13;
int dir2PinA = 12;
int speedPinA = 11;

//motor B
int dir1PinB = 10;
int dir2PinB = 8;
int speedPinB = 9;

#define FORWARD 'f'
#define BACKWARD 'b'
#define FREE 'F'
#define BLOCK 'B'

#define velocidadMaxima 255
#define velocidadStop 0
#define velocidadMedia 200

void setup()
{
pinMode(dir1PinA,OUTPUT); // Dir 1 Motor A
pinMode(dir2PinA,OUTPUT); // Dir 1 Motor A
pinMode(speedPinA,OUTPUT); // In arduino UNO it has to be a PMW pin (3, 5, 6, 9, 10, and 11)
pinMode(dir1PinB,OUTPUT); // Dir 1 Motor A
pinMode(dir2PinB,OUTPUT); // Dir 1 Motor A
pinMode(speedPinB,OUTPUT); // In arduino UNO it has to be a PMW pin (3, 5, 6, 9, 10, and 11)

Serial.begin(9600); // To begin to comunincate with the serial port

}

int potencias[]={255,200,150,100,50,0};

void controlMotor(char command,int pinDir1,int pinDir2,int pinSpeed,int Speed)
{

  Serial.print(command);
  Serial.print("[");
  Serial.print(pinDir1);
  Serial.print(",");
  Serial.print(pinDir2);
  Serial.print("]");
  switch(command)
  {
    case FORWARD:
    {
      digitalWrite(pinDir1,HIGH);
      digitalWrite(pinDir2,LOW);
    }
    break;
    case BACKWARD:
    {
      digitalWrite(pinDir1,LOW);
      digitalWrite(pinDir2,HIGH);
    }
    break;
    case FREE:
    {
      digitalWrite(pinDir1,LOW);
      digitalWrite(pinDir2,LOW);
    }
    break;
    case BLOCK:
      digitalWrite(pinDir1,HIGH);
      digitalWrite(pinDir2,HIGH);
    break;
  }

  analogWrite(pinSpeed,Speed);

  Serial.print(":");
  Serial.println(Speed);

}

void loop()
{

  // Vamos hacia adelante
  controlMotor(FORWARD,dir1PinA,dir2PinA,speedPinA,velocidadMedia);
  controlMotor(FORWARD,dir1PinB,dir2PinB,speedPinB,velocidadMedia);

  delay(1000);

  // giramos en el sitio
  controlMotor(FORWARD,dir1PinA,dir2PinA,speedPinA,velocidadMaxima);
  controlMotor(BACKWARD,dir1PinB,dir2PinB,speedPinB,velocidadMaxima);

  delay(5000);

  // Volvemos hacia atras
  controlMotor(BACKWARD,dir1PinA,dir2PinA,speedPinA,velocidadMedia);
  controlMotor(BACKWARD,dir1PinB,dir2PinB,speedPinB,velocidadMedia);

  delay(1000);

}</pre>

Os dejo un vídeo de sus primeros pasos

<iframe width="420" height="315" src="http://www.youtube.com/embed/UmHEgxzTnAc" frameborder="0" allowfullscreen></iframe>
