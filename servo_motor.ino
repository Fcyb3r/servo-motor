#include <Servo.h>

Servo servom;


void setup() {
servom.attach(3);
 

}

void loop() {
servom.write(0);
delay(500);
  servom.write(90);
  delay(500);
   servom.write(180);
    delay(500);

}
