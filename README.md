# vactrol-tracer
Vactrol Tracer <br>
Is a software and Hardware solution to trace vactrol´s behavior<br>
This way you can experiment as many leds and as many ldrs you want to create a linear response.<br>
The arduino creates a PWM curve and reads back this output voltage<br>
3 adjustments are available:<br>
-Leak<br>
-Curve<br>
-Gain<br>
Be careful with these controls. THERE IS NO ADC INPUT VOLTAGE PROTECTION !!!!!!!<br>
Instructions: <br>
1)populate PCB and check for shorts. Needs 9VDC.<br>
2)plug it into an Arduino Uno<br>
3)Upload the code<br>
4)Open Serial Plotter (inside Tools menu of the Arduino Ide)<br>
