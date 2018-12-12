int S, R, Q=0,NQ;
int s, r;
int CK = 1;
int D;
void setup()
{
  pinMode(3,INPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
}
void loop()
{
  D = digitalRead(3);	
	
  S = D;
  R = !D;
  s = !(CK&&S);
  r = !(CK&&R);
  Q=!(s&&NQ);
  NQ=!(r&&Q);
  
  digitalWrite(7,Q);
  digitalWrite(8,NQ);
}

