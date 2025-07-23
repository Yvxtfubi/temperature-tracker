
#define TEMP_SENSOR A0
#define HEATER_PIN 7
#define LED_PIN 13

float temperature = 0;
String state = "Idle";

void setup() {
  Serial.begin(9600);
  pinMode(HEATER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  temperature = analogRead(TEMP_SENSOR) * (5.0 / 1023.0) * 100;

  if (temperature < 25) {
    state = "Idle";
    digitalWrite(HEATER_PIN, LOW);
    digitalWrite(LED_PIN, LOW);
  } else if (temperature < 45) {
    state = "Heating";
    digitalWrite(HEATER_PIN, HIGH);
    digitalWrite(LED_PIN, HIGH);
  } else if (temperature < 49) {
    state = "Stabilizing";
    digitalWrite(HEATER_PIN, HIGH);
    digitalWrite(LED_PIN, HIGH);
  } else if (temperature <= 51) {
    state = "Target Reached";
    digitalWrite(HEATER_PIN, LOW);
    digitalWrite(LED_PIN, LOW);
  } else {
    state = "Overheat";
    digitalWrite(HEATER_PIN, LOW);
    digitalWrite(LED_PIN, LOW);
  }

  Serial.print("Temp: ");
  Serial.print(temperature);
  Serial.print(" °C | State: ");
  Serial.println(state);

  delay(1000);
}
