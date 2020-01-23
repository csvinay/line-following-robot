int senL=10; // Left sensor
int senM=12; //Center sensor
int senR=11; //Right sensor
int LF=4; //Left 1 Motor forward
int LB=3; //Left 2 Motor backward
int RF=7; //Right 1 Motor forward
int RB=6; //Right 2 Motor backward
void setup() {
 pinMode(senL,INPUT);
 pinMode(senM,INPUT);
 pinMode(senR,INPUT);
 pinMode(LF,OUTPUT);
 pinMode(LB,OUTPUT);
 pinMode(RF,OUTPUT);
 pinMode(RB,OUTPUT);
 Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
    int s1=digitalRead(senL);
    int s2=digitalRead(senM);
    int s3=digitalRead(senR);
    if (s1==LOW && s2==HIGH && s3==LOW) //forward
      { digitalWrite(LF,HIGH);
        digitalWrite(LB,LOW);
        digitalWrite(RF,HIGH);
        digitalWrite(RB,LOW);
      }
    else if ( s1==LOW && s2==HIGH && s3==HIGH) //soft right
       { digitalWrite(LF,HIGH);
         digitalWrite(LB,LOW);
         digitalWrite(RF,LOW);
         digitalWrite(RB,LOW);
       }
    else if (s1==HIGH && s2==HIGH && s3==LOW) //soft left
       { digitalWrite(LF,LOW);
         digitalWrite(LB,LOW);
         digitalWrite(RF,HIGH);
         digitalWrite(RB,LOW);
       }
    else if (s1==LOW && s2==LOW && s3==HIGH) //hard right
       { digitalWrite(LF,HIGH);
         digitalWrite(LB,LOW);
         digitalWrite(RF,LOW);
         digitalWrite(RB,HIGH);
       }
     else if (s1==HIGH && s2==LOW && s3==LOW) //  hard left
       { digitalWrite(LF,LOW);
         digitalWrite(LB,HIGH);
         digitalWrite(RF,HIGH);
         digitalWrite(RB,LOW);
       }  
   else  if( s1==LOW && s2==LOW && s3==LOW)  // stop
       {
          digitalWrite(LF,LOW);
          digitalWrite(LB,LOW);
          digitalWrite(RF,LOW);
          digitalWrite(RB,LOW); }
 // put your main code here, to run repeatedly:

}
