int A, B, D, Bo;

void setup() {
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
 A = digitalRead(3);
 B = digitalRead(4);
    D = (A&&!B)||(!A&&B);
    Bo = !A&&B;
 digitalWrite(5, D);
 digitalWrite(6, Bo);
}


