## MIDI

Was ist MIDI?

- MIDI = Musical Instrument Digital Interface
- Protokoll

[MIDI Manufacturer Association](http://www.midi.org) 
[History of MIDI](http://www.midi.org/aboutmidi/tut_history.php)

- serial (nicht parallel)
- sehr alt (seit 1981 / 32 Jahre Alt!!)
- sehr langsam ( 31250 bps = 3907 bytes = max. 1302 MIDI messages pro Sekunde)
	- USB 2.0 ...  480 mbps =  4800000000 bps
	- USB 3.0 ... 5120 mbps = 51200000000 bps 
---
MIDI Kable

- [Making your own MIDI cables](http://www.colomar.com/Shavano/midi_cable.html)

---

MIDI Message besteht aus 3 Bytes.

- Status Byte - Data Byte1 - Data Byte2

Status Byte ist immer gleich oder großer als 128
und Data Bytes sind immer weniger als 128

- [Table of MIDI Message](http://www.midi.org/techspecs/midimessages.php)

---
### Patch 1

![raw midi](img/patch1.png)

Alle musikalische Daten in MIDI sind tatsächlich 3 Zahlen!

---
### Patch 2

![](img/patch2.png)

Drei Zahlen an midiout shicken.

---
### Patch 3

![](img/patch3.png)

Wir können auch drei Zahlen schreiben und an "midiout" schicken.

---
### Patch 4

MIDI Objekt füe Menschen

![](img/patch4.png)

---
### Patch 5

"makenote" erzeugt note on/note off messages 

![](img/patch5.png)

---
### Patch 6

- Geige = 41
- Shakuhachi = 78
- Gun Shot = 128

![](img/patch6.png)

[Liste der Instrumenten](http://de.wikipedia.org/wiki/General_MIDI)

---
### Patch 7

Zwei Instrumente gleichzeitig benutzen

![](img/patch7.png)

---
### Patch 8 (Quiz)

Split Keyboard

Alle töne höher als C1 = Geige, tiefer als C1 = Klavier

![](img/patch8.png)

---
### Patch 9

"detonate" ist ein MIDI Sequencer in Max

![](img/patch9.png)

[Kostenlose MIDI Datei](http://www.piano-e-competition.com/midi_2011.asp)

---
### Patch 10

Transposition mit MIDI-Keyboard
![](img/patch10.png)

---
### Patch 11

MIDI Aufnahme

![](img/patch11.png)

---

Tim Exile (MIDI Interface Virtuoso)

[Youtube Demo](http://www.youtube.com/watch?v=9r38r3BIgew)
[Finger](http://www.youtube.com/watch?v=wrj6pkQloJM&list=RD4N4P7v-iJRk)

---
### Patch 12

Arpegiator

![](img/patch12.png)

---

### Patch 13
![](img/patch13.png)

stripnote ignoriert note off message

---
### Patch 14 (Quiz)
![](img/patch14.png)

wenn man die c1 Taste drückt , wird das aufgenommene Sample wiedegegeben.


### Patch 15 (Quiz)

1. nimm deine Stimme (c1) auf.
2. mit MIDI Keyboard das aufgenommene Sample wiedergeben. Die tonhöhe des wiedergegebenen Samples muss die Tonhöhe von der Taste sein.

---
### Patch 16

![](img/patch16.png)

- mtof ... MIDI note number to frequency
- ftom ... frequency to MIDI note number

---
### Patch 17

![](img/patch17.png)

- velocity steuert die Lautstärke

---
### Patch 18 (Quiz)

![](img/patch18.png)

- weicherer Anfang und weichere Endung

---
### Patch 19

- adsr~

![](img/patch19.png)

---
### Patch 20

- typische SynthPad


![](img/patch20.png)



---
### Patch 21

- kslider / Polyphonic mode

![](img/patch21.png)


---
### Patch 22

- polyphonic synthesizer

![](img/patch22.png)

![](img/patch22_sub.png)


