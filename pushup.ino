#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define trigPin 9
#define echoPin 10

LiquidCrystal_I2C lcd(0x27, 16, 2);

int count = 0;
bool isDown = false;

int downThreshold = 12;
int upThreshold = 22;

void setup() {
  lcd.init();
  lcd.backlight();

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  lcd.setCursor(0, 0);
  lcd.print("Push-up Counter");
  delay(2000);
  lcd.clear();
}

long getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  long distance = duration * 0.034 / 2;
  return distance;
}

void loop() {
  long distance = getDistance();

  if (distance < downThreshold) {
    isDown = true;
  }

  if (distance > upThreshold && isDown) {
    count++;
    isDown = false;
  }

  lcd.setCursor(0, 0);
  lcd.print("Push-ups:     ");
  lcd.setCursor(0, 1);
  lcd.print(count);

  delay(150);
}
