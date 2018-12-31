int del =1;
int del1 = 5;
int d1 =A3;//d1 ki pin arduino ke 2 par h 2 to A3
int d2 =3;
int d3 =A4;
int d4 =13; //A5 khaali kiya h mood lamp ke liye
int a =A6;
int b =7;
int c =8;
int d =A7;
int e =A0;
int f =A1;
int g =12;
//int dp =13;
void setup() {
  // put your setup code here, to run once:
pinMode(d1,OUTPUT);
pinMode(d2,OUTPUT);
pinMode(d3,OUTPUT);
pinMode(d4,OUTPUT);
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
pinMode(d,OUTPUT);
pinMode(e,OUTPUT);
pinMode(f,OUTPUT);
pinMode(g,OUTPUT);
//pinMode(dp,OUTPUT);
pinMode(A2,INPUT);
}

int i=0;
int x=0;
int y=0;
void loop() {
//int i = map(analogRead(A2),95,1023,0,1023);
i = analogRead(A2);
//for(int i=0;i<9999;i++){
  int t1= i%10;
int t2 = i/10;
int t3 = t2%10;
int t4 = t2/10;
int t5 = t4%10;
int t6 = t4/10;
int t7 = t6%10;
printall(t1,t3,t5,t7);
//int t8 = t8/10;

}
void printall(int q,int w,int e,int r){
  print1(q,d1);
  delay(del);
  print1(w,d2);
  delay(del);
  print1(e,d3);
  delay(del);
  print1(r,d4);
  delay(del);
  
}
void print1(int x , int digit)
{for(int i=0;i<5;i++){
  if(digit == 2){
    digitalWrite(A3,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(A4,LOW);
    digitalWrite(13,LOW);
    }
    if(digit == 3){
    digitalWrite(A3,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(A4,LOW);
    digitalWrite(13,LOW);
    }
    if(digit == 4){
    digitalWrite(A3,LOW);
    digitalWrite(3,LOW);
    digitalWrite(A4,HIGH);
    digitalWrite(13,LOW);
    }
    if(digit == 5){
    digitalWrite(A3,LOW);
    digitalWrite(3,LOW);
    digitalWrite(A4,LOW);
    digitalWrite(13,HIGH);
    }
if(x==0)
{  
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,LOW);
//digitalWrite(dp,LOW);
}
if(x==1)
{
digitalWrite(a,LOW);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);
//digitalWrite(dp,LOW);
}
if(x==2)
{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,LOW);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,LOW);
digitalWrite(g,HIGH);
//digitalWrite(dp,LOW);
}
if(x==3)
{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,LOW);
digitalWrite(f,LOW);
digitalWrite(g,HIGH);
//digitalWrite(dp,LOW);
}
if(x==4)
{
digitalWrite(a,LOW);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
//digitalWrite(dp,LOW);
}
if(x==5)
{
digitalWrite(a,HIGH);
digitalWrite(b,LOW);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,LOW);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
//digitalWrite(dp,LOW);
}
if(x==6)
{
digitalWrite(a,HIGH);
digitalWrite(b,LOW);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
//digitalWrite(dp,LOW);
}
if(x==7)
{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);
//digitalWrite(dp,LOW);
}
if(x==8)
{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
//digitalWrite(dp,LOW);
}
if(x==9)
{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
//digitalWrite(dp,LOW);
}}
delay(del);
}

