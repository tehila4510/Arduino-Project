#include <Servo.h>
Servo myservo;
#define SERVO 10
#define BUZZER 8
#define GREEN 3
#define RED 5
#define BLUE 6
#define POWER A5  //5 ואט

#define ISENTER A1    //חיישן אור נותן נתונים אם המכונית עלתה עליו
#define ISOPEN  A0  //חיישן מרחק כשהמכונית נכנסת /פועל כמו חיישן אור
#define LED 4

int pos=0;
bool flag=false;

void setup() {
Serial.begin(9600); 

myservo.attach(SERVO);
pinMode(LED,OUTPUT);
pinMode(GREEN,OUTPUT);
pinMode(RED,OUTPUT);
pinMode(BLUE,OUTPUT);
pinMode(BUZZER,OUTPUT);
pinMode(ISENTER,INPUT);
pinMode(ISOPEN,INPUT);
pinMode(POWER,INPUT);

}

void loop() {
    if(analogRead(ISOPEN)<550)
  {
    flag=!flag;
    tone(BUZZER,1500,1000);
    delay(1000);
    noTone(BUZZER);
    delay(1000);
    for (pos = 0; pos <= 90; pos += 1) { 
    myservo.write(pos); 
    delay(10); 
    }
    for (pos = 90; pos >= 0; pos -= 1) { 
    myservo.write(pos); 
    delay(15); 
    }
    if(flag){
      RGB(255,0,0);//פונקציה המשנה צבע נורה , כרגע לאדום
    }
    else{
      RGB(0,0,255);//פונקציה המשנה צבע נורה , כרגע לירוק
    }
    if(analogRead(ISENTER)<550){
      digitalWrite(LED,HIGH);
    }
    else{
      digitalWrite(LED,LOW);
    }
  }
}

//פונקציה המשנה צבע נורה
void RGB(int x, int y, int z){
      analogWrite(RED,x);
      analogWrite(BLUE,y);
      analogWrite(GREEN,z);
}
