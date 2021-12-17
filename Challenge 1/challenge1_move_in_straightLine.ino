

#include <ZumoShield.h>

#define LED 13
#define forward_speed 200
#define rotate_right_speed 100

ZumoMotors motors;
Pushbutton button(ZUMO_BUTTON);



void waitForButtonAndCountDown() //waiting to push button
{
  digitalWrite(LED, HIGH);
  button.waitForButton();
  digitalWrite(LED, LOW);
}

void setup()
{
  pinMode(LED, HIGH);

  waitForButtonAndCountDown();
}

void loop()  //  move zumo for a certain distance and then stop
  // run left motor forward
  motors.setSpeeds(forward_speed, forward_speed);
  delay(2000);
  motors.setSpeeds(0,0);
  delay(800000000);
}
