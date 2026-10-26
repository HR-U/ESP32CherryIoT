const int swPin = 3; //3:ConnectorA 4:ConnectorB
const int motorPin = 4; //3:ConnectorA 4:ConnectorB

void setup() {
  pinMode(swPin, INPUT);
  pinMode(motorPin, OUTPUT);
}

bool swState = 0;

void loop() {
  
  if (digitalRead(swPin) == HIGH) {
    swState = !swState;
  }

  if(swState == 1){
    //Look at the serial monitor
    Serial.println("ON");
    digitalWrite(motorPin, HIGH);
    delay(300);
  } else {
    Serial.println("OFF");
    digitalWrite(motorPin, LOW);
    delay(300);
  }

}

/* not Alternate

void loop() {
  if (digitalRead(swPin) == HIGH) {
    //Look at the serial monitor
    Serial.println("Pushed"); 
    digitalWrite(motorPin, HIGH);
    delay(300);
  } else {
    Serial.println("Not Pushed");
    digitalWrite(motorPin, LOW);
    delay(300);
  }
}
*/