# Klasse 5

Alle Functionen von Arduino
- [Arduino Language Reference](http://arduino.cc/en/Reference/HomePage)

## Interrupt und Arduino


### Sketch 1

-  Tonhöhe-Randomisierung mit einem Knopf (ohne Interrupt)

![no_intterupt](img/no_interrupt.png)

### Sketch 2

- einmalige Aktualisierung

![no_intterupt_improved](img/no_interrupt_improved.png)

### Sketch 3

- mit Hardware Interrupt

![hardware_interrupt](img/interrupt.png)

## Arduino und Timer

ATMega168/328 hat "3 Hardware Timers". Diese Timers funktionieren unabhängig von dem Program und triggern entsprechende Interrupts.

- [Timer1 Website / Download](http://playground.arduino.cc/Code/Timer1)

### Sketch 4

- Blinkende LED mit Timer

![timer 1](img/timer1_1.png)

### Sketch 5

- Ton mit Timer

![timer 2](img/timer1_2.png)


### Sketch 6

- Array und Timer

![Rhythm](img/rhythm.png)

### Sketch 7

- tone() Funktion

![Rhythm](img/tone.png)

### Sketch 8

- mit notone() Funktion

![Rhythm](img/noTone.png)


## PWM (Pulse Wave Modulation)

-[PWM wiki](http://de.wikipedia.org/wiki/Pulsweitenmodulation)
-[Arduino PWM](http://arduino.cc/en/Tutorial/PWM)

### Sketch 9

- als Hellichkeit

![Brightness](img/brightness.png)

### Sketch 10

- Dimmen

![dimming](img/dimming.png)

### Sketch 11

- AnalogRead und AnalogWrite

![analogin_out](img/in_out.png)

## EEPROM und Arduino

EEPROM (Electrically Erasable Programmable Read-Only Memory )

ist eine kleine Festplatte auf dem Arduino. Die Daten auf EEPROM wird nicht verloren, wenn man den Arduino ausschaltet. Die Größe von EEPROM auf Arduino Uno lautet 1024 Bytes (=1KB sehr klein! ).

- Man kann nicht mehr als 100,000 EEPROM überschreiben.

## Sketch 12

- Beispiel mit eeprom

![](img/eeprom.png)


## Arduino und SPI 

SPI - Serial Periferal Interface

SPI ermöglicht einen Arduino mit anderen ICs (z.B ADC) zu kommunizieren.

![](img/spi.png)

Man kann auch mehrere SPI mit einem Arduino verbinden.

![](img/many.png)

#### SPI Verbindung mit einem externen ADC 

MicroCHIP MCP 3208 ADC

![](img/3208.jpg)

- [Datasheet](http://ww1.microchip.com/downloads/en/DeviceDoc/21298e.pdf)

### Sketch 13

- SPI Verbindung mit mcp3208 ADC


![spi](img/spi_adc.png)


- Stromkreis


![spi_circuit](img/spi_adc_circuit.png)



