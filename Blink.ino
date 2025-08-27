
void setup() {
 
  pinMode(13, OUTPUT);
}


void loop() {
    digitalWrite(13, 1); // Liga LED
    delay(2000);            // Espera 2 segundos
    digitalWrite(13, 0);  // Desliga LED
    delay(8000);            // Espera 4 segundos
}
