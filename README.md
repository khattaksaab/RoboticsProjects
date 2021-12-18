# Robotics Zumo Robot Challenge

This is project which consists three challenges involving programming an Aruiono, a Zumo Shield robot and sensors. The challenges comprise of making a Zumo Shield perform a set of actions. 

### All three Challenges ask for a unique action to be performed from the Zumo Shield

# My Robot

![ezgif com-gif-maker-2](https://user-images.githubusercontent.com/61862550/146652392-ad7d033a-e63b-4e04-8cdb-920720d1dd58.gif)

## Materials

- Arduino
- Zumo Shield
- Ultrasonic Sensor
- Laptop with Arduino installed
- Micro USB cable
- Jumper Wires
- Double sided tape
- Human being to code on arduino

## Libraries Used

- #include <ZumoShield.h>
- #include <ZumoMotors.h>
- #include <Pushbutton.h>

# Challenge 1:

Make a zumo robot go straight for a certain distance. 


![ezgif com-gif-maker-3](https://user-images.githubusercontent.com/61862550/146653335-9f1a371f-2270-45d6-827b-7155fb73dd93.gif)

In this code the robot goes forward for 2 seconds at 200 motor speed at both wheel and then stops. Video is available under **Challange 1 folder** to show its performance.

> Link to how I coded challenge 1 is [here](https://github.com/khattaksaab/RoboticsProjects/blob/main/Challenge%201/challenge1_move_in_straightLine.ino).

# Challenge 2:

Make a zumo robot perform a square.

![ezgif com-gif-maker-4](https://user-images.githubusercontent.com/61862550/146653344-3435fdbe-4177-49f1-8011-d9b35fb7f1dd.gif).

In this, the zumo is supposed to perform a square. The zumo bot goes forward at a fixed delay time Then rotates right at 90 degree angle buy rotating the wheels in opposite directions a fixed speed and fixed delay to achieve a 90 degree turn This code is repeated 4 times for 4 turns to achieve a square

> Link to how I coded **Challenge 2** is [here](https://github.com/khattaksaab/RoboticsProjects/blob/main/Challenge%202/challenge_2_zumo_square.ino).
  
# Challenge 3:

Object detection using an ultasonic sensor. The zumo robot should detect an object and then move around the object to complete this challenge

In this code, the zumo uses an ultrasonic sensor to detect object and the go and around an object after it has detected an object

First, the zumo goes forward searching for an object and rotates to the left and right to search for an object If the distance of the object is less than 50cm from the zumo It will go backward, then rotate to the left 90 degrees, then move forward, then rotate to the right, then move forward, and this step is performed 4 times in order to achieve the zumo going around the object once it has detected it After moving around the object, the zumo then briefly rotate left and right and goes forward to search for another object.
 
 ![ezgif com-gif-maker-2](https://user-images.githubusercontent.com/61862550/146653390-8715e216-e133-4b81-a1af-a20368f0de9b.gif)

> Link to how I coded **Challenge 2** is [here](https://github.com/khattaksaab/RoboticsProjects/blob/main/Challenge%203/challenge3_zumo_objectDetection.ino).

# Schematic for Challenge 3

<img width="985" alt="image" src="https://user-images.githubusercontent.com/61862550/146653696-ab6daacd-a484-476b-9c46-27b89bba700c.png">

# Issues

In challenge I had trouble making the motors work, even though I had coded correctly, the zumo motors won't seem to work properly. Spent a couple of hours to debug the issue. However later I found out that the issue was infact related to the pin number where I had connected the trig and echo pins for the Ultrasonic sensor. They were conencted on the pins used for the Zumo motors and Light sensor array. After selected the correct pin numbers, the zumo motors and ultra sonic sensors worked perfectly fine, however a lot of time had passed.

# What's next?

I found challenge 3 to be very interesting. I would like to work more on object detection while the bot is moving around the object. If it encounted an object while revoling around the object it should the re calibrate the distance and go around the object. 

