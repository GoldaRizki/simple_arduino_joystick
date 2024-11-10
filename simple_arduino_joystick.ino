int vertical, horizontal;
bool tombol;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  vertical = analogRead(A0);
  horizontal = analogRead(A1);
  tombol = digitalRead(3);

  Serial.print("Vertical: ");
  Serial.print(vertical);

  Serial.print(" | Horizontal: ");
  Serial.print(horizontal);

  Serial.print(" | Click: ");
  Serial.println(tombol);

  delay(500);

}
