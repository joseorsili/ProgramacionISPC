bool estado = LOW;

void setup() {
  pinMode(3, INPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  estado = digitalRead(3);

  if (estado == HIGH) {
    digitalWrite(5, HIGH);   // Enciende el LED
    delay(1000);             // Espera 1 segundo
    digitalWrite(5, LOW);    // Apaga el LED
    delay(500);              // Espera 0.5 segundos
    digitalWrite(5, HIGH);   // Enciende el LED nuevamente
    delay(1000);             // Espera 1 segundo
  }
}
