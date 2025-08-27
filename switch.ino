char protocolo = 'C';


void setup() {
  Serial.begin(9600);
  Serial.println("Inicializando...");
  
}

void loop() {
    
  if (Serial.available()) {
     char var = Serial.read();
     Serial.println(var);

     switch (var){
      case 'A' :
      Serial.println("Você digitou A ");
      break;
      case 'B' :
      Serial.println("Você digitou B ");
      break;
      case 'C' :
      Serial.println("Você digitou C ");
      break;
     }
  
  }

}
