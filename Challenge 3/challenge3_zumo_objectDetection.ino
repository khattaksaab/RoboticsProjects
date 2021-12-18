#include <ZumoMotors.h>
#include <Pushbutton.h>


#define LED_PIN 13
const int trigPin = 5; //trig pin on the ultrasonic sensor to receive signal
const int echoPin = 4; //echo pin on the ultrasonic sensor to give signal
Pushbutton button(ZUMO_BUTTON); //zumo button

ZumoMotors motors;
 long duration, inches, cm; 

void setup()
{
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
  button.waitForButton();
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

/

long microsecondsToInches(long microseconds) // function to convert microseconds to inches
{
// Sound travels at 1130 feet per second, 73.746 microseconds per inch
// and since its 2 way (outband and return)
// we will devide it by 2

  return microseconds / 74 / 2;
  
}

// fun
long microsecondsToCentimeters(long microseconds) //function to convert from microsecondsToCentimeter
{
  // The speed of sound is 340 m/s or 29 microseconds per centimeter.
  // The ping travels out and back, so to find the distance of the
  // object we take half of the distance travelled.

  return microseconds / 29 / 2;
    
}

void loop()
{
  
  digitalWrite(LED_PIN, HIGH);

  // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  
  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.

  
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);

  // converting the time into a distance
  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);

      if (cm < 30) //to check if the object is less than 30 cm away
      //if condition is true
      //zumo will move around the object is a square pattern once
      {
        Serial.println("Shorter than 50 cm");
        Serial.print(inches);
        Serial.print("in, ");
        Serial.print(cm);
        Serial.print("cm");
        Serial.println();
        motors.setSpeeds(-200,-200); //reverses when object detected
        delay(200);
        // run left motor forward
        motors.setSpeeds(-100,100); //rotates left
        delay(650);
        motors.setSpeeds(200, 200); //goes forward
        delay(600);
        motors.setSpeeds(100,-100); //rotates right
        delay(720);
        motors.setSpeeds(200, 200); //goes forward
        delay(2000);
        motors.setSpeeds(100,-100); //rotates right
        delay(700);
        motors.setSpeeds(200, 200); //goes forward
        delay(1560);
        motors.setSpeeds(100,-100); //rotates right
        delay(750);
        motors.setSpeeds(200, 200);  //goes forward
        delay(2000);
        motors.setSpeeds(100,-100); //rotates right
        delay(750);
        motors.setSpeeds(200, 200); //goes forward
        delay(1500);
        motors.setSpeeds(-100,100);//rotates left
        delay(600);
        motors.setSpeeds(100,-100); //rotates right
        delay(800);

      } 
      
      else 
      
      {
        
        motors.setSpeeds(100,100); //goes forwards
        delay(2000);
        
      }
  
}
