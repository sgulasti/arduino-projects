[21:29, 12.01.2026] SılAşkım♥️: ## Projects

### Student Management System (C)
A console-based application that allows:
- Adding students
- Listing students
- Calculating class average
- Finding the top student

Concepts used:
- Structs
- Arrays
- Functions
- Menu-driven programming
[21:32, 12.01.2026] SılAşkım♥️: README’ye bu projeyi ekleyeceğiz
Arduino’da sensörlü projeye geçeceğiz
CV’ye “Projects” bölümünü yazacağız
[21:32, 12.01.2026] SılAşkım♥️: 1️⃣ Dosya okuma/yazma (FILE)* ekleyip projeyi LEVEL UP
2️⃣ Arduino’da sensörlü proje (ultrasonik / LDR)
3️⃣ CV’de Projects bölümünü parlatma
[21:34, 12.01.2026] SılAşkım♥️: Arduino’da sensörlü (ultrasonik / LDR) proje
GitHub profilinde harbi dolu görüntü
CV’ye Projects bölümü yazma
Bunu ekleyince bana yaz:
“README’ye Projects eklendi”
[21:34, 12.01.2026] SılAşkım♥️: Arduino’da sensörlü proje (ultrasonik / LDR)
GitHub profilin artık harbi dolu
CV’ye Projects bölümü ekleme
[21:36, 12.01.2026] SılAşkım♥️: #define trigPin 9
#define echoPin 10
#define ledPin 13

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance < 20) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(500);
}
