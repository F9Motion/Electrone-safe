# include <Servo.h>
# include <LiquidCrystal_I2C.h>
Servo motor;
LiquidCrystal_I2C lcd(0x27, 16, 2);
// here your passwprd :D
int password1 = 1; // <--- Your first number
int password2 = 2; // <--- Your second number
int password3 = 3; // <--- Your third number
int password4 = 4; // <--- Your fourdgh number

int step = 1;

// here is what typing
int type1 = -1;
int type2 = -1;
int type3 = -1;
int type4 = -1;

// funcrion
bool key(int row, int col) {
  digitalWrite(row, HIGH);
  delayMicroseconds(10);
  bool pressed = (digitalRead(col) == HIGH);
  digitalWrite(row, LOW);
  return pressed;
}

void setup() {

  //display
  Wire1.setSDA(11);
  Wire1.setSCL(10);
  Wire1.begin();
  lcd.init();
  lcd.backlight();
  lcd.clear();
  // buttons
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, INPUT_PULLDOWN);
  pinMode(7, INPUT_PULLDOWN);
  pinMode(9, INPUT_PULLDOWN);
  // RGB diode
  pinMode(12, OUTPUT);
  // buzzer
  pinMode(14, OUTPUT);
  // Motor
  motor.attach(15);
  motor.write(180);
}

