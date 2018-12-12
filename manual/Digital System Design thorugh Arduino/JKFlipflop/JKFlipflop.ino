int J, K , Q=0,NQ;
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
  J = digitalRead(3);
  K = digitalRead(4);

  s = !(CK&&J&&NQ);
  r = !(CK&&K&&Q);
  Q=!(s&&NQ);
  NQ=!(r&&Q);
  
 // As toggle is at J =1, K =1
// To observe the toggle delay is given 
  if (J == HIGH, K == HIGH) {     

  digitalWrite(7,Q);
  delay(1000);
  digitalWrite(8,NQ);
  } 
  else {
 
  digitalWrite(7,Q);
  digitalWrite(8,NQ);
  }

}

