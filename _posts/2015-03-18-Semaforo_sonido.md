Semáforo de sonido


http://www.instructables.com/id/Clap-Off-Bra/?ALLSTEPS

/*
 Clap Off Bra
 Here is code to build your own Clap Off Bra.
 
 Learn more at:
 http://www.instructables.com/id/Clap-Off-Bra/
 
 */

int sensorPin = A5;    // select the input pin for the potentiometer
int relayPin = 10;      // select the pin for the relay
int sensorValue = 0;  // variable to store the value coming from the sensor
int knockUp;


void setup() {
  // declare the relayPin as an OUTPUT:
  pinMode(relayPin, OUTPUT);  
  knockUp = 0;
  digitalWrite(relayPin, HIGH); 
//  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);    

 long startTime = millis();
 while(millis() - startTime < 1500){
      sensorValue = analogRead(sensorPin); 
       if (sensorValue > 800) {
        knockUp = knockUp + 1;
        delay(100);
       // Serial.println(knockUp, DEC); 
       } 
     }
  if (knockUp == 2){
   digitalWrite(relayPin, LOW); 
   delay(20000);
   digitalWrite(relayPin, HIGH); 
  }
  knockUp = 0;
}
