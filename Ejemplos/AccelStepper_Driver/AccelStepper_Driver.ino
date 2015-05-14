#include <AccelStepper.h>

// AccelStepper mystepper(AccelStepper::DRIVER, pinStep, pinDirection);
// A stepper motor controlled by a dedicated driver board.

AccelStepper stepper1(AccelStepper::DRIVER, 2, 5);
AccelStepper stepper2(AccelStepper::DRIVER, 3, 6);
int v1=200.0,a1=100.0,d1=24;
int v2=300.0,a2=100.0,d2=1000000;
char buffer[50];
void setup()
{
  Serial.begin(9600);
  stepper1.setMaxSpeed(v1);
  stepper1.setAcceleration(a1);
  stepper1.moveTo(24);
  sprintf(buffer,"Motor 1 v: %d a: %d d=%d",a1,v1,d1);
  Serial.println(buffer);
  
  stepper2.setMaxSpeed(v2);
  stepper2.setAcceleration(a2);
  stepper2.moveTo(d2);
  sprintf(buffer,"Motor 1 v: %d a: %d d=%d",a2,v2,d2);
  Serial.println(buffer);

}

void loop ()
{
    if (stepper1.distanceToGo() == 0)
      stepper1.moveTo(-stepper1.currentPosition());
    stepper1.run();
    stepper2.run();
    Serial.println("run");
}
