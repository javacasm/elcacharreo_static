--- 
layout: post
status: publish
published: true
title: "DHT11 en arduino ethernet 4: Por fin internet (http)"
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
excerpt: "Modificando el ejemplo WebServer que viene con arduino es muy sencillo hacer que los datos de nuestros sensores est\xC3\xA9n disponibles a traves de internet. En la modificaci\xC3\xB3n que hemos hecho simplemente medimos y almacenamos los valores de nuestros sensores. En caso de que haya una conexion http devolvemos una p\xC3\xA1gina muy simple con los \xC3\xBAltimos valores que hemos recuperado.\r\n\
  \r\n\
  Pod\xC3\xA9is ver los datos actuales sin m\xC3\xA1s que conectar con mi <a href=\"http://javacasm.is-a-geek.org:666\">arduino-servidor</a> (no puedo asegurar que est\xC3\xA9 activo en este momento).\r\n\
  \r\n"
wordpress_id: 170
wordpress_url: http://blog.elcacharreo.com/?p=170
date: 2011-10-30 23:58:52 +01:00
categories: 
- arduino
tags: 
- arduino
- ethernet
- dht11
- internet
- http
comments: 
- id: 105
  author: Francisco Javier Torres Ponce
  author_email: frandecai@yahoo.es
  author_url: ""
  date: 2011-11-07 16:34:38 +0100
  date_gmt: 2011-11-07 16:34:38 +0100
  content: "Hola,\r\n\
    Ando liado con un proyecto por el estilo, en el que adem\xC3\xA1s Arduino mandar\xC3\xA1 un SMS usando un MODEM SIEMENS TC35 cuando la temperatura suba de un valor fijado. Pero la cuesti\xC3\xB3n va por el servidor web, \xC2\xBFsabr\xC3\xADas de alguna librer\xC3\xADa para Arduino en el que generase un fichero de imagen (da igual el formato) para cargarla en la web a modo de historial de temperaturas?\r\n\
    \r\n\
    Gracias"
- id: 106
  author: javacasm
  author_email: javacasm@elcacharreo.com
  author_url: ""
  date: 2011-11-07 23:24:41 +0100
  date_gmt: 2011-11-07 23:24:41 +0100
  content: "Me encanta que hagas esa pregunta, de hecho estaba previsto explicarlo en una pr\xC3\xB3xima entrega, pero te adelanto algo que supongo que te bastar\xC3\xA1 para arrancar.\r\n\
    Dudo mucho que arduino tenga suficiente capacidad para generar los gr\xC3\xA1ficos (la mayor\xC3\xADa de los formatos necesita compresi\xC3\xB3n y por tanto c\xC3\xA1lculo pesado). \r\n\
    En cambio si que podemos usar <a href=\"http://code.google.com/intl/es-ES/apis/chart/\" rel=\"nofollow\">google char api</a> que nos permite de forma sencilla y a partir de los propios datos generar una url que tiene todo lo necesario para generar la imagen. Te paso un ejemplo de un <a href=\"http://www.adictosaltrabajo.com/tutoriales/tutoriales.php?pagina=googleChart\" rel=\"nofollow\">tutorial de adictos al trabajo</a>\r\n\
    \r\n\
    http://chart.apis.google.com/chart?chs=250x100&chd=t:12.5,76.5,44.0&chds=-20,80&cht=lc&chl=A|B|C \r\n\
    \r\n\
    <img src=\"http://chart.apis.google.com/chart?chs=250x100&chd=t:12.5,76.5,44.0&chds=-20,80&cht=lc&chl=A|B|C\" />\r\n\
    \r\n\
    Por cierto, espero un enlace cuando tengas tu trabajo listo ;)"
- id: 377
  author: pavel
  author_email: pavel_2003@hotmail.com
  author_url: ""
  date: 2012-03-03 03:09:35 +0100
  date_gmt: 2012-03-03 02:09:35 +0100
  content: |-
    Hola, y como yo puedo hacer que los datos viejos y nuevo que lea el sensor se quede grabado en el webserver..
    
    por ejemplo
    temp1=35 &gt;&gt;&gt;1era medida
    temp2=40&gt;&gt;&gt; 2da medida
    
    y que no se borren las otra se vallan quedando como logro eso???
