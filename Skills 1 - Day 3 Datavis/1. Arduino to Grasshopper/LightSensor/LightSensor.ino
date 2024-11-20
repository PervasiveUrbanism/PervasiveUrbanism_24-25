int value;

void setup() {
  Serial.begin(115200);
}

void loop() {
  value = analogRead(A0);
  Serial.println(value);
}
