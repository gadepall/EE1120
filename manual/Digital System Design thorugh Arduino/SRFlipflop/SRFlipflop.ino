int S, R, Q=0,NQ;
int s, r;
int CK = 1;
void setup()
{
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
}
void loop()
{
  S = digitalRead(3);
  R = digitalRead(4);
  
  s = !(CK&&S);
  r = !(CK&&R);
  Q=!(s&&NQ);
  NQ=!(r&&Q);
  
  digitalWrite(7,Q);
  digitalWrite(8,NQ);
}

