// Patrick Heller
// EE 201
// https://wokwi.com/projects/345897118902256210

void setup() {
  pinMode(A0, INPUT); // Set up analog pin A0 as input
  pinMode(5, INPUT); // Set up digital pin 5 as input
  pinMode(2, OUTPUT); // Set up digital pin 2 as output
  Serial.begin(9600);
}

void loop() {
  // range = 0-1024
  // at 0 = 0Hz, at 1024 = 5Hz
  int potVal = analogRead(A0); // Initialize potVal to potentiometer reading
  int delayTime = (102400/(potVal)); // Calculate delay time

  digitalWrite(2, HIGH);
  delay(delayTime);
  digitalWrite(2, LOW);
  delay(delayTime);

  delayTime = (102400/(potVal)); // Calculate delay time
  potVal = analogRead(A0); // Read new potVal
}
