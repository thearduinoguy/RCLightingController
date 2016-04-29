#define RXpin       13
#define numSequences 12   // Put here the number of sequences you have

#define lamp1       9
#define lamp2       8
#define lamp3       2
#define lamp4       7
#define lamp5       3
#define lamp6       6
#define lamp7       11
#define lamp8       4
#define lamp9       10
#define starboard   12
#define port        5
#define spotlights  19
#define decklights  16
#define engineRoom  17
#define wheelHouse  15

#define ON HIGH
#define OFF LOW

byte index = 1;
boolean state;
boolean oldState;

int pwm_value;

void setup() {
  pinMode(RXpin, INPUT); // Set the pin for channel 5

  for (int a = 2; a < 13; a = a + 1) { // Set all LED/Bulb pins to outputs
    pinMode(a, OUTPUT);
  }
  pinMode(19, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
  sequence1();
}

void loop() {
  pwm_value = pulseIn(RXpin, HIGH);

  oldState = state;
  if (pwm_value > 1500) state = HIGH;
  else state = LOW;

  detectChange();
}

void detectChange() {
  if (state == HIGH & oldState == LOW)
  {
    changeLights();
  }
  else if (state == LOW & oldState == HIGH)
  {
    changeLights();
  }
}

void changeLights() {

  index = index + 1;
  if (index > numSequences) {
    index = 1;
  }
  delay(50);

  switch (index) {
    case 1:
      sequence1();
      break;
    case 2:
      sequence2();
      break;
    case 3:
      sequence3();
      break;
    case 4:
      sequence4();
      break;
    case 5:
      sequence5();
      break;
    case 6:
      sequence6();
      break;
    case 7:
      sequence7();
      break;
    case 8:
      sequence8();
      break;
    case 9:
      sequence9();
      break;
    case 10:
      sequence10();
      break;
    case 11:
      sequence11();
      break;
    case 12:
      sequence12();
      break;
    case 13:
      sequence13();
      break;
    case 14:
      sequence14();
      break;
    case 15:
      sequence15();
      break;
    case 16:
      sequence16();
      break;
    case 17:
      sequence17();
      break;
    case 18:
      sequence18();
      break;
    case 19:
      sequence19();
      break;
    case 20:
      sequence20();
      break;
  }
}

void sequence1() {
  digitalWrite(lamp1, OFF);
  digitalWrite(lamp2, OFF);
  digitalWrite(lamp3, OFF);
  digitalWrite(lamp4, OFF);
  digitalWrite(lamp5, OFF);
  digitalWrite(lamp6, OFF);
  digitalWrite(lamp7, OFF);
  digitalWrite(lamp8, OFF);
  digitalWrite(lamp9, OFF);
  digitalWrite(spotlights, OFF);
  digitalWrite(starboard, OFF);
  digitalWrite(port, OFF);
  digitalWrite(decklights, OFF);
  digitalWrite(engineRoom, OFF);
  digitalWrite(wheelHouse, OFF);
}

void sequence2() {
  digitalWrite(lamp1, OFF);
  digitalWrite(lamp2, OFF);
  digitalWrite(lamp3, OFF);
  digitalWrite(lamp4, OFF);
  digitalWrite(lamp5, OFF);
  digitalWrite(lamp6, OFF);
  digitalWrite(lamp7, OFF);
  digitalWrite(lamp8, OFF);
  digitalWrite(lamp9, OFF);
  digitalWrite(spotlights, OFF);
  digitalWrite(starboard, ON);
  digitalWrite(port, ON);
  digitalWrite(decklights, OFF);
  digitalWrite(engineRoom, OFF);
  digitalWrite(wheelHouse, OFF);
}

void sequence3() {
  digitalWrite(lamp1, OFF);
  digitalWrite(lamp2, OFF);
  digitalWrite(lamp3, OFF);
  digitalWrite(lamp4, OFF);
  digitalWrite(lamp5, OFF);
  digitalWrite(lamp6, OFF);
  digitalWrite(lamp7, OFF);
  digitalWrite(lamp8, OFF);
  digitalWrite(lamp9, OFF);
  digitalWrite(spotlights, OFF);
  digitalWrite(starboard, ON);
  digitalWrite(port, ON);
  digitalWrite(decklights, OFF);
  digitalWrite(engineRoom, OFF);
  digitalWrite(wheelHouse, ON);
}

void sequence4() {
  digitalWrite(lamp1, OFF);
  digitalWrite(lamp2, OFF);
  digitalWrite(lamp3, OFF);
  digitalWrite(lamp4, OFF);
  digitalWrite(lamp5, OFF);
  digitalWrite(lamp6, OFF);
  digitalWrite(lamp7, OFF);
  digitalWrite(lamp8, OFF);
  digitalWrite(lamp9, OFF);
  digitalWrite(spotlights, OFF);
  digitalWrite(starboard, ON);
  digitalWrite(port, ON);
  digitalWrite(decklights, OFF);
  digitalWrite(engineRoom, ON);
  digitalWrite(wheelHouse, ON);
}

void sequence5() {
  digitalWrite(lamp1, OFF);
  digitalWrite(lamp2, OFF);
  digitalWrite(lamp3, OFF);
  digitalWrite(lamp4, OFF);
  digitalWrite(lamp5, OFF);
  digitalWrite(lamp6, OFF);
  digitalWrite(lamp7, OFF);
  digitalWrite(lamp8, OFF);
  digitalWrite(lamp9, OFF);
  digitalWrite(spotlights, OFF);
  digitalWrite(starboard, ON);
  digitalWrite(port, ON);
  digitalWrite(decklights, ON);
  digitalWrite(engineRoom, ON);
  digitalWrite(wheelHouse, ON);
}

void sequence6() {
  digitalWrite(lamp1, ON);
  digitalWrite(lamp2, OFF);
  digitalWrite(lamp3, OFF);
  digitalWrite(lamp4, OFF);
  digitalWrite(lamp5, OFF);
  digitalWrite(lamp6, OFF);
  digitalWrite(lamp7, OFF);
  digitalWrite(lamp8, OFF);
  digitalWrite(lamp9, ON);
  digitalWrite(spotlights, OFF);
  digitalWrite(starboard, ON);
  digitalWrite(port, ON);
  digitalWrite(decklights, ON);
  digitalWrite(engineRoom, ON);
  digitalWrite(wheelHouse, ON);
}

void sequence7() {
  digitalWrite(lamp1, ON);
  digitalWrite(lamp2, ON);
  digitalWrite(lamp3, OFF);
  digitalWrite(lamp4, OFF);
  digitalWrite(lamp5, OFF);
  digitalWrite(lamp6, OFF);
  digitalWrite(lamp7, OFF);
  digitalWrite(lamp8, ON);
  digitalWrite(lamp9, ON);
  digitalWrite(spotlights, OFF);
  digitalWrite(starboard, ON);
  digitalWrite(port, ON);
  digitalWrite(decklights, ON);
  digitalWrite(engineRoom, ON);
  digitalWrite(wheelHouse, ON);
}

void sequence8() {
  digitalWrite(lamp1, ON);
  digitalWrite(lamp2, ON);
  digitalWrite(lamp3, OFF);
  digitalWrite(lamp4, OFF);
  digitalWrite(lamp5, OFF);
  digitalWrite(lamp6, OFF);
  digitalWrite(lamp7, ON);
  digitalWrite(lamp8, ON);
  digitalWrite(lamp9, ON);
  digitalWrite(spotlights, OFF);
  digitalWrite(starboard, ON);
  digitalWrite(port, ON);
  digitalWrite(decklights, ON);
  digitalWrite(engineRoom, ON);
  digitalWrite(wheelHouse, ON);
}

void sequence9() {
  digitalWrite(lamp1, ON);
  digitalWrite(lamp2, ON);
  digitalWrite(lamp3, OFF);
  digitalWrite(lamp4, ON);
  digitalWrite(lamp5, OFF);
  digitalWrite(lamp6, OFF);
  digitalWrite(lamp7, ON);
  digitalWrite(lamp8, ON);
  digitalWrite(lamp9, ON);
  digitalWrite(spotlights, OFF);
  digitalWrite(starboard, ON);
  digitalWrite(port, ON);
  digitalWrite(decklights, ON);
  digitalWrite(engineRoom, ON);
  digitalWrite(wheelHouse, ON);
}

void sequence10() {
  digitalWrite(lamp1, ON);
  digitalWrite(lamp2, ON);
  digitalWrite(lamp3, ON);
  digitalWrite(lamp4, ON);
  digitalWrite(lamp5, ON);
  digitalWrite(lamp6, OFF);
  digitalWrite(lamp7, ON);
  digitalWrite(lamp8, ON);
  digitalWrite(lamp9, ON);
  digitalWrite(spotlights, OFF);
  digitalWrite(starboard, ON);
  digitalWrite(port, ON);
  digitalWrite(decklights, ON);
  digitalWrite(engineRoom, ON);
  digitalWrite(wheelHouse, ON);
}

void sequence11() {
  digitalWrite(lamp1, ON);
  digitalWrite(lamp2, ON);
  digitalWrite(lamp3, ON);
  digitalWrite(lamp4, ON);
  digitalWrite(lamp5, ON);
  digitalWrite(lamp6, ON);
  digitalWrite(lamp7, ON);
  digitalWrite(lamp8, ON);
  digitalWrite(lamp9, ON);
  digitalWrite(spotlights, OFF);
  digitalWrite(starboard, ON);
  digitalWrite(port, ON);
  digitalWrite(decklights, ON);
  digitalWrite(engineRoom, ON);
  digitalWrite(wheelHouse, ON);
}

void sequence12() {
  digitalWrite(lamp1, ON);
  digitalWrite(lamp2, ON);
  digitalWrite(lamp3, ON);
  digitalWrite(lamp4, ON);
  digitalWrite(lamp5, ON);
  digitalWrite(lamp6, ON);
  digitalWrite(lamp7, ON);
  digitalWrite(lamp8, ON);
  digitalWrite(lamp9, ON);
  digitalWrite(spotlights, ON);
  digitalWrite(starboard, ON);
  digitalWrite(port, ON);
  digitalWrite(decklights, ON);
  digitalWrite(engineRoom, ON);
  digitalWrite(wheelHouse, ON);
}

void sequence13() {
}

void sequence14() {
}

void sequence15() {
}

void sequence16() {
}

void sequence17() {
}

void sequence18() {
}

void sequence19() {
}

void sequence20() {
}