- id: 382
  author: javacasm
  author_email: javacasm@elcacharreo.com
  author_url: ""
  date: 2012-03-07 00:54:58 +0100
  date_gmt: 2012-03-06 23:54:58 +0100
  content: "Lo \xC3\xBAnico que necesitas el almacenar los valores en un array de (int valores[100]) y llevar la cuenta del n\xC3\xBAmero de valores que llevas y mostrar todos los hist\xC3\xB3ricos cuando tengas m\xC3\xA1s de del tama\xC3\xB1o de tu array (100 en el ejemplo) vas borrando los m\xC3\xA1s antiguos.\r\n\
    Suerte con la idea."
- id: 1564
  author: Luis
  author_email: lhpena@hotmail.com
  author_url: ""
  date: 2012-10-05 01:48:37 +0200
  date_gmt: 2012-10-04 23:48:37 +0200
  content: Oye cuando pongo tu codigo en mi arduino 1.0.1 (Windows) me da muchos errores porque sera?
- id: 1570
  author: javacasm
  author_email: javacasm@elcacharreo.com
  author_url: ""
  date: 2012-10-06 00:39:23 +0200
  date_gmt: 2012-10-05 22:39:23 +0200
  content: "Copia aqu\xC3\xAD los errores y vemos c\xC3\xB3mo resolverlos.\n\n\
    Saludos"
- id: 2078
  author: amelgosa
  author_email: amelgosa74@gmail.com
  author_url: ""
  date: 2012-11-02 19:59:20 +0100
  date_gmt: 2012-11-02 18:59:20 +0100
  content: |-
    Hola. He visto tu proyecto y la verdad que me resulta muy interesante.
    Te explico un tema. Tengo una idea de proyecto de hace tiempo, pero como no he tocado nunca arduino, y no tengo mucha idea de electronica, voy con miedo de como llevarlo a cabo.
    La idea es sustituir el termostato de la calefaccion de casa, por un circuito que se conecta a la caldera por cable, y a internet via "wifi".
    El tema es poder ver la temperatura desde un movil, y poder encender o apagar la calefaccion a gusto.
    He estado mirando, y todo lo que encuentro de utilidad es con ethernet, y necesitaria poder montarlo con wifi y no se si las librerias funcionan igual o son diferentes.
    Tambien he estado valorando con la placa openpicus, pero me lio a la hora de elegir sensores y eso (por desconocimiento).
    
    Agradeceria tus comentarios y ayuda.
    
    Un saludo.
- id: 2124
  author: javacasm
  author_email: javacasm@elcacharreo.com
  author_url: ""
  date: 2012-11-05 00:08:40 +0100
  date_gmt: 2012-11-04 23:08:40 +0100
  content: "Hola, el cambio con un shield wifi ser\xC3\xADa m\xC3\xADnimo, <a href=\"https://gist.github.com/gists/search?q=wifly&page=1\" rel=\"nofollow\">aqu\xC3\xAD</a> puedes ver las modificaciones para usar <a href=\"https://www.sparkfun.com/products/9954\" rel=\"nofollow\">wifly shield</a>\n\n\
    No te puedo ayudar con la placa openpicus, pues no la he usado.\n\n\
    Un saludo"
- id: 5754
  author: Gloria
  author_email: aracely_guerrero@outlook.com
  author_url: ""
  date: 2013-10-26 03:37:46 +0200
  date_gmt: 2013-10-26 01:37:46 +0200
  content: "Buen d\xC3\xADa, en la parte que se declara\r\n\
    dht11 DHT11; \r\n\
    \r\n\
    Me presenta el error 'dht11' does not name a type...\r\n\
    No s\xC3\xA9 si podr\xC3\xADan ayudarme, por favor :)"
- id: 5755
  author: Gloria
  author_email: aracely_guerrero@outlook.com
  author_url: ""
  date: 2013-10-26 03:49:46 +0200
  date_gmt: 2013-10-26 01:49:46 +0200
  content: "Error m\xC3\xADo, disculpen, olvid\xC3\xA9 instalar la librer\xC3\xADa DHT11... \xC2\xA1Gracias!"
