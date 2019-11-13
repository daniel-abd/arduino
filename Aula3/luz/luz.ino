int analogPin = A5;
int iPinLed = 13;

int val = 0;  // variable to store the value read

void setup() {
  Serial.begin(9600);           //  setup serial
  pinMode(iPinLed, OUTPUT);
  digitalWrite(iPinLed, HIGH);
}

void loop() {
  val = analogRead(analogPin);  // read the input pin
  if ( val < 700 ) {
    digitalWrite(iPinLed, HIGH);
  }
  else {
    digitalWrite(iPinLed, LOW);
  }
  Serial.println(val);
}
