void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(42, BIN);
  Serial.println();
  delay(1000);
  Serial.print(42, OCT);
  Serial.println();
  delay(1000);
  Serial.print(42, DEC);
  Serial.println();
  delay(1000);
  Serial.print(42, HEX);
  Serial.println();
  delay(1000);
}
