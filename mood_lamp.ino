void setup() {
  // put your setup code here, to run once:
 int a;
  // put your setup code here, to run once:

  for(a=2; a<14; a++){
    pinMode(a,OUTPUT);
    }
    pinMode(2,INPUT);
    //digitalWrite(2,1);
  Serial.begin(9600);
  int inc;
  for(inc = 0; inc<11; inc++){
    push(analogRead(2));
  }
  attachInterrupt(digitalPinToInterrupt(2),changeLED, FALLING);
  avg();
}

unsigned long av;
unsigned long rec[10];

void putp(int a, int b, int c){
    if (a <2){
      pinMode(6,OUTPUT);
      digitalWrite(6,a);
    }
    else pinMode(6,INPUT);

    if (b <2){
      pinMode(5,OUTPUT);
      digitalWrite(5,b);
    }
    else pinMode(5,INPUT);

    if (c <2){
      pinMode(4,OUTPUT);
      digitalWrite(4,c);
    }
    else pinMode(4,INPUT);;
//    pinMode(4,INPUT);pinMode(5,INPUT);pinMode(6,INPUT);
  }
void glowLEDs(int a, int b, int c, int d, int e, int f){
    if(a) putp(0,2,1);    if(b) putp(2,1,0);

    if(c) putp(2,0,1);    if(d) putp(1,2,0);

    if(e) putp(1,0,2);    if(f) putp(0,1,2);
  }




int push(unsigned long val){
    int i;
    for(i = 0; i<9; i++){
        rec[i] = rec[1+i];
      }
    rec[9]=limQB(val);
  }

unsigned long avg(){
    int i;
    unsigned long a=0;
    for(i=0; i<10; i++){
        a= a+rec[i];
      }
    av = a/10;
    return a/10;
  }

float fix(float num){
    if(num > 255)num = 255;
    if(num < 0) num = 0;
    return num;
  }

unsigned long limQB(unsigned long n){
    if (n>1000) return 1000000000;
    return n*n*n;
  }



int select = 0;
int inc = 0;
float redv = 0;
int redp = 9;
float bluev = 0;
int bluep = 11;
float greenv = 0;
int greenp = 10;
unsigned long lastInt = 0;

void adapt(){
    if(select%3 == 0 && (redv == 0 || redv == 255)){
      putp(0,0,1);
    }
    if(select%3 == 0 && !(redv == 0 || redv == 255)){
      if(inc%2==0) putp(2,1,0);
      else putp(2,0,1);
    }
    if(select%3 == 1 && (bluev == 0 || bluev == 255)){
      putp(1,0,0);
    }
    if(select%3 == 1 && !(bluev == 0 || bluev == 255)){
      if(inc%2==0) putp(0,1,2);
      else putp(1,0,2);
    }
    if(select%3 == 2 && (greenv == 0 || greenv == 255)){
      putp(1,1,0);
    }
    if(select%3 == 2 && !(greenv == 0 || greenv == 255)){
      if(inc%2==0) putp(0,2,1);
      else putp(1,2,0);
    }

  }

void changeLED(){
    unsigned long thisInt = millis();
    if(thisInt - lastInt>500){
        select++;
        inc = 0;
    }
    Serial.println(select);
    lastInt = thisInt;
  }

void loop() {
  // put your main code here, to run repeatedly:
int flag = 0;
int t = 0;
analogWrite(bluep, bluev);
  analogWrite(redp, redv);
  analogWrite(greenp, greenv);
  adapt();
unsigned long currentLDRV = analogRead(2);
while(av/limQB(currentLDRV)>10){
  analogWrite(bluep, bluev);
  analogWrite(redp, redv);
  analogWrite(greenp, greenv);
  adapt();
  currentLDRV = analogRead(2);
  if (1){
      if (inc%2==0){
          if(select%3==0 && redv<255){
            if(redv==0)redv = 2;
            redv = fix(redv*1.1);

            }
          if(select%3==1 && bluev<255){
              if(bluev==0){bluev = 2;}
             bluev = fix(bluev*1.1);
            }
          if(select%3==2 && greenv<255){
              if(greenv==0)greenv = 2;
            greenv = fix(greenv*1.1);
            }
        }
      if (inc%2==1){
          if(select%3==0 && redv>0){
            redv = fix(redv*0.9);
            }
          if(select%3==1 && bluev>0){
              bluev = fix(bluev*0.9);
            }
          if(select%3==2 && greenv>0){
              greenv = fix(greenv*0.9);
            }
        }
    }
    delay(1000);
    t++;
    if (flag == 0 && t==2) flag =1;
 }
  if(flag==1){
      inc++;
    }
}
