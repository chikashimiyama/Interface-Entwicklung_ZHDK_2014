# Klasse1 Laptop als Instrument

## Dateneingänge eines Laptops

- Trackpad
- Tastatur
- Videokamera (iSight)
- Mikrofon

# Track Pad

## mousestate

![mousestate](img/ms.png)

### Patch1

- X = Frequenz
- Y = Grenzfrequenz eines Filters

![mousestate](img/ms_example.png)

### Patch2

- Fingerbewegung stuert die Lautstärke

![mousestate](img/ms2.png)

### Patch3 (Aufgabe)

- DJ-Scratching

![dj](img/ts.png)


## Multitouch

![fingerpinger](img/fingerpinger.png)

- Website von [Fingerpinger](http://www.anyma.ch/2009/research/multitouch-external-for-maxmsp/)

Mit Fingerpinger kann man folgende Fingerdaten auf dem Trackpad bekommen. 

- Frame
- Angle
- Semi-Major-Axis
- Semi-Minor-Axis
- Xpos
- Ypos
- VelocityX
- VelocityY
- Identifier
- State
- Size

- Was sind semi-major-axis und semi-minor-axis

![](img/semi.png)


### Patch4

- Winkel eines Fingers stuert Panning

![](img/multitouch1.png)

### Patch5

- After-Touch Effekt

![](img/multitouch2.png)


### Patch6 (Aufgabe)

- Distanz zwischen zwei Fingern stuert Grenzfrequenz
![](img/multitouch3.png)

### Patch7

- Winkel zwichen zwei Punkten stuert Frequenz
![](img/multitouch4.png)

### Patch8 (Aufgabe)

- Flächeinhalt eines Dreiecks steurt die Lautstärke
![](img/multitouch5.png)

---

# Tastatur

![](img/key1.png)

### Patch1

- Asciicode als Tonhöhe

![](img/key2.png)


### Patch2


- Tastatur als MIDI-Tastatur

![](img/key3.png)


### Patch3

- Coll vereinfacht "Übersätzung"

![](img/key4.png)


### Patch4

- Sequencer
 
![](img/key5.png)


### Virtuosomusiker mit Tastatur

- [Samchillian](http://en.wikipedia.org/wiki/Samchillian)
- [Demo](http://www.youtube.com/watch?v=lAAhQMU2918)

### Patch5 (Aufgabe)

- Programm Samchillian!!


---

# Mikrofon

## peakamp~
![](img/peakamp~.png)

### Patch1

- Klang triggert ein Sample

![](img/mic1.png)


### Patch2

- Klang triggert ein Sample (ohne Wiederholung )

![](img/mic2.png)

### Patch3

- als zwei Befehele

![](img/mic3a.png)


## "Music for flute" von Cort Lippe 

![](img/Cort_Flute.jpg)


- [Ausschnitt](img/Lippe-flute.wav)

### Patch4

- mapping Lautstärke - Lautstärke

![](img/mic4.png)

### Patch5
- mapping Lautstärke - Frequenz

![](img/mic5.png)


### Idee

[Maurizio Kagel - Translation - Roatation](http://noteyobservations.blogspot.de/2012/10/mauricio-kagel-rotation.html)

## Andere Objekte

## sigmund~

![sigmund](img/sigmund~.png)

[Max/MSP External](http://crca-archive.ucsd.edu/~tapel/software.html)


### zerox~
- nützlich Ton und Geräusch zu unterschieden

### edge~
- zero to non-zero / non-zero to zero transition

### rampsmooth~ / slide~
- um wicher Hülkurve zu erzeugen

### bonk~
- Attack Detector von M.Puckette


## Mogees

[Mogees](http://www.brunozamborlin.com/mogees/)


## Musik mit Laptop

[Website](http://slork.stanford.edu)
