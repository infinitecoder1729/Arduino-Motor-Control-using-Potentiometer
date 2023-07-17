#include <Servo.h>

Servo myservo;
int ppin = A1;
int value = 0;

void setup()
{
    myservo.attach(9);
    Serial.begin(9600);
}

void loop()
{
    value = analogRead(ppin);
    Serial.print(value);
    Serial.print(": ");
    value = map(value, 0, 1023, 0, 270);
    myservo.write(value);
    Serial.print(value);
    Serial.print("\n");
    delay(1);
}
