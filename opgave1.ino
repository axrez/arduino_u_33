int knap1pin = 4;
int knap2pin = 5;
int ledPin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(knap1pin, INPUT);
  pinMode(knap2pin, INPUT);
  pinMode(ledPin, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(digitalRead(knap1pin)) {
    digitalWrite(ledPin, HIGH);
  }
}
