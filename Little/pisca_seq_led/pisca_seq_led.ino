//Programa: Pisca Led Arduino
//Data: 16/07/2019
//Autor: Fábio Ferreira

void setup() {
  // Define a porta do led como saída:
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);  
}

void loop() {
  //Acende o led
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);

  //Aguarda o intervalo especificado
  delay(100);

  //Apaga o led
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);

  //Aguarda o intervalo especificado
  delay(100);
}
