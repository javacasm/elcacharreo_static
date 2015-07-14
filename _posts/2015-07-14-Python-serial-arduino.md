---
title: Plantilla
layout: post
published: false
---
2015-07-14-Python-serial-arduino.md


	# Ejemplo tomado de https://gist.github.com/Juanlu001/8256958
	# Librerias empleadas: Pyserial y Numpy

	import time
	import serial
	import numpy

	Lecturas=20
	data=numpy.zeros((Lecturas, 2))

	# Abrimos la conexión con Arduino
	arduino = serial.Serial ('COM3', baudrate=9600,timeout=1.0)

	# Reseteo de Arduino
	arduino.setDTR(False)
	time.sleep(1)
	arduino.flushInput()
	arduino.setDTR(True)

	with arduino:
	    contador = 0
	    while contador < Lecturas:
	        try:
	            line = arduino.readline()
	            print (line)
	            
	            if not line:
	                # Descartamos líneas vacías
	                
	                continue
	            data[contador] = numpy.fromstring(line.decode('ascii', errors='replace'),sep=' ')
	            contador += 1

	        except KeyboardInterrupt:
	            print("Exiting")
	            break
	        
	# Reproducir muestras
	print(data)
