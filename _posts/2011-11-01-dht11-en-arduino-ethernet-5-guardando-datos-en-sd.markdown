--- 
layout: post
status: publish
published: true
title: "DHT11 en arduino ethernet 5: guardando datos en SD"
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
excerpt: "No puede ser m\xC3\xA1s sencillo a\xC3\xB1adir la posibilidad de que los datos se guarden en la tarjeta sd (ciertamente es sencillo porque esta placa arduino lo facilita todo. Al final de la serie veremos qu\xC3\xA9 hay que modificar para usar otra placa arduino).\r\n\
  \r\n\
  La idea es usar los datos en tiempo real para mostrarlos a quien los solicite por internet y de paso guardar cada cierto tiempo los datos para que con posterioridad pudi\xC3\xA9ramos realizar estudios hist\xC3\xB3ricos con esos datos, eso s\xC3\xAD, desde un PC que leyera los datos de la tarjeta directamente.\r\n\
  \r\n\
  Basta con seguir el <a href=\"http://arduino.cc/en/Tutorial/Datalogger\">ejemplo de Tom Igoe</a> de como hacer un datalogger con arduino ethernet: inclu\xC3\xADmos la libreria SD, abrirmos el fichero y escribimos en \xC3\xA9l:\r\n\
  \r\n"
wordpress_id: 172
wordpress_url: http://blog.elcacharreo.com/?p=172
date: 2011-11-01 00:08:29 +01:00
categories: 
- arduino
tags: 
- arduino
- sd
- ethernet
- datalogger
comments: 
- id: 1123
  author: Zair Zavaleta
  author_email: zairzl@hotmail.com
  author_url: ""
  date: 2012-08-01 21:07:06 +0200
  date_gmt: 2012-08-01 19:07:06 +0200
  content: Una pregunta, este archivo monitorea temperatura y humedad y veo que lo guardas todo en un archivo de texto, lo que no entiendo bien es la parte central, estas monitoreando estos datos via internet leyendo el archivo de texto o como le haces
- id: 1124
  author: javacasm
  author_email: javacasm@elcacharreo.com
  author_url: ""
  date: 2012-08-01 21:31:06 +0200
  date_gmt: 2012-08-01 19:31:06 +0200
  content: "Los datos se leen y en tiempo real se muestran por internet a quien los solicite. Por otro lado cada cierto tiempo se guardan en un fichero para con posterioridad poder procesar los datos hist\xC3\xB3ricos, pero ya en un pc. Creo que hay que revisar la explicaci\xC3\xB3n global del proyecto para clarificar este punto.\n\n\
    Gracias por la pregunta"
- id: 1401
  author: martin artaza
  author_email: martin.artaza@gmail.com
  author_url: ""
  date: 2012-09-06 00:08:13 +0200
  date_gmt: 2012-09-05 22:08:13 +0200
  content: "Hola, \xC2\xBFse puede definir una puerta de enlace determinada y como se hace?.\r\n\
    Lo que sucede que mi red la hice con los aparatos que tenia a mano y de un moden (ip: 10.0.0.2) se conecta mi vecino quien paga internet por usb y me tira un cable a mi, de ah\xC3\xAD lo conecto a otro moden (si moden no switch, cuya ip es 10.0.0.3) yo para conectarme a internet me conecto a mi moden por cable red o wifi pero configurando siempre que la puerta de enlace es 10.0.0.2 no la 10.0.0.3 que la que me da si pongo ip automatica. \r\n\
    Por ende lo que haga con andruino en este tipo escenario debo decirle que la puerta de enlace predeterminada es 10.0.0.2 se puede hacer eso, con que instrucci\xC3\xB3n.\r\n Desde ya muchas gracias."
