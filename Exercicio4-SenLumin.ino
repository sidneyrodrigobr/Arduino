byte portaLDR = A3;
byte saidaLDR = 7;

int valor_ldr = 0;

void setup () {
  Serial.begin(9600);
  Serial.println("Inicializando...");

}

void loop () {
  valor_ldr = analogRead (portaLDR);
  Serial.println(valor_ldr);
  if (valor_ldr >= 400){
    //corpo
    Serial.println("Maior que 400");
  }else{

    Serial.println("Menor que 400");

  }
  delay (1000);
}
