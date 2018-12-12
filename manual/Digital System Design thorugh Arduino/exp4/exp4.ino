int A, B, S, C;

void setup() {
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
 A = digitalRead(3);
 B = digitalRead(4);
    S = (A&&!B)||(!A&&B);
    C = A&&B;
 digitalWrite(5, S);
 digitalWrite(6, C);
}
