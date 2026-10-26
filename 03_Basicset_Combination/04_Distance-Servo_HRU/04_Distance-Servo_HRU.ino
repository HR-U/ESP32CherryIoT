#include <ESP32Servo.h> //ESP32Servo by Kevin Harrington

const int trigPin = 3; //3:ConnectorA 4:ConnectorB
const int echoPin = 1; //1:ConnectorA 5:ConnectorB
const int motorPin = 4; //3:ConnectorA 4:ConnectorB

float Duration = 0; //Received Interval Time
float Distance = 0; //Calculation results from Duration

Servo myservo;

void setup() {
  Serial.begin(115200);
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  myservo.attach(motorPin);
}

void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); //Ultrasonic output
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  Duration = pulseIn(echoPin, HIGH); //Input from sensor
  Duration = Duration/2; //Half the round trip time
  Distance = Duration*340*100/1000000; //Set sonic speed to 340 m/s

 if (Distance < 30) {
  //Look at the serial monitor
  Serial.print("Kyo-Ri:");
  Serial.print(Distance);
  Serial.println("cm");
  delay(500);

  // 0-120 right
  for(int angle = 0; angle <= 120; angle++) {                        
    myservo.write(angle);
    delay(15);
  }
  // 120-0  left 
  for(int angle = 120; angle >= 0; angle--) {                 
    myservo.write(angle);  
    delay(15);      
  }
  } else {
  
  //Look at the serial monitor
  Serial.print("Kyo-Ri:");
  Serial.print(Distance);
  Serial.println("cm");
  delay(500);
  }
}