void loop() {
  // type1
  if (step == 1) {
    if (digitalRead(1) == HIGH && digitalRead(6) == HIGH) {
    type1 = 1;
    lcd.setCursor(0,0);
    lcd.print(type1);
    delay(20);
    step = 2;
    }
    if (digitalRead(1) == HIGH && digitalRead(7) == HIGH) {
    type1 = 2;
    lcd.setCursor(0,0);
    lcd.print(type1);
    delay(20);
    step = 2;
    }
    if (digitalRead(1) == HIGH && digitalRead(9) == HIGH) {
    type1 = 3;
    lcd.setCursor(0,0);
    lcd.print(type1);
    delay(20);
    step = 2;
   }
    if (digitalRead(2) == HIGH && digitalRead(6) == HIGH) {
    type1 = 4;
    lcd.setCursor(0,0);
    lcd.print(type1);
    delay(20);
    step = 2;
   }
    if (digitalRead(2) == HIGH && digitalRead(7) == HIGH) {
    type1 = 5;
    lcd.setCursor(0,0);
    lcd.print(type1);
    delay(20);
    step = 2;
    }
    if (digitalRead(2) == HIGH && digitalRead(9) == HIGH) {
    type1 = 6;
    lcd.setCursor(0,0);
    lcd.print(type1);
    delay(20);
    step = 2;
    } 
    if (digitalRead(4) == HIGH && digitalRead(6) == HIGH) {
    type1 = 7;
    lcd.setCursor(0,0);
    lcd.print(type1);
    delay(20);
    step = 2;
    }
    if (digitalRead(4) == HIGH && digitalRead(7) == HIGH) {
    type1 = 8;
    lcd.setCursor(0,0);
    lcd.print(type1);
    delay(20);
    step = 2;
    }
    if (digitalRead(4) == HIGH && digitalRead(9) == HIGH) {
    type1 = 9;
    lcd.setCursor(0,0);
    lcd.print(type1);
    delay(20);
    step = 2;
    }
    if (digitalRead(5) == HIGH && digitalRead(7) == HIGH) {
    type1 = 0;
    lcd.setCursor(0,0);
    lcd.print(type1);
    delay(20);
    step = 2;
    }
    if (digitalRead(5) == HIGH && digitalRead(6) == HIGH) {
      lcd.setCursor(4,1);
      lcd.print("INCORRECT");
      delay(100);
      rp2040.reboot();
    }
  }

  if (step==2) {
  // type2
    if (digitalRead(1) == HIGH && digitalRead(6) == HIGH) {
    type2 = 1;
    lcd.setCursor(1,0);
    lcd.print(type2);
    delay(20);
    step = 3;
    }
    if (digitalRead(1) == HIGH && digitalRead(7) == HIGH) {
    type2 = 2;
    lcd.setCursor(1,0);
    lcd.print(type2);
    delay(20);
    step = 3;
    }
    if (digitalRead(1) == HIGH && digitalRead(9) == HIGH) {
    type2 = 3;
    lcd.setCursor(1,0);
    lcd.print(type2);
    delay(20);
    step = 3;
    }
    if (digitalRead(2) == HIGH && digitalRead(6) == HIGH) {
    type2 = 4;
    lcd.setCursor(1,0);
    lcd.print(type2);
    delay(20);
    step = 3;
    }
    if (digitalRead(2) == HIGH && digitalRead(7) == HIGH) {
    type2 = 5;
    lcd.setCursor(1,0);
    lcd.print(type2);
    delay(20);
    step = 3;
    }
    if (digitalRead(2) == HIGH && digitalRead(9) == HIGH) {
    type2 = 6;
    lcd.setCursor(1,0);
    lcd.print(type2);
    delay(20);
    step = 3;
    }
    if (digitalRead(4) == HIGH && digitalRead(6) == HIGH) {
    type2 = 7;
    lcd.setCursor(1,0);
    lcd.print(type2);
    delay(20);
    step = 3;
    }
    if (digitalRead(4) == HIGH && digitalRead(7) == HIGH) {
    type2 = 8;
    lcd.setCursor(1,0);
    lcd.print(type2);
    delay(20);
    step = 3;
    }
    if (digitalRead(4) == HIGH && digitalRead(9) == HIGH) {
    type2 = 9;
    lcd.setCursor(1,0);
    lcd.print(type2);
    delay(20);
    step = 3;
    }
    if (digitalRead(5) == HIGH && digitalRead(7) == HIGH) {
    type2 = 0;
    lcd.setCursor(1,0);
    lcd.print(type2);
    delay(20);
    step = 3;
    }
    if (digitalRead(5) == HIGH && digitalRead(6) == HIGH) {
      lcd.setCursor(4,1);
      lcd.print("INCORRECT");
      delay(100);
      rp2040.reboot();
    }
  }
  if (step==3) {
    if (digitalRead(1) == HIGH && digitalRead(6) == HIGH) {
      type3 = 1;
      lcd.setCursor(3,0);
      lcd.print(type3);
      delay(20);
      step = 4;
    }
    if (digitalRead(1) == HIGH && digitalRead(7) == HIGH) {
      type3=2;
      lcd.setCursor(3,0);
      lcd.print(type3);
      delay(20);
      step = 4;
    }
    if (digitalRead(1) == HIGH && digitalRead(9) == HIGH) {
      type3 = 3;
      lcd.setCursor(3,0);
      lcd.print(type3);
      delay(20);
      step = 4;
    }
    if (digitalRead(2) == HIGH && digitalRead(6) == HIGH) {
      type3 = 4;
      lcd.setCursor(3,0);
      lcd.print(type3);
      delay(20);
      step = 4;
    }
    if (digitalRead(2) == HIGH && digitalRead(7) == HIGH) {
      type3 = 5;
      lcd.setCursor(3,0);
      lcd.print(type3);
      delay(20);
      step = 4;
    }
    if (digitalRead(2) == HIGH && digitalRead(9) == HIGH) {
      type3 = 6;
      lcd.setCursor(3,0);
      lcd.print(type3);
      delay(20);
      step = 4;
    }
    if (digitalRead(3) == HIGH && digitalRead(6) == HIGH) {
      type3 = 7;
      lcd.setCursor(3,0);
      lcd.print(type3);
      delay(20);
      step = 4;
    }
    if (digitalRead(3) == HIGH && digitalRead(7) == HIGH) {
      type3 = 8;
      lcd.setCursor(3,0);
      lcd.print(type3);
      delay(20);
      step = 4;
    }
    if (digitalRead(4) == HIGH && digitalRead(9) == HIGH) {
      type3 = 9;
      lcd.setCursor(3,0);
      lcd.print(type3);
      delay(20);
      step = 4;
    }
    if (digitalRead(5) == HIGH && digitalRead(7) == HIGH) {
      type3 = 0;
      lcd.setCursor(3,0);
      lcd.print(type3);
      delay(20);
      step = 4;
    }
    if (digitalRead(5) == HIGH && digitalRead(6) == HIGH) {
      lcd.setCursor(4,0);
      lcd.print("INCORRECT");
      delay(100);
      rp2040.reboot();
    }
  }
  if (step == 4) {
    if (digitalRead(1) == HIGH && digitalRead(6) == HIGH) {
      type4 = 1;
      lcd.setCursor(4,0);
      lcd.print(type4);
      delay(20);
      step = 5;
    }
    if (digitalRead(1) == HIGH && digitalRead(7) == HIGH) {
      type4 = 2;
      lcd.setCursor(4,0);
      lcd.print(type4);
      delay(20);
      step = 5;
    }
    if (digitalRead(1) == HIGH && digitalRead(9) == HIGH) {
      type4 = 3;
      lcd.setCursor(4,0);
      lcd.print(type4);
      delay(20);
      step = 5;
    }
    if (digitalRead(2) == HIGH && digitalRead(6) == HIGH) {
      type4 = 4;
      lcd.setCursor(4,0);
      lcd.print(type4);
      delay(20);
      step = 5;
    }
    if (digitalRead(2) == HIGH && digitalRead(7) == HIGH) {
      type4 = 5;
      lcd.setCursor(4,0);
      lcd.print(type4);
      delay(20);
      step = 5;
    }
    if (digitalRead(2) == HIGH && digitalRead(9) == HIGH) {
      type4 = 6;
      lcd.setCursor(4,0);
      lcd.print(type4);
      delay(20);
      step = 5;
    }
    if (digitalRead(3) == HIGH && digitalRead(6) == HIGH) {
      type4 = 7;
      lcd.setCursor(4,0);
      lcd.print(type4);
      delay(20);
      step = 5;
    }
    if (digitalRead(3) == HIGH && digitalRead(7) == HIGH) {
      type4 = 8;
      lcd.setCursor(4,0);
      lcd.print(type4);
      delay(20);
      step = 5;
    }
    if (digitalRead(3) == HIGH && digitalRead(9) == HIGH) {
      type4 = 9;
      lcd.setCursor(4,0);
      lcd.print(type4);
      delay(20);
      step = 5;
    }
    if (digitalRead(5) == HIGH && digitalRead(7) == HIGH) {
      type4 = 0;
      lcd.setCursor(4,0);
      lcd.print(type4);
      delay(20);
      step = 5;
    }
    if (digitalRead(5) == HIGH && digitalRead(6) == HIGH) {
      lcd.setCursor(4,1);
      lcd.print("INCORRECT");
      delay(100);
      rp2040.reboot();
    }
  }
  if (step == 5) {
    if (digitalRead(5) == HIGH && digitalRead(9) == HIGH) {
      if (type1 == 1 && type2 == 2 && type3 == 3 && type4 == 4) {
        lcd.setCursor(5,1);
        lcd.print("CORRECT");
        motor.write(0);
        delay(500);
        motor.write(180);
        type1 = -1;
        type2 = -1;
        type3 = -1;
        type4 = -1;
        rp2040.reboot();
      } else {
        lcd.setCursor(4,2);
        lcd.print("INCORRECT");
        delay(100);
        lcd.clear();
        rp2040.reboot();
      }
    }
  }
}
