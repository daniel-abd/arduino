
/**
   Leitura digital de um interruptor simples
   @author Daniel Abdalla
*/
int iPinLed = 13;
int iPinLed2 = 12;
int iDelay = 100;
int iPinBtn1 = 6;
int iPinBtn2 = 7;
bool bLed = false;

void setup() {

  Serial.begin(9600);
  pinMode(iPinLed, OUTPUT);
  digitalWrite(iPinLed, LOW);
  pinMode(iPinBtn1, INPUT);
  pinMode(iPinBtn2, INPUT);
}

void loop() {
  if ( digitalRead(iPinBtn1) == HIGH && bLed == false ) {
    digitalWrite(iPinLed, HIGH);
    bLed = true;
  } else if ( digitalRead(iPinBtn1) == HIGH && bLed == true ) {
    digitalWrite(iPinLed, LOW);
    bLed = false;
  }

}
