// Este código está tomado del tutorial de Ikkaro.com (http://www.ikkaro.com/como-hacer-fresadora-cnc-casera-parte-4/)
	#define VELOCIDAD 1700

// Usamos la configuracion de pines del CNC shield    
	int steps = 2;
	int direccion = 3;
	int reset = A0;
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




