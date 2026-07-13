const int red = 11;
const int blue = 12;
const int green = 13;
const int buzzer = 8; 
const int button = 2;

void setup() {

  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(buzzer, OUTPUT);

  pinMode(button, INPUT_PULLUP);

}

void loop() {

  // GREEN
  digitalWrite(green, HIGH);

  unsigned long startTime = millis();

  while (millis() - startTime < 3000) {

    if (digitalRead(button) == LOW) {
      break;      // pedestrian requested
    }

  }

  digitalWrite(green, LOW);

  // YELLOW
  digitalWrite(blue, HIGH);
  delay(1000);
  digitalWrite(blue, LOW);

  // RED
  digitalWrite(red, HIGH);

  for (int i = 0; i < 10; i++) {

    digitalWrite(buzzer, HIGH);
    delay(200);

    digitalWrite(buzzer, LOW);
    delay(300);

  }

  digitalWrite(red, LOW);

}
