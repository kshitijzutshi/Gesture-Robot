# Gesture Controlled Robot
### Objective
Conventional motor driven robots can be controlled by joysticks remote controllers, but what if we could just control them with the gesture of our hand?
That would be some tony stark level stuff, i tell you that! 
But yes, it is possible and hence that in a way was the motivation to work on building the robot in such a way that it could be controlled with guestures of our hand. 
### Components Involved
In order to communicate the signals of our hand, we used a radio transmitter and receiver of frequency around 300MHz.
The motion of the hand can be sensed by using an accelerometer ADLX 330. We use the L293 H Bridge motor driver for the control signals betwwen the front and back wheels.
### Source Codes
The above uploaded codes are split as various files, mainly because the components like the accelerometer needed to be calibrated for motion sensing before we could integrate it into the system.
### Screenshots of the model
#### Calibration of the components and interfacing them in the Arduino IDE
![20160115_233030](https://user-images.githubusercontent.com/13203059/39405681-43e4d0d2-4ba9-11e8-87b0-5ea5ab5342bd.jpg)
#### Assembled the robot model ready for test run

![20160116_163201](https://user-images.githubusercontent.com/13203059/39405695-9d739eda-4ba9-11e8-8e7f-0d4fd2df3a5a.jpg)

