const int ruptPin = 3; //3:ConnectorA 4:ConnectorB
const int vibPin = 4; //3:ConnectorA 4:ConnectorB

int tukaCnt = 0;

void setup(){
  pinMode(ruptPin, INPUT);
  pinMode(vibPin, OUTPUT);
  Serial.begin(115200);
}

void loop(){
  //Look at the serial monitor
  if (digitalRead(ruptPin)==LOW) {
    Serial.println("Interrupt!");
    tukaCnt = tukaCnt + 1;
  } else {
    Serial.println("...");
  }

  if(tukaCnt >= 5){
      digitalWrite(vibPin, HIGH);
  delay(1000);
  digitalWrite(vibPin, LOW);
  tukaCnt =0;
  Serial.println("5kai");  

  }

  delay(500);



}