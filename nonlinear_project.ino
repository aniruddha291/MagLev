const int motorPin1 = 3; // First PWM pin connected to the motor
const int motorPin2 = 4; // Second PWM pin connected to the motor
const int motorPWM = 5; // PWM pin for controlling motor speed

void setup() {
  pinMode(motorPin1, OUTPUT); // Set motor pin 1 as an output
  pinMode(motorPin2, OUTPUT); // Set motor pin 2 as an output
  pinMode(motorPWM, OUTPUT); // Set motor PWM pin as an output
  Serial.begin(9600); // Start serial communication for debugging
}

void loop() {
  // Ramp up the motor speed gradually
  digitalWrite(motorPin1, HIGH); // Corrected function name
  digitalWrite(motorPin2, LOW);

  analogWrite(motorPWM, 220); // Set motor speed
  delay(300000); // 3-second delay


}
