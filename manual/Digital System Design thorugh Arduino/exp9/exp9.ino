int S0, S1;
int Y0,Y1, Y2, Y3, I;
void setup() {
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  S0 = digitalRead(3);  
  S1 = digitalRead(4); 
  
 Y0 = !S0&&!S1&&I;
 Y1 =  S0&&!S1&&I;
 Y2 = !S0&&!S1&&I;
 Y3 =  S0&&S1&&I;
 
 digitalWrite(5, Y0);
 digitalWrite(6, Y1);
 digitalWrite(7, Y2);
 digitalWrite(8, Y3);
}

