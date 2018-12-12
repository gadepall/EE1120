int A,B,C,D,X,Y;
// A = A0, B= A1, C =A2, D = A3, X=Y0; Y = Y1;

void setup() {
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  A = digitalRead(3);  
  B = digitalRead(4); 
  C = digitalRead(5); 
  D = digitalRead(6); 
X = B||D;
Y = C||D;
 digitalWrite(5, X);
 digitalWrite(6, Y);
}

