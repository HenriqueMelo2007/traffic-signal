#define red 8
#define yellow 9
#define green 10

void changeSignal(int time, int redOUTPUT, int yellowOUTPUT, int greenOUTPUT);

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  changeSignal(7000, 1, 0, 0);
  changeSignal(5000, 0, 0, 1);
  changeSignal(2000, 0, 1, 0);
}

void changeSignal(int time, int redOUTPUT, int yellowOUTPUT, int greenOUTPUT) {
  digitalWrite(red, redOUTPUT);
  digitalWrite(yellow, yellowOUTPUT);
  digitalWrite(green, greenOUTPUT);
  delay(time);
}