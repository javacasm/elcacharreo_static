## ¿Qué es Protocoder?

[Protocoder](http://www.protocoder.org/) es un entorno de desarrollo para Android que nos permite utilizar javascript para crear aplicaciones Android rápidamente. Es totalmente open-source y podemos ver su código en [github](https://github.com/Protocoder/Protocoder)

![ide](http://www.protocoder.org/docs-assets/images/protocoder_run.png)

Podemos resumir diciendo que se trata de  un entorno de desarrollo de aplicaciones Android que utiliza javascript  como  lenguaje y que  incluye la documentación y multitud de ejemplos en forma  local. Usaremos el navegador en el pc  para desarrollar de forma muy sencilla aplicaciones Android que se ejecutarán en dicho dispositivo.

En su forma de funcionar, se nota que su principal desarrollador (Victor Díaz @victornomad) ha tenido que trabajar en multitudes de entornos de lo  más diversos, con y sin conexión a Internet.

De ahí la necesidad de hacer un entorno que se pueda ejecutar totalmente en local, en contra de la tendencia actual de emplazar las desarrollos en la nube.

Desde este entorno podremos realizar aplicaciones Android que  acceden de forma muy sencilla al hardware del dispositivo: bluetooth, cámara, red,...  a los distintos subsistemas del terminal: reconocimiento de voz, TextToSpeech (lectura de contenidos por voz) así como a dispositivos conectados (arduino o similares)

En definitiva nos permite crear aplicaciones capces de utilizar nuestro teléfono Android como centro de procesamiento de la información disponible, lo que lo hacen ideal para desarrollar aplicaciones de robótica donde el teléfono actuará como cerebro.

## Utilización

Para utilizarlo sólo hay que instalar en nuestro dispositivo Android la aplicación Protocoder. Al ejecutarla tendremos acceso vía un navegador web a un potente entorno de desarrollo desde cualquier otro dispositivo que esté conectado a la misma red Wifi o al puerto USB sin más que acceder a la url que nos indica la aplicación al arrancar.

![ide](http://www.protocoder.org/docs-assets/images/protocoder_ide.png)

Este entorno de programación web además de un editor y un pequeño menú de las distintas opciones, dispone de multitud de ejemplos y documentación, a los que podemos acceder en cualquier momento.

Se han incluido multitud de APIs a las que podemos acceder desde javascript como [Processing](http://processing.org) (desarrollo visual), [Pure Data](http://puredata.org), [Open Street Map](http://openstreetmap.org), ...

También podemos acceder al hardware de nuestro terminal, como el acelerómetro, cámara, ....

Todos los proyectos que realicemos (scripts javascript y los ficheros de recursos necesarios, como imágenes, sonidos, etc...)  quedan almacenados dentro de la aplicación y podemos acceder posteriormente a cualquiera de las realizadas (o descargadas) para editarlas o ejecutarlas. Incluso podemos generar aplicaciones independientes, sin más que incluir nuestro script en la aplicación.

Además de usar los recursos del smartphone, podemos conectar otras placas externas como arduino (siempre que nuestro smartphone soporte USB OTG) e intercambiar datos entre ambos, controlándolas o representando gráficamente los contenidos 

![grafica de sensores](http://www.protocoder.org/docs-assets/images/protocoder_dashboard.png)

Otra de las posibilidades es la de depurar nuestro código línea a línea 

![depuración](http://www.protocoder.org/docs-assets/images/protocoder_livecoding.gif)

Con esta aplicación tenemos todo lo necesario para programar en cualquier parte

## Instalación

Para usar Protocoder necesitamos un dispositivo con Android 4.0 o posterior y un ordenador donde ejecutaremos un navegador que usaremos como editor de la programación.

1. Descargamos la [aplicación básica](http://www.protocoder.org/downloads/protocoder-normal-0_97.apk) o la [extendida](http://www.protocoder.org/downloads/protocoder-extended-0_97.apk) (que incluye el acceso al envío de SMS) y la instalamos.

2. Conectamos nuestro ordenador y nuestro Android a la misma red  o por medio de cable USB.

3. Ejecutamos la aplicación Protocoder y un navegador en el ordenador que conectaremos a la URL que nos indica la aplicación.

4. Para conectar vía USB usamos Activamos la depuración usb en el smartphone **¿Permitir Depuración usb?** y ejecutamos en el pc las siguientes líneas


		adb forward tcp:8585 tcp:8585
	
		adb forward tcp:8587 tcp:8587

## Ejemplo

Para probarlo he creado un pequeño ejemplo con reconocimiento de voz (al que pretenciósamente he llamado  Jarvis) que permite hacer una foto o nos contesta si decimos "foto"  o "adiós". Aunque el programa es enormemente simple nos da una idea de la capacidad del entorno. Podéis verlo en este [enlace](https://github.com/javacasm/tutorial-Protocoder/blob/master/jarvis.proto). El código es de lo más sencillo:

	/*
	*   
	*   Description first test in Protocoder, just a jarvis asistant
	*   by javacasm
	*
	*/



	media.startVoiceRecognition(function (text)
	{ 
	    console.log(text);
	    if (text=="voz")
	        media.textToSpeech("Has dicho "+text);

	    if(text=="foto")
	    {
	        var camera = ui.addCameraView(0, 0, 0, 500, 500);
	        camera.takePicture("picture.jpg",function(xx)
	        {
	            console.log(xx);
	        });
	    }
	    if(text=="adios")
	    {
	        media.textToSpeech("Sayonara baby");
	        exit;
	    }
	});

Para la próxima entrada dejamos hacer una prueba controlando y comunicando con un arduino.