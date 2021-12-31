#define enA 8
#define in1 9
#define in2 10
#define enB 13
#define in3 11
#define in4 12



void setup() {
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
   
  // Set initial rotation direction
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
   digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}
void loop() {

  analogWrite(enA, 255); // Send PWM signal to L298N Enable pin
  // Read button - Debounce
    analogWrite(enB, 255); // Send PWM signal to L298N Enable pin
  // Read button - Debounce
  
    digitalWrite(in1,HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    
  
    delay(20);
}
