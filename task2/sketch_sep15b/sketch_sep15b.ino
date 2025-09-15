const int tempPin = A0;  
const int fanPin = 13;   

float temperature;

void setup() {
  Serial.begin(9600);
  pinMode(fanPin, OUTPUT);
}

float readTemperature() {
  int raw = analogRead(tempPin);
  float voltage = raw * 5.0 / 1023.0;
  float resistance = (5.0 - voltage) * 10000 / voltage; 


  float tempK = 1 / (1/298.15 + (1/3950.0) * log(resistance/10000.0));
  return tempK - 273.15; 
}

void loop() {
  temperature = readTemperature();
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C, Fan: ");

  if (temperature < 25) {
    digitalWrite(fanPin, LOW);
    Serial.println("OFF");
  } 
  else if (temperature < 30) {
   
    digitalWrite(fanPin, HIGH);
    delay(500);
    digitalWrite(fanPin, LOW);
    delay(500);
    Serial.println("50% PWM");
  } 
  else {
    digitalWrite(fanPin, HIGH); 
    Serial.println("100% PWM");
  }
}
