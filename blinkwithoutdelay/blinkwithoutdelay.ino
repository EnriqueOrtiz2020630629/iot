const int ledPin = LED_BUILTIN;
int ledState = LOW;
unsigned long previousMillis = 0;
const long interval = 1000;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  unsigned long currentMillis = millis();

  if(currentMillis - previousMillis >= interval){
    previousMillis = currentMillis;
  
	Serial.print(!ledState);
  if(ledState == LOW) {
    ledState = HIGH;
    
  } else {
    ledState = LOW;
  }
  digitalWrite(ledPin, ledState);
  }
}
