//Code adaptation of making an LED fade by use of a potentiometer.

int led = 9;
int twist = A0;

int sensorValue = 0;
int brightness = 0;

void setup(){
Serial.begin(9600);
}

void loop(){
sensorValue = analogRead(twist);
brightness = map(sensorValue, 0, 1023, 0, 255);
analogWrite(twist, brightness);

Serial.println("ping!");
delay(2);
}


