---
title: Neopixel-ring
layout: post
published: false
---
2015-07-13-.md

## Introducción

### ¿Qué es NeoPixel?

Se trata de unos leds "inteligente" RGB a los que podemos programar cualquier color  y nivel de brillo y con los que es muy sencillo comunicarse, tanto en las conexiones como en la programación

El nombre comercial es propiedad de Adafruit que también creó la librería que hoy en día es el estándar. Existen varios fabricantes, lo que ha hecho que hoy en día sean muy económicos.

## Proyectos

[Linterna RGB](http://makezine.com/projects/million-color-hsl-flashlight/)

Un de los mejore usos que le he visto es para montar un Reactor como el que usa IronMan

[Un instructable](http://www.instructables.com/id/Make-an-Iron-Man-Arc-Reactor/) explicando cómo usarlo

![imagen](http://cdn.instructables.com/FGS/41HU/FN82NVPE/FGS41HUFN82NVPE.MEDIUM.jpg)
El aspecto está muy logrado..

También tenemos

Otra versión del [reactor de IronMan](http://chrisbarrbuilds.com/2015/02/3d-printed-arc-reactor/)

![jpg](http://chrisbarrbuilds.com/wp-content/uploads/2015/02/2014-07-07-19.58.03.jpg)

Esta versión una un anillo de 24 y un neopixel central. También ha compartido las [piezas 3D](http://www.thingiverse.com/thing:386926/#instructions) para hacerlo todavía más realista.

Este es el código que usa

	//Basic demo sketch showing a few basic 'Arc Reactor Appropriate' animations
	//Chris Barr, 2015

	#include <Adafruit_NeoPixel.h>

	#define PIN 3
	#define NUM_PIXELS 16

	int mode = 1; //change this number to see different effects
	int num_modes = 3;
	boolean automatically_change_mode = true; //disable this to lock to the one effect
	unsigned long last_changed_mode_time = 0;
	unsigned long effect_duration = 10000; //when changing automatically, each effect lasts for minimum 10s

	int brightness = 200;
	int mean_brightness = 200;
	int flicker_range = 4;
	int spin_rate = 50;
	int fade_rate = 5;

	Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_PIXELS, PIN, NEO_GRB + NEO_KHZ800);

	uint32_t c_blue = strip.Color(10,10,255);

	void setup() {
	 strip.begin();
	 strip.show(); // Initialize all pixels to 'off'
	}

	void loop() {
	 
	 if(mode==1)
	 {
	 //sets all NeoPixels to be blue
	 setAll(c_blue);
	 strip.show();
	 }
	 else if(mode==2)
	 {
	 //sets all NeoPixels to be blue with flicker
	 brightness += random(flicker_range)-round(flicker_range/2);
	 brightness = constrain(brightness, min(mean_brightness + flicker_range*5, 255), max(mean_brightness - flicker_range*5,0));
	 setAll(strip.Color(10, 10, brightness));
	 strip.show();
	 }
	 else if(mode==3)
	 {
	 //swirls around outer ring
	 for(int i = 0; i < 24; i ++)
	 {
	 //fade change
	 for(int j = 0; j < 50; j++)
	 {
	 //set previous pixel back to being dim
	 if(i>0)
	 strip.setPixelColor(i-1,strip.Color(10,10,200-j));
	 else
	 strip.setPixelColor(24,strip.Color(10,10,200-j));
	 //set current pixel to be brighter
	 strip.setPixelColor(i,strip.Color(10,10,150+j));
	 
	 //set center pixel to constant colour
	 strip.setPixelColor(25,c_blue);
	 
	 //update changes
	 strip.show();
	 
	 //wait before repeating
	 delay(fade_rate);
	 }
	 delay(spin_rate);
	 }
	 
	 }
	 
	 if(automatically_change_mode)
	 {
	 if(millis()-last_changed_mode_time > effect_duration)
	 {
	 last_changed_mode_time = millis();
	 mode++;
	 if(mode>num_modes)
	 mode = 1;
	 }
	 }
	 
	}

	void setAll(uint32_t color)
	{
	 for(int i = 0; i < NUM_PIXELS; i++)
	 {
	 strip.setPixelColor(i,color);
	 }
	}

Otro montaje, quizás menos espectacular, puede ser este [monitor cardiaco](http://arduinobasics.blogspot.com.au/2015/07/neopixel-heart-beat-display.html)

![monitor cardiaco](http://1.bp.blogspot.com/-MsoLBwbgry0/Vafrit-uMNI/AAAAAAAABnY/6KkZb2gKOIQ/s400/Neopixel%2BHeart%2BBeat%2BDisplay%2BTitle%2Bimage.jpg)

## Montaje

Nada más simple: alimentación, tierra y el cable de señal

## Uso



	Descargamos la librería
	Y usamos los ejemplos.
