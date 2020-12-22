#include <Arduino.h>
#define VACTROLREADPIN 0
#define DIRECTREADPIN 1
#define PWMPIN 10
void setup()
{
  Serial.begin(115200);
  pinMode(PWMPIN, OUTPUT);
}
void loop()
{
  for (uint16_t i = 0; i < 255; i++)
  {
    analogWrite(PWMPIN, i);
    Serial.print(map(i, 0, 255, 0, 5000));
    Serial.print(",");
    Serial.println(map(analogRead(VACTROLREADPIN), 0, 1023, 0, 5000));
    delay(15);
  }
  analogWrite(PWMPIN, 0);
  delay(300);
}
