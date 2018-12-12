int A, B, C, D;

void setup() {
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
 A = digitalRead(3);
 B = digitalRead(4);
    C = (A&&!B)||(!A&&B);
// XOR i.e. Exclusive OR operation on A,B
    D = !(C);
// XNOR i.e. Exclusive NOR operation on A,B
 digitalWrite(5, C);
 digitalWrite(6, D);
}
