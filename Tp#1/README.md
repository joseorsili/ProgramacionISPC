#### Trabajo Practico #1

 Investigar en Internet cuanta corriente pueden suministrar las salidas de Arduino. Luego buscar cuanta corriente y tensión necesitan los siguientes elementos y catalogar cuales pueden ser encendidos por nuestras salidas:

	a. Diodo LED

	b. Buzzer

	c. Rele

	d. Motor de CC

	e. Motor de CA

	f. Servomotor de aeromodelismo

	g. Motor Paso a Paso

	h. Lampara Incandescente

	i. Lampara LED

	j. Fluorescente

Las salidas de Arduino pueden suministrar diferentes cantidades de corriente dependiendo del modelo especifico y del pin utilizado. Por lo general, los pines digitales pueden suministrar alrededor de 20-40 mA de corriente, mientras que los pines analogicos pueden proporcionar una corriente similar. Sin embargo, el limite total de corriente para todos los pines suele ser alrededor de 200-400 mA en total y el voltaje de salida es tipicamente de 5V.

Detalle de la corriente y tension necesaria para cada uno de los elementos mencionados y si pueden ser encendidos por las salidas de Arduino:

a. Diodo LED:
Corriente necesaria: Vari segun el LED, pero tipicamente entre 5-20 mA.
Tension: 2-3 V (para LED comunes).
Puede ser encendido por una salida de Arduino, siempre que se utilice una resistencia en serie para limitar la corriente.

b. Buzzer:
Corriente necesaria: Varia segun el buzzer, pero suele estar en el rango de 10-30 mA.
Tension: Depende del buzzer, pero generalmente alrededor de 5 V.
Puede ser encendido por una salida de Arduino.

c. Rele:
Corriente necesaria: La corriente varia, pero podria estar en el rango de 50-150 mA.
Tension: Puede variar, pero comunmente se encuentran reles de 5V o 12V.
En general, las salidas de Arduino pueden controlar un rele utilizando un circuito de transistor para manejar la corriente mas alta requerida.

d. Motor de CC:
Corriente necesaria: Varia segun el motor, pero puede estar en el rango de 100 mA a varios amperios.
Tension: Dependiendo del motor, pero generalmente se utilizan motores de bajo voltaje, como 3-12V.
Las salidas de Arduino no son adecuadas para alimentar directamente motores de corriente continua de mayor consumo. Se necesitaria un circuito de control adicional, como un puente H, para manejar la corriente y la direccion del motor.

e. Motor de CA:
Corriente necesaria: Puede variar desde unos pocos cientos de mA hasta varios amperios.
Tension: Dependera del motor y la aplicacion.
En su mayoria, los motores de CA requieren circuitos de control mas complejos y no pueden ser controlados directamente por las salidas de Arduino.

f. Servomotor de aeromodelismo:
Corriente necesaria: Depende del servomotor, pero suele estar en el rango de 100-1000 mA.
Tension: Tipicamente 4.8-6V para servomotores estandar.
Los servomotores se pueden controlar directamente desde las salidas de Arduino.

g. Motor Paso a Paso:
Corriente necesaria: Varia segun el motor, pero podria estar en el rango de 100 mA a varios amperios.
Tension: Dependiendo del motor, pero generalmente se utilizan motores de bajo voltaje, como 3-12V.
Al igual que con los motores de corriente continua, se necesita un circuito de control adicional para manejar los motores paso a paso.

h. Lampara Incandescente:
Corriente necesaria: Dependera de la potencia de la lampara, pero puede ser bastante alta (varios amperios).
Tension: Dependera de la lampara, pero generalmente en el rango de 120V o 230V.
Las lamparas incandescentes no pueden ser controladas directamente por las salidas de Arduino debido a su alta corriente.

i. Lampara LED:
Corriente necesaria: Varia segun la lampara LED, pero suele estar en el rango de 5-20 mA.
Tension: Dependera de la lampara LED, pero generalmente en el rango de 2-3 V.
Pueden ser encendidas por una salida de Arduino con una resistencia en serie para limitar la corriente.

j. Fluorescente:
Los tubos fluorescentes y sus circuitos asociados son mucho mas complejos y requieren voltajes y corrientes especificos para su funcionamiento. No son adecuados para ser controlados directamente por las salidas de Arduino.

Podriamos decir que elementos como diodos LED, buzzers, servomotores y algunas lamparas LED pueden ser controlados directamente por las salidas de Arduino. Para otros dispositivos que requieren corrientes mas altas o circuitos de control mas complejos, es necesario utilizar componentes adicionales y circuitos externos (Ejemplos: Triac, transistores o reles)  para lograr un funcionamiento seguro y eficaz.