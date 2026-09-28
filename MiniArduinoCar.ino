const int TRIG_PIN = 10;
const int ECHO_PIN = 11;
const int LED_PIN = 12;
const int MOTOR_FATA_STANGA   = 7;
const int MOTOR_FATA_DREAPTA  = 6;
const int MOTOR_SPATE_STANGA  = 8;
const int MOTOR_SPATE_DREAPTA = 9;
const int DISTANTA_STOP = 20;
float citesteDistanta() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  long durata = pulseIn(ECHO_PIN, HIGH, 30000);
  if (durata == 0) {
    return 999;
  }
  float distanta = durata * 0.0343 / 2.0;
  return distanta;
}
void stopMotoare() {
  digitalWrite(MOTOR_FATA_STANGA, LOW);
  digitalWrite(MOTOR_FATA_DREAPTA, LOW);
  digitalWrite(MOTOR_SPATE_STANGA, LOW);
  digitalWrite(MOTOR_SPATE_DREAPTA, LOW);
}
void inainte() {
  stopMotoare();
  digitalWrite(MOTOR_FATA_STANGA, HIGH);
  digitalWrite(MOTOR_FATA_DREAPTA, HIGH);
}
void inapoi() {
  stopMotoare();
  digitalWrite(MOTOR_SPATE_STANGA, HIGH);
  digitalWrite(MOTOR_SPATE_DREAPTA, HIGH);
}
void dreapta() {
  stopMotoare();
  digitalWrite(MOTOR_FATA_STANGA, HIGH);
}
void setup() {
  Serial.begin(9600);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
  pinMode(MOTOR_FATA_STANGA, OUTPUT);
  pinMode(MOTOR_FATA_DREAPTA, OUTPUT);
  pinMode(MOTOR_SPATE_STANGA, OUTPUT);
  pinMode(MOTOR_SPATE_DREAPTA, OUTPUT);
  stopMotoare();
  Serial.println("Masinuta pornita!");
}
void loop() {
  float distanta = citesteDistanta();
  Serial.print("Distanta: ");
  Serial.print(distanta);
  Serial.println(" cm");
  if (distanta > DISTANTA_STOP) {
    digitalWrite(LED_PIN, LOW);
    inainte();
  }
  else {
    digitalWrite(LED_PIN, HIGH);
    stopMotoare();
    delay(300);
    inapoi();
    delay(700);
    stopMotoare();
    delay(200);
    dreapta();
    delay(600);
    stopMotoare();
    delay(200);
  }
  delay(50);
}