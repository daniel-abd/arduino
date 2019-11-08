
/**
   Leitura digital de um interruptor simples
   @author Daniel Abdalla
*/
int iPinLed = 13;
int iPinLed2 = 12;
int iDelay = 100;
int iPinBtn1 = 6;
int iPinBtn2 = 7;

void setup() {

  Serial.begin(9600);
  pinMode(iPinLed, OUTPUT);
  digitalWrite(iPinLed, LOW);  
  pinMode(iPinLed2, OUTPUT);
  digitalWrite(iPinLed2, LOW);
  pinMode(iPinBtn1, INPUT);
  pinMode(iPinBtn2, INPUT);
}

void loop() {
  
  if ( digitalRead(iPinBtn1) == HIGH ) {
    digitalWrite(iPinLed, HIGH);
    digitalWrite(iPinLed2, HIGH);
  }
  if ( digitalRead(iPinBtn2) == HIGH ) {
    digitalWrite(iPinLed, LOW);
    digitalWrite(iPinLed2, LOW);
  }
}
