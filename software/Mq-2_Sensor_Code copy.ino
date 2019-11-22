

#include <Arduino.h>


#define smokeA0 (PA6)
#define buzzer (PA12)
int sensorThres = 1100;

#define LED PC13
void setup() {
  // put your setup code here, to run once:

pinMode(smokeA0,INPUT);
pinMode(LED,OUTPUT);
 pinMode(buzzer, OUTPUT);
Serial.begin(9600);
 Serial.println("Gas sensor warming up!");
 delay(20000); // allow the MQ-2 to warm up


}

void loop() {
  float analogSensor = analogRead(smokeA0);
  Serial.print("Pin A0: ");
  Serial.println(analogSensor);
 

  if(analogSensor > sensorThres)
  {
    digitalWrite(LED,LOW);
    Serial.println(" | Smoke detected!");
    Serial.println(" | Buzzer On");
    tone(buzzer, 1000, 200);
    delay(100);
    noTone(buzzer);
  }
  else
  {
    digitalWrite(LED,HIGH);
    Serial.println(" |  No Smoke detected!");
    Serial.println(" |  Buzzer Off");
    noTone(buzzer);

  }
    delay(1000);
}
