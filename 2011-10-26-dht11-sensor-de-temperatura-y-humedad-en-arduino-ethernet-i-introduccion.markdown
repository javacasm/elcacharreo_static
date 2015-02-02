--- 
layout: post
status: publish
published: true
title: "DHT11 (sensor de temperatura y humedad) en arduino ethernet I: introducci\xC3\xB3n"
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
wordpress_id: 162
wordpress_url: http://blog.elcacharreo.com/?p=162
date: 2011-10-26 22:44:15 +02:00
categories: 
- arduino
tags: 
- arduino
- sd
- ethernet
- dht11
- temperatura
- sensor
comments: 
- id: 91
  author: e-interiores &raquo; Blog Archive &raquo; Arduino como servidor web
  author_email: ""
  author_url: http://e-interiores.aprendizdetodo.es/2009/01/20/arduino-como-servidor-web/
  date: 2011-11-01 00:33:21 +0100
  date_gmt: 2011-11-01 00:33:21 +0100
  content: "[...] 1-11-2011: En el cacharreo se han montado una serie sobre este tema y promete ser muy [...]"
---
Ha llegado a mis manos un <a href="http://arduino.cc/en/Main/ArduinoBoardEthernet">arduino ethernet</a>, placa de nuevo diseño que incluye todo el hardware para conectarse a una red ethernet además de una ranura miniSD que nos permite guardar todo tipo de información.

Esta placa es perfecta, y casi completa para confeccionar un datalogger básico. En mi opinión sólo le falta un reloj de tiempo real (RTC) para tener el datalogger.

[caption id="" align="alignleft" width="148"]<a href="http://arduino-info.wikispaces.com/DHT11-Humidity-TempSensor"><img style="margin: 10px;" src="http://arduino-info.wikispaces.com/file/view/DHT11-HumidityTempVSG.jpg" alt="dht11" width="148" height="173" /></a> Imagen cortesía de arduino-info de wikispaces[/caption]

Vamos a explicar en esta serie de posts como utilizarla en un proyecto sencillo: un datalogger que nos permitirá  guardar en una tarjeta sd y enviar por ethernet datos provenientes de sensores, En concreto utilizaremos  varios  sensores dht11 de humedad y temperatura.

Este económico sensor (1.5-2$ en <a href="http://www.ebay.es/sch/i.html?_trkparms=65%253A12%257C66%253A2%257C39%253A1%257C72%253A1229&amp;rt=nc&amp;_nkw=dht11&amp;_trksid=p3286.c0.m14&amp;_sop=15&amp;_sc=1" target="_blank">ebay</a>) nos proporciona datos de baja precisión (2ºC y 5% de humedad) pero suficiente para proyectos modestos como el nuestro. Si necesitamos mayor precisión podemos recurrir a su hermano mayor DHT22 o a otra familia de sensores como los DS18x20 de Maxim.

El conexionado del sensor no puede ser más simple, basta con conectar la primera patilla del sensor a 5V, la cuarta a tierra y la segunda a un pin digital de nuestro arduino.

El sensor usa un protocolo de comunicación de único hilo (que modulando el estado de su patilla a lo largo del tiempo y de una forma similar a un pwm) nos permite leer los valores de temperatura y humedad.

En el <a href="http://blog.elcacharreo.com/2011/10/27/dht11-en-arduino-ethernet-2-preparando-el-entorno/">siguiente artículo</a> de la serie veremos como preparar el entorno arduino para leer datos de los sensores desde una placa arduino ethernet.

&nbsp;

Javacasm