- id: 5771
  author: javacasm
  author_email: javacasm@elcacharreo.com
  author_url: ""
  date: 2013-10-27 18:30:58 +0100
  date_gmt: 2013-10-27 17:30:58 +0100
  content: "No pasa Gloria. \xC2\xBFte funcion\xC3\xB3 todo finalmente?\n\
    Un saludo"
---
Modificando el ejemplo WebServer que viene con arduino es muy sencillo hacer que los datos de nuestros sensores estén disponibles a traves de internet. En la modificación que hemos hecho simplemente medimos y almacenamos los valores de nuestros sensores. En caso de que haya una conexion http devolvemos una página muy simple con los últimos valores que hemos recuperado.

Podéis ver los datos actuales sin más que conectar con mi <a href="http://javacasm.is-a-geek.org:666">arduino-servidor</a> (no puedo asegurar que esté activo en este momento).

<a id="more"></a><a id="more-170"></a>
<pre>
#include &lt;SPI.h&gt;
#include &lt;Ethernet.h&gt;
#include &lt;dht11.h&gt;



dht11 DHT11;

#define nSensores 3 
int puertos[nSensores];
float fHumedades[nSensores];
float fTemperaturas[nSensores];

int iNVisitas=0;

// Enter a MAC address and IP address for your controller below.
// The IP address will be dependent on your local network:
byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xEE, 0xEE };
byte ip[] = { 192,168,1, 177 };

// Initialize the Ethernet server library
// with the IP address and port you want to use 
// (port 80 is default for HTTP):
Server server(666);
void setup()
{
  // start the Ethernet connection and the server:
  Ethernet.begin(mac, ip);
  server.begin();
  
  Serial.begin(115200);
  puertos={2,3,4};
  
}

void getdata(int iIndice)
{
  int chk = DHT11.read(puertos[iIndice]);
  fHumedades[iIndice]=-1;
  fTemperaturas[iIndice]=-1;
  
  Serial.print("Sensor ");
  Serial.print(iIndice);
  Serial.print(" ");
  switch (chk)
  {
    case 0:   
      fHumedades[iIndice]=(float)DHT11.humidity;
      Serial.print(fHumedades[iIndice], 2);
      Serial.print(" % ");
      fTemperaturas[iIndice]=(float)DHT11.temperature;
      Serial.print(fTemperaturas[iIndice], 2);
      Serial.println(" o C");
        break;
    case -1: Serial.println(" Checksum error"); break;
    case -2: Serial.println(" Time out error"); break;
    default: Serial.println(" Unknown error"); break;
  }

  
}


void loop()
{
  // listen for incoming clients
  Client client = server.available();
  if (client) {
    // an http request ends with a blank line
    boolean currentLineIsBlank = true;
    while (client.connected()) {
      if (client.available()) {

        char c = client.read();
        // if you've gotten to the end of the line (received a newline
        // character) and the line is blank, the http request has ended,
        // so you can send a reply
        if (c == '\n' &amp;&amp; currentLineIsBlank) {
          // send a standard http response header
          client.println("HTTP/1.1 200 OK");
          client.println("Content-Type: text/html");
          client.println();
          // output the value of each analog input pin
          for(int i=0;i&lt;nSensores;i++){
//          for (int analogChannel = 0; analogChannel &lt; 6; analogChannel++) {
            client.print("sensor ");
            client.print(i);
            client.print(": ");            
            if(fHumedades[i]==-1)
              client.print(" error leyendo el sensor");
            else
            {
              client.print(fHumedades[i], 2);
              client.print(" % ");
              client.print(fTemperaturas[i], 2);
              client.println(" o C");            
            }
            client.println("&lt;br /&gt;");            
          }
          client.print((iNVisitas++)/2);
          client.println(" visitas &lt;br /&gt;");

          break;
        }
        if (c == '\n') {
          // you're starting a new line
          currentLineIsBlank = true;
        } 
        else if (c != '\r') {
          // you've gotten a character on the current line
          currentLineIsBlank = false;
        }
      }
    }
    // give the web browser time to receive the data
    delay(1);
    // close the connection:
    client.stop();
  }
  else
  {
    for(int i=0;i&lt;nSensores;i++)
      getdata(i);
    delay(200);
  }
}</pre>
En próximas entregas añadiremos conectividad a nuestro arduino usando protocolos más industriales como ModBus
