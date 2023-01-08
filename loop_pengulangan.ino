int pinA = 2;
int pinB = 3;
int pinC = 4;

void setup() {
  pinMode(pinA, OUTPUT);
  pinMode(PinB, OUTPUT);
  pinMode(PinC, OUTPUT);
}

void loop() {
  int a = 0;
  while(a<3){
    digitalWrite(pinA, HIGH);
    delay(1000);
    digitalWrite(pinA, LOW);
    delay(1000);
    i++;
  }

  for(int b=4; b>1; b--) {
    digitalWrite(pinB, HIGH);
    delay(1000);
    digitalWrite(pinb, LOW);
    delay(1000);
  }

  for(int c=1; c<=3; c++){
    digitalWrite(pinC, HIGH);
    delay(1000);
    digitalWrite(pinC, LOW);
    delay(1000);
  }
