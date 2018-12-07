int sensorPin = A0;   // select the analog input pin for the photoresistor
int threshold = 600;  // analog input trigger level from photoresistor
int sensorValue = 0;  // photoresistor value read from analog input pin
int ledPin = 22;

void setup() 
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT); 
}

void loop() 
{

  Serial.println(analogRead(sensorPin));
  delay(1000);
  
  if (analogRead(sensorPin) < threshold) 
  {
    // low light, so switch the light (LED) on
    digitalWrite(ledPin, HIGH);
  }
  else 
  {
    // light level high enough, so switch the light (LED) off
    digitalWrite(ledPin, LOW);
  }
}
