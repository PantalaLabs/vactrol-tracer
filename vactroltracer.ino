/* Vactrol Tracer
 * Is a software and Hardware solution to trace vactrol´s behavior
 * This way you can experiment as many leds and as many ldrs you want to create a linear response.
 * The arduino creates a PWM curve and reads back this output voltage
 * 3 adjustments are available:
 * -LDR leak
 * -Feedback
 * -Final gain
 * Be careful with these controls. THERE IS NO ADC INPUT VOLTAGE PROTECTION !!!!!!!
 * Instructions: 
 * 1)populate PCB and check for shorts
 * 2)plug it into an Arduino Uno
 * 3)Upload the code
 * 4)Open Serial Plotter (inside Tools menu of the Arduino Ide)
 */
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
