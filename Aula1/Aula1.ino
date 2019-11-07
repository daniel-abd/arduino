
int iPin = 13;
int iDelay = 25;

void setup() {

  Serial.begin(9600);
  pinMode(iPin, OUTPUT);
}

void loop() {

  digitalWrite(iPin, HIGH);
  delay(iDelay);
  digitalWrite(iPin, LOW);
  delay(iDelay);
}
