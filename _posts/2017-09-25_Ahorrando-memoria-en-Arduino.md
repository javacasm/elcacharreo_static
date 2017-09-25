---
title: Ahorrando-memoria-en-Arduino
layout: post
published: false
---
2017-09-25_Ahorrando-memoria-en-Arduino.md


El tema que me preguntas es muy interesante. Voy a preparar un vídeo sobre el tema. Pero por adelantarte algo, mira a ver las constantes de tipo "texto" que usas. Yo he conseguido rebajar un 20% el tamaño haciendo que se guarden de forma diferente: En lugar de hacer  Serial.print("Hola Mundo"), haz Serial.print(F("Hola Mundo")). De esta manera se almacena en la  FLASH (memoria donde se guardan los programas), no en la RAM https://www.arduino.cc/en/Reference/PROGMEM

|Descripción|Espacio programa|Globales|	Locales	|
|---|---|---|---
|Vacío|	444 (1%)|	9	(0%)|	2039
|Servo|	888 (2%)|	46	(2%)|	2002
|Ethernet|	1072(3%)|	71	(3%)|	1977
|Ethernet y Servo|	1494	(4%)|	108	(5%)|	1940
|Todo F|	10602	(32%)|	511	(24%)|	1537
|Nada F|	10518	(32%)|	671	(32%)|	1377
|Prog Complejo|	11890	(36%)|	1432	(69%)|	616
|Maximo|	32256|||2048

      client.println("HTTP/1.1 200 OK");
      client.println("Content-Type: text/html");
      client.println("Connection: close");  // the connection will be closed after completion of the response
      client.println("Refresh: 5");  // refresh the page automatically every 5 sec
      client.println();
      client.println("<!DOCTYPE HTML>");
      client.println("<html>");
      // output the value of each analog input pin
      for (int analogChannel = 0; analogChannel < 6; analogChannel++) {
        int sensorReading = analogRead(analogChannel);
        client.print("analog input ");
        client.print(analogChannel);
        client.print(" is ");
        client.print(sensorReading);
        client.println("<br />");
      }
      client.println("</html>");

Pasa a


    client.println(F("HTTP/1.1 200 OK"));
    client.println(F("Content-Type: text/html"));
    client.println(F("Connection: close"));  // the connection will be closed after completion of the response
    client.println(F("Refresh: 5"));  // refresh the page automatically every 5 sec
    client.println();
    client.println(F("<!DOCTYPE HTML>"));
    client.println(F("<html>"));
    // output the value of each analog input pin
    for (int analogChannel = 0; analogChannel < 6; analogChannel++) {
      int sensorReading = analogRead(analogChannel);
      client.print(F("analog input "));
      client.print(analogChannel);
      client.print(F(" is "));
      client.print(sensorReading);
      client.println(F("<br />"));
    }
    client.println(F("</html>"));



[La memoria de Arduino](https://aprendiendoarduino.wordpress.com/2016/11/08/memoria-arduino/)
