/**
   Automação simples com arduino
   @author José de Assis
*/

void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  char leitor;
  //a estrutura abaixo evita o acionamento indevido
  //dos dispositivos se não existir a comunicação
  if (Serial.available()) {
    leitor = Serial.read();
    switch (leitor) {
      case 'a':
        digitalWrite(13, !digitalRead(13));
        break;
      case 's':
        digitalWrite(12, !digitalRead(12));
        break;
    }
  }
}
