int del = 5;
int del2 = 0;
int refresh =15;
int d1 =2;
int d2 =3;
int d3 =4;
int d4 =5;
int a =6;
int b =7;
int c =8;
int d =9;
int e =10;
   int f =11;
int g =12;
int dp =13;
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
pinMode(dp,OUTPUT);
pinMode(A2,INPUT);
}
int mode =1;
int i=0;
int x=0;
int y=0;
void loop() {
  int swanalog = analogRead(A3);
  if(swanalog>=0&&swanalog<=15){//////////////////sabse niche wale switch se display pot value se mode2(refresh rate wale) program mein chala jaega
    mode =2;
//    delay(50);
  }
  if(swanalog>=815&&swanalog<=825){///////////////sabse upar wale switch se refresh rate se display pot value mein chala jaega
    mode=1;
   //del=0;
//    delay(50);
  }
int i = map(analogRead(A2),95,1023,0,1023);
if(mode==2){
del2 = map(analogRead(A2),95,1023,0,40);}
//for(int i=0;i<9999;i++){
  int t1= i%10;
int t2 = i/10;
int t3 = t2%10;
int t4 = t2/10;
int t5 = t4%10;
int t6 = t4/10;
int t7 = t6%10;
//int t8 = t8/10;
printall(t7,t5,t3,t1);
}
void printall(int q,int w,int e,int r){
  for(int i=0;i<15;i++){
  print1(q,2);
  delay(del2);
  print1(w,3);
  delay(del2);
  print1(e,4);
  delay(del2);
  print1(r,5);
  delay(del2);
}}
void print1(int x , int digit)
{
  if(digit == 2){
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    }
    if(digit == 3){
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    }
    if(digit == 4){
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    }
    if(digit == 5){
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
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
digitalWrite(dp,LOW);
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
digitalWrite(dp,LOW);
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
digitalWrite(dp,LOW);
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
digitalWrite(dp,LOW);
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
digitalWrite(dp,LOW);
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
digitalWrite(dp,LOW);
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
digitalWrite(dp,LOW);
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
digitalWrite(dp,LOW);
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
digitalWrite(dp,LOW);
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
digitalWrite(dp,LOW);
}
//delay(del2);
}

