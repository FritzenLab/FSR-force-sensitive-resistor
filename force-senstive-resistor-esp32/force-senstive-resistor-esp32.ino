// These constants won't change. They're used to give names to the pins used:
const int analogInPin = 2; 
int sensorValue = 0; 
const int led = 8;

void setup() {
  
  Serial.begin(115200);
  pinMode(8, OUTPUT);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
 


  // print the results to the Serial Monitor:
  Serial.print("sensor = ");
  Serial.println(sensorValue);
  
  if(sensorValue > 2400){
    digitalWrite(led, LOW); // here should be HIGH, but logic in this ESP32-C3 Super mini is inverted
  }else{
    digitalWrite(led, HIGH);
  }
  
  delay(250);
}
