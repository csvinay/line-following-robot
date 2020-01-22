# i want to create this code for both black and white lines
const int ENA = 5;
const int IN1 = 10;
const int IN2 = 11;
const int IN3 = 12;
const int IN4 = 13;
const int ENB = 9;
int x1 = 2;
int x2 = 3;
int x3 = 4;
int x4 = 6;
int x5 = 7;
int x6 = 8;
int SN1 = digitalRead(x1);
int SN2 = digitalRead(x2);
int SN3 = digitalRead(x3);
int SN4 = digitalRead(x4);
int SN5 = digitalRead(x5);
int SN6 = digitalRead(x6);


void setup() {
  //IR Sensor Array//
  pinMode(SN1, INPUT);
  pinMode(SN2, INPUT);
  pinMode(SN3, INPUT);
  pinMode(SN4, INPUT);
  pinMode(SN5, INPUT);
  pinMode(SN6, INPUT);
  //L298 N motor //
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

}

void loop() {
 SN1 = digitalRead(x1);
 SN2 = digitalRead(x2);
 SN3 = digitalRead(x3);
 SN4 = digitalRead(x4);
 SN5 = digitalRead(x5);
 SN6 = digitalRead(x6);
  //FORWARD//
  if (SN1 == LOW && SN2 == LOW && SN3 == HIGH && SN4 == HIGH && SN5 == LOW && SN6 == LOW)
  {
    analogWrite(ENA, 255);
    analogWrite(ENB, 255);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
  }
  //STOP//
  else if (SN1 == HIGH && SN2 == HIGH && SN3 == HIGH && SN4 == HIGH && SN5 == HIGH && SN6 == HIGH)
  {
    analogWrite(ENA, 0);
    analogWrite(ENB, 0);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
  }
  //CURRVY LEFT//

  else if (SN1 == LOW && SN2 == LOW && SN3 == LOW && SN4 == LOW && SN5 == HIGH && SN6 == HIGH)
  {
    analogWrite(ENA, 255);
    analogWrite(ENB, 100);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
  }
  //SHARP LEFT//
  else if (SN1 == HIGH && SN2 == HIGH && SN3 == HIGH && SN4 == LOW && SN5 == LOW && SN6 == LOW)
  {
    analogWrite(ENA, 255);
    analogWrite(ENB, 0);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
  }
  //CURVY RIGHT//

  else if (SN1 == HIGH && SN2 == HIGH && SN3 == LOW && SN4 == LOW && SN5 == LOW && SN6 == LOW)
  {
    analogWrite(ENA, 100);
    analogWrite(ENB, 255);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
  }
  //SHARP RIGHT//
  else if (SN1 == LOW && SN2 == LOW && SN3 == LOW && SN4 == HIGH && SN5 == HIGH && SN6 == HIGH)
  {
    analogWrite(ENA, 0);
    analogWrite(ENB, 255);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
  }
 
}