- id: 1411
  author: javacasm
  author_email: javacasm@elcacharreo.com
  author_url: ""
  date: 2012-09-08 09:43:58 +0200
  date_gmt: 2012-09-08 07:43:58 +0200
  content: "Hasta donde yo s\xC3\xA9, puedes configurar sin problema la puerta de enlace de tu red normalmente, como har\xC3\xADas en un pc. La parte dificil de tu montaje la hace el modem que une tus dos redes.\n\
    Lo que no tengo claro es si no ser\xC3\xADa mejor que usares redes distintas (es decir 10.0.0.x y 10.0.1.x) para simplificar un poco m\xC3\xA1s el montaje.\n\
    Saludos y cuentanos como termina todo."
- id: 1418
  author: ArleyT
  author_email: jonaja66@hotmail.com
  author_url: ""
  date: 2012-09-08 23:51:42 +0200
  date_gmt: 2012-09-08 21:51:42 +0200
  content: "\xC2\xBFQu\xC3\xA9 modificaciones tendr\xC3\xADa que hacerle al c\xC3\xB3digo si lo que busco es que el arduino lea la temperatura y la guarde en la SD. Sin Ethernet.\r\n\
    \r\n\
    Gracias de antemano."
- id: 1419
  author: javacasm
  author_email: javacasm@elcacharreo.com
  author_url: ""
  date: 2012-09-09 01:17:17 +0200
  date_gmt: 2012-09-08 23:17:17 +0200
  content: "S\xC3\xB3lo tienes que omitir lo que se coment\xC3\xB3 en el anterior post sobre el tema http://blog.elcacharreo.com/2011/10/30/dht11-en-arduino-ethernet-4-por-fin-internet-http/"
- id: 1557
  author: joel
  author_email: kyo_8891@hotmail.com
  author_url: ""
  date: 2012-10-04 00:13:22 +0200
  date_gmt: 2012-10-03 22:13:22 +0200
  content: hola, tengo una duda con el codigo. es necesario tener conectado la tarjeta al puerto usb en la PC, es decir que si es posible que trabaje solo con la entrada de voltaje.
- id: 1562
  author: javacasm
  author_email: javacasm@elcacharreo.com
  author_url: ""
  date: 2012-10-04 20:18:21 +0200
  date_gmt: 2012-10-04 18:18:21 +0200
  content: "Para nada es necesario tener conexi\xC3\xB3n con el USB. Solo hace falta alimentaci\xC3\xB3n"
- id: 1973
  author: Linuesa
  author_email: david.linuesa@gmail.com
  author_url: ""
  date: 2012-10-30 17:51:13 +0100
  date_gmt: 2012-10-30 16:51:13 +0100
  content: "Podrias comentar el programa en espa\xC3\xB1oL?"
- id: 1975
  author: javacasm
  author_email: javacasm@elcacharreo.com
  author_url: ""
  date: 2012-10-30 18:07:05 +0100
  date_gmt: 2012-10-30 17:07:05 +0100
  content: "Hecho David, espero que te sea \xC3\xBAtil."
- id: 6406
  author: Javier
  author_email: jsanjuan@quinfo.com
  author_url: ""
  date: 2014-01-25 14:26:03 +0100
  date_gmt: 2014-01-25 13:26:03 +0100
  content: "Haciendo un par de modificaciones he logrado que funcione con Arduino 1.05. Inicialmente me daba un problema con la asignaci\xC3\xB3n de puertos. En parte sintaxis, en parte definici\xC3\xB3n de los puertos.\r\n\
    Resulta conveniente omitir el puerto 4 para un sensor DHT11, ya que algunas tarjetas con SD utilizan este puerto como selector de la tarjeta SD. Al menos por lo que he visto en varios modelos y ejemplos."
- id: 6416
  author: javacasm
  author_email: javacasm@elcacharreo.com
  author_url: ""
  date: 2014-01-26 23:17:46 +0100
  date_gmt: 2014-01-26 22:17:46 +0100
  content: "Gracias Javier, intentar\xC3\xA9 revisarlo"
