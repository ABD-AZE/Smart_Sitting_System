
const int buzzer =9;
const int trigpin1 = 10;
const int echopin1 = 11;
const int trigpin2 = 12;
const int echopin2 = 13;
long duration1;
long duration2;
int distance2;
int distance1;
unsigned long startTime;
bool buzzerActive = false;
void setup() { 
  Serial.begin(9600); 
  pinMode(trigpin1,OUTPUT);
  pinMode(echopin1,INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(trigpin2,OUTPUT);
  pinMode(echopin2,INPUT);
    
} 
  
void loop() { 
  int fsr1,fsr2,fsr3,fsr4; 
  fsr1 = analogRead(0); 
  fsr2 = analogRead(1);
  fsr3 = analogRead(2);
  fsr4 = analogRead(3);


    digitalWrite(trigpin1, LOW);
    delayMicroseconds(2);

    digitalWrite(trigpin1, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigpin1, LOW);
    duration1 = pulseIn(echopin1, HIGH);
    distance1 = duration1 * 0.034 / 2;

   

    digitalWrite(trigpin2, LOW);
    delayMicroseconds(2);
    digitalWrite(trigpin2, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigpin2, LOW);
    duration2 = pulseIn(echopin2, HIGH);
    distance2 = duration2 * 0.034 / 2;
    

  if(fsr1>100||fsr2>100||fsr3>100||fsr4>100) { 
    if((abs(distance1-distance2)>6)&&distance1<1000&&distance2<1000){
      delay(2000);
      if((abs(distance1-distance2)>6)&&distance1<1000&&distance2<1000){
        digitalWrite(buzzer,HIGH);
        delay(1000);
      }
      else{
        digitalWrite(buzzer,LOW);
      }
    }
    else{
      digitalWrite(buzzer,LOW);
    }
    if (abs(fsr1-fsr2) > 300) {
      delay(1000);
      if(abs(fsr1-fsr2)>300){
        digitalWrite(buzzer,HIGH);
        delay(1000);
      }
      else{
        digitalWrite(buzzer,LOW);
      }
    }
    else{
      digitalWrite(buzzer,LOW);
    }
    
    if (abs(fsr3-fsr4) > 100) {
      if (abs(fsr3-fsr4) > 100) {
      delay(1000);
      if(abs(fsr3-fsr4)>100){
        digitalWrite(buzzer,HIGH);
        delay(1000);
      }
      else{
        digitalWrite(buzzer,LOW);
      }
    }
    else{
      digitalWrite(buzzer,LOW);
    }
    }
    Serial.println("fsr1:"); 
    Serial.println(fsr1); 

    Serial.println("fsr2:"); 
    Serial.println(fsr2); 

    Serial.println("fsr3:"); 
    Serial.println(fsr3); 

    Serial.println("fsr4:"); 
    Serial.println(fsr4);
    Serial.print("Distance1: ");
    Serial.println(distance1);
    Serial.print("Distance2: ");
    Serial.println(distance2);
  } 
  else{
    digitalWrite(buzzer,LOW);
  }
  delay(1000);
}  