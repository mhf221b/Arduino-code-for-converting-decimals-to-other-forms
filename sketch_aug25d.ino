void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("DEC");
  Serial.print("\t");

  Serial.print("BIN");
  Serial.println();

  for (int x = 0; x<10; x++){
    Serial.print(x, DEC);
    Serial.print("\t");

    Serial.print(x, BIN);
    Serial.println();
    delay(1000);
  }

}
