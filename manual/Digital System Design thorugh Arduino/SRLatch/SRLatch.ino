int S, R, Q=0,NQ;
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

  NQ=!(R&&Q);
  Q=!(S&&NQ);
  
  digitalWrite(7,Q);
  digitalWrite(8,NQ);
}

