#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5
#define EN1 9
#define EN2 10
#define pot A0
 
void setup() {
pinMode (pot,INPUT);  
pinMode (IN1,OUTPUT);
pinMode (IN2,OUTPUT);
pinMode (IN3,OUTPUT);
pinMode (IN4,OUTPUT);
pinMode (EN1,OUTPUT);
pinMode (EN2,OUTPUT);
 
}

void loop() { 
int a=  analogRead(pot)/4;
analogWrite(EN1,a);
analogWrite(EN2,a);
digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW); 
digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW); 
}
