const int trigPin = 3; //3:ConnectorA 4:ConnectorB
const int echoPin = 1; //1:ConnectorA 5:ConnectorB
const int ledPin = 4; //3:ConnectorA 4:ConnectorB 10:Builtin

float Duration = 0; //Received Interval Time
float Distance = 0; //Calculation results from Duration
  
void setup() {
  Serial.begin(115200);
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(ledPin, OUTPUT);
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

  //Look at the serial monitor
  Serial.print("Kyo-Ri:");
  Serial.print(Distance);
  Serial.println("cm");
  delay(500);

  if (Distance < 10) { 
    digitalWrite(ledPin, HIGH); //ON
    Serial.println("近い");
  } else {

  if (Distance < 20) {     
    digitalWrite(ledPin, HIGH); //ON
    delay(8); //0.5sec
    digitalWrite(ledPin, LOW); //OFF
    delay(8); //0.5sec   
    Serial.println("わりと近い");
  } else {

  if (Distance < 30) { 
    digitalWrite(ledPin, HIGH); //ON
    delay(16); //0.5sec
    digitalWrite(ledPin, LOW); //OFF
    delay(128); //0.5sec   
    Serial.println("結構近づいた");
  } else {

  if (Distance < 40) { 
    digitalWrite(ledPin, HIGH); //ON
    delay(24); //0.5sec
    digitalWrite(ledPin, LOW); //OFF
    delay(256); //0.5sec   
    Serial.println("そこそこ近づいた");
  } else {

  if (Distance < 50) { 
    digitalWrite(ledPin, HIGH); //ON
    delay(32); //0.5sec
    digitalWrite(ledPin, LOW); //OFF
    delay(512); //0.5sec   
    Serial.println("まあまあ近づいた");
  } else {

  if (Distance < 60) { 
    digitalWrite(ledPin, HIGH); //ON
    delay(40); //0.5sec
    digitalWrite(ledPin, LOW); //OFF
    delay(1024); //0.5sec   
    Serial.println("少し近づいた");
  } else {

  if (Distance < 75) { 

    digitalWrite(ledPin, HIGH); //ON
    delay(48); //0.5sec
    digitalWrite(ledPin, LOW); //OFF
    delay(2048); //0.5sec   
    Serial.println("ちょっと近づいた");

  } else {
    digitalWrite(ledPin, LOW); //OFF
    Serial.println("遠い");
  }
  }
  }
  }
  }
  }
  }

}