---
No puede ser más sencillo añadir la posibilidad de que los datos se guarden en la tarjeta sd (ciertamente es sencillo porque esta placa arduino lo facilita todo. Al final de la serie veremos qué hay que modificar para usar otra placa arduino).

La idea es usar los datos en tiempo real para mostrarlos a quien los solicite por internet y de paso guardar cada cierto tiempo los datos para que con posterioridad pudiéramos realizar estudios históricos con esos datos, eso sí, desde un PC que leyera los datos de la tarjeta directamente.

Basta con seguir el <a href="http://arduino.cc/en/Tutorial/Datalogger">ejemplo de Tom Igoe</a> de como hacer un datalogger con arduino ethernet: incluímos la libreria SD, abrirmos el fichero y escribimos en él:

<a id="more"></a><a id="more-172"></a>
<pre>
#include &lt;SPI.h&gt;
#include &lt;Ethernet.h&gt;
#include &lt;dht11.h&gt;
#include &lt;SD.h&gt;

dht11 DHT11;

#define nSensores 3
int puertos[nSensores];
float fHumedades[nSensores];
float fTemperaturas[nSensores];

int nFilas=0;
int nFiles=0;

File file;

int iNVisitas=0; //guardaremos el número de visitas a modo de contador

// Ponemos la direccion MAC y la direccion IP que asignaremos a nuestra placa
byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xEE, 0xEE };
byte ip[] = { 192,168,1, 177 };

// Initializamos la librería Ethernet
// con la ip y el puerto elegido 666
// (puerto 80 por defecto para HTTP):
EthernetServer server(666); // En arduino 1.0 es  EthernetServer, en las versiones anteriores sólo Server
void setup()
{
 
  Ethernet.begin(mac, ip); // Arrancamos el ethernet
  server.begin(); //Arrancamos el servidor

  Serial.begin(115200); //Arrancamos el serial para depuracion
  puertos={2,3,4}; // Puertos en los que están conectados los sensores

   pinMode(10, OUTPUT);
  if (!SD.begin(4))
  {
    Serial.println("Error inicializando SD");
    nFiles=-1;
  }
  else
  {
    nFiles=0;
    Serial.println("SD initializada.");
  }

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
    case -1: Serial.println(" Error en el chequeo"); break;
    case -2: Serial.println(" Error de espera"); break;
    default: Serial.println(" Error desconocido"); break;
  }

}

void loop()
{
  // escuchamos a clientes
  EthernetClient client = server.available(); // Antes de arduino 1.0 era Client
  if (client) {
    // las peticiones terminan con la una línea en blanco
    boolean currentLineIsBlank = true;
    while (client.connected()) {
      if (client.available()) {

        char c = client.read();
        // Un fin de linea y una linea en blanco indica que la peticion ha terminado
        if (c == '\n' &amp;&amp; currentLineIsBlank) {
          // enviamos la cabecera HTTP estandar
          client.println("HTTP/1.1 200 OK");
          client.println("Content-Type: text/html");
          client.println();
           // mostramos los valores de los sensores
          for(int i=0;i&lt;nSensores;i++){
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
          // empezamos una nueva linea
          currentLineIsBlank = true;
        }
        else if (c != '\r') {
          // hemos recibido un caracter de la nueva linea
          currentLineIsBlank = false;
        }
      }
    }
     // damos tiempo al navegador tiempo para recibir los datos
    delay(1);
     // cerramos la conexion:
    client.stop();
  }
  else
  {
    //if(nFiles&gt;=0 &amp;&amp; file)
    {
       file= SD.open("datalog.txt", FILE_WRITE);
    }
    String data="";
    for(int i=0;i&lt;nSensores;i++)
    {
      getdata(i);

      data+=String(nFilas)+";"+String(i)+";"+String((int)fHumedades[i])+";"+String((int)fTemperaturas[i])+"\n";
    }
    if(file)
    {
      file.print(data);
      Serial.print(data);
      file.close();
      nFilas++;
    }
    delay(200);
  }
}</pre>
