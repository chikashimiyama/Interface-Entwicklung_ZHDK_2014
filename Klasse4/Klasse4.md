# Klasse 4

## Arduino

### ADC = Analog to Digital Converter

- Arduino Uno hat 6x 10bit ADCs 
- 10 bit = 0-1023

![](img/adc.png)

- Serial.write sendet bytes (8bit), deshalb /4 vor Uebertragung

![](img/adc_max.png)

### Sketch1

#### voltage divider

- [voltage divider wiki](http://de.wikipedia.org/wiki/Spannungsteiler)

	![vd](img/vd.png)  

- voltage divider 2x 220 Ohm

![](img/vd1.png)  

	Z1 = 220  
	Z2 = 220  
	220/(220+220) = 0.5  
	0.5 * 255 = ca' 127  

### Sketch2

- voltage divider 220 Ohm und 68 Ohm

![](img/vd2.png)  

	Z1 = 220  
	Z2 = 68  
	68/(220+68) = 0.2361  
	0.2361 * 255 = ca' 60  

### Sketch3

- 68 Ohm --> 220 Ohm  

![](img/vd3.png)  

	Z1 = 68  
	Z2 = 220  
	220/(220+68) = 0.7638  
	0.2361 * 255 = ca' 195 


### Sketch4

- potentiometer

Potentiometer ist ein Art von Voltage-Divider
![](img/pot.png)



### Sketch5

- Force Sensitive Register
- Bendsensor
- Lichtsensor

![](img/fsr.png)



### Sketch6

- Infrarotsensor


