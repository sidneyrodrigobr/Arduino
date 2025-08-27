
void setup() {
  Serial.begin(9600);            // Inicia comunicação serial
  Serial.println("Arduino");     // Exibe uma vez ao iniciar
}

void loop() {
  Serial.println("Sidney");     // Exibe continuamente a cada 1 segundo
  delay(1000);
}
