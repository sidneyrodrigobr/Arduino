void setup() {
   pinMode (2, INPUT_PULLUP);
   pinMode (13, OUTPUT);

   pinMode (4, INPUT_PULLUP);
   pinMode (5, OUTPUT);


}

void loop() {
  
   
   digitalWrite (13, 1-digitalRead (2)); 
   digitalWrite (5, 1-digitalRead (4)); //-1 altera para a tecla acender ao inves de apagar quando preciono o botão

}
