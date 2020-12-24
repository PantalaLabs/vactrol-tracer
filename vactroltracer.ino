/* Vactrol Tracer
Vactrol Tracer 
Is a software and Hardware tool to tune vactrol´s response
This way you can try your custom made vactrol and tune the circuit to your desired response.
How does it work? The arduino creates a PWM curve and reads the circuit output voltage
3 adjustments are available:
-Leak
-Curve
-Gain
Be careful with Gain control. THERE IS NO ADC INPUT VOLTAGE PROTECTION !!!!!!!
Instructions: 
1)build PCB and connect the board into an Arduino Uno
2)connect an external 9VDC adapter into PCB power jack.
3)connect the Arduino to the computer via USB cable
4)open the arduino code and upload to the MCU
5)open Serial Plotter (inside Tools menu of the Arduino Ide)

By Gibran Salomao
Pantala Labs
www.pantalalabs.com
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
