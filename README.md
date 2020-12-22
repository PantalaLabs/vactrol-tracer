# vactrol-tracer
Vactrol Tracer
Is a software and Hardware solution to trace vactrol´s behavior
This way you can experiment as many leds and as many ldrs you want to create a linear response.
The arduino creates a PWM curve and reads back this output voltage
3 adjustments are available:
-Leak
-Curve
-Gain
Be careful with these controls. THERE IS NO ADC INPUT VOLTAGE PROTECTION !!!!!!!
Instructions: 
1)populate PCB and check for shorts. Needs 9VDC.
2)plug it into an Arduino Uno
3)Upload the code
4)Open Serial Plotter (inside Tools menu of the Arduino Ide)
