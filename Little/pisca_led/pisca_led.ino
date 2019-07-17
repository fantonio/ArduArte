//Programa: Pisca Led Arduino
//Data: 16/07/2019
//Autor: Fábio Ferreira

void setup() {
  // Define a porta do led como saída:
  pinMode(13, OUTPUT);  
}

void loop() {
  //Acende o led
  digitalWrite(13, HIGH);

  //Aguarda o intervalo especificado
  delay(100);

  //Apaga o led
  digitalWrite(13, LOW);

  //Aguarda o intervalo especificado
  delay(100);
}
