
int trigPin=13;
int echoPin=12;
int ledPin=2;
float duration,distance; 

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin (9600);
  }

void loop() {
//digitalWrite(trigPin, LOW);
digitalWrite(trigPin, HIGH);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = duration*0.034/2;
Serial.print("Distance:");
Serial.println(distance);
if(distance<10)
{
digitalWrite(ledPin,HIGH);
}
else
{
digitalWrite(ledPin,LOW);
};
}
