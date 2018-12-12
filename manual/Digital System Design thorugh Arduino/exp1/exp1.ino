
int A, B, C, D, E;

void setup() {
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {

 A = digitalRead(3);
 B = digitalRead(4);

   C= !A;
   D = A&&B;
   E = A||B;

 digitalWrite(5, C);
 digitalWrite(6, D);
 digitalWrite(7, E);
}
