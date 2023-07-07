byte y =10;
byte g =9;
byte r =11;
int ron = 1000;
int yon = 120;
int off = 120;
int von = 2000;
void setup() {
  
  pinMode (y,OUTPUT);
  pinMode (r,OUTPUT);
 pinMode (g,OUTPUT);
}
void loop() {
  
  digitalWrite(r,HIGH);
    delay(ron);
  digitalWrite(y,HIGH);
    delay(yon);
digitalWrite(y,LOW);
delay(yon);
  digitalWrite(y,HIGH);
    delay(yon);
digitalWrite(y,LOW); 
delay(yon);
digitalWrite(y,HIGH);
    delay(off);
digitalWrite(y,LOW);
digitalWrite(r,LOW);
digitalWrite(g,HIGH);
delay(von);
digitalWrite(g,LOW);
delay(off);
}
