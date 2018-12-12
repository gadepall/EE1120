int A,B,C,D,a,b;
// A = D0, B= D1, C =D2, D = D3, a=A0; b = A1;
int I0,I1, I2, I3, Y;
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
  
  A = !a&&!b&&I0;
  B = a&&!b&&I1;
  C = !a&&b&&I2;
  D = a&&b&&I3;
  
  Y = A||B||C||D;
  
 digitalWrite(5, Y);
}

