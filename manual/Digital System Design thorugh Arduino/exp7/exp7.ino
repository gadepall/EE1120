int A,B,C,D,a,b;
// A = D0, B= D1, C =D2, D = D3, a=A0; b = A1;

void setup() {
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  a = digitalRead(3);  
  b = digitalRead(4); 
  
  A = !a&&!b;
  B = a&&!b;
  C = !a&&b;
  D = a&&b;
  
 digitalWrite(5, A);
 digitalWrite(6, B);
 digitalWrite(7, C);
 digitalWrite(8, D);
}

