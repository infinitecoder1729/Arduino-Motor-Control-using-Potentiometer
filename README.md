# Arduino-Motor-Control-using-Potentiometer
A basic Arduino Circuit and Code Setup containing A Servo motor along with a Potentiometer. The aim is to control the position of the motor according to the Value of potentiometer.

## Circuit Design :

  ![Motor Control with Potentiometer](https://user-images.githubusercontent.com/77016507/227536586-0e012836-5c66-48c9-a878-8786292484f9.png)

## Description of Pins and Connections :

1. Pin 9 (PWM) : Used to send Signal Pin to Servo.
2. A1 (Analog Pin) : Used as Input pin for the Value of Potentiometer
3. The Code Maps the Value of Potentiometer ( 0 to 1023 ) to the Value acceptable by Motor ( 0 to 180 ). There are two commands so that the motor returns to original position before the next iteration.

## Video of Simulation :

https://user-images.githubusercontent.com/77016507/227621123-30e150a8-22ee-4e49-9a9a-5e2c3b019b7c.mp4

Notice how the Angle of Movement in Motor Changes with the Change in Potentiometer

Physical Implementation Video : https://drive.google.com/file/d/1sQcZBEUUSyNKuWz8UvLw-YeGsttM0zi0/view?usp=sharing (Video Credit : https://github.com/Zendovo)

## Link to TinkerCAD : https://www.tinkercad.com/things/1f20aNyZTzt?sharecode=5FTRHCtUZAioNJYGm9C8ML99pPxJ5VaMTotXjBfsxic
