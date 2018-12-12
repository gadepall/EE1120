int T, Q=0,NQ;
int s, r;
int CK = 1;
void setup()
{
  pinMode(3,INPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
}
void loop()
{
  T = digitalRead(3);
  
if (T == HIGH) {     
  s = !(CK&&T&&NQ);
  r = !(CK&&T&&Q);
  Q=!(s&&NQ);
  NQ=!(r&&Q);
  
  digitalWrite(7,Q);
  delay(1000);
  digitalWrite(8,NQ);
  } 
  else {
   s = !(CK&&T&&NQ);
  r = !(CK&&T&&Q);
  Q=!(s&&NQ);
  NQ=!(r&&Q);
  
  digitalWrite(7,Q);
  digitalWrite(8,NQ);
  }
}

