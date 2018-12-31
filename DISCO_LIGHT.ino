

void setup() {
 pinMode(5,INPUT);

}

void loop() {

int n = analogRead(A1);
int i=0;
i = map(n,0,1023,0,7);
//int a=0;  int i=0;
//int d = digitalRead(13);
//for(int i =0;i<6;){

//  int bs = digitalRead(13);
  // if(bs==HIGH){
    //i++;
    
 switch(i) 
{ case 0 : pinMode(11,INPUT);
 pinMode(9,OUTPUT);
 pinMode(3,OUTPUT);
 digitalWrite(9, LOW);
 digitalWrite(3,HIGH);

delay(100);
break;  


 case 1 :
 pinMode(3,INPUT);
 pinMode(9,OUTPUT);
 pinMode(11,OUTPUT);
 digitalWrite(9, LOW);
 digitalWrite(11,HIGH);

delay(100);
break;

  case 2 :
 pinMode(9,INPUT);
 pinMode(3,OUTPUT);
 pinMode(11,OUTPUT);
 digitalWrite(3, HIGH);
 digitalWrite(11,LOW);

delay(100);
break;

 case 3 :
 pinMode(9,INPUT);
 pinMode(3,OUTPUT);
 pinMode(11,OUTPUT);
 digitalWrite(3, LOW);
 digitalWrite(11,HIGH);

delay(100);
break;

case 4 :
 pinMode(3,INPUT);
 pinMode(11,OUTPUT);
 pinMode(9,OUTPUT);
 digitalWrite(9, HIGH);
 digitalWrite(11,LOW);

delay(100);
break;

 case 5 :
 pinMode(11,INPUT);
 pinMode(9,OUTPUT);
 pinMode(3,OUTPUT);
 digitalWrite(9, HIGH);
 digitalWrite(3,LOW);
 
delay(100); 
break; 

  
}
}
