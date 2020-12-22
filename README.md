# Vactrol Tracer

Is a software/hardware tool to trace vactrol´s response<br>
This way you can try your custom made vactrol and tune the circuit to your desired response.<br>
Wow does it works? The arduino creates a PWM curve and reads the circuit output voltage<br>
3 adjustments are available:<br>
-Leak<br>
-Curve<br>
-Gain<br>
Be careful with Gain control. THERE IS NO ADC INPUT VOLTAGE PROTECTION !!!!!!!<br>
Instructions: <br>
1)build PCB and connect the board into an Arduino Uno
2)connect an external 9VDC adapter into PCB power jack.<br>
3)connect the Arduino to the computer via USB cable<br>
4)open the arduino code and upload to the MCU<br>
5)open Serial Plotter (inside Tools menu of the Arduino Ide)<br>

The blue : original PWM curve
The red : tuned circuit + vactrol curve
<img src="serial plotter sample.png"></img><br>

Actual PCB<br>
<img src="vactrol tracer 1.jpg"></img><br>
<img src="vactrol tracer 2.jpg"></img><br>

