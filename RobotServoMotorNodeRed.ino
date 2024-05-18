#include <Servo.h>

Servo BaseServo;
Servo MedioServo;
Servo PinzaServo;

int BasePin = 10;
int MedioPin = 11;
int PinzaPin = 12;
int LedPin1 = 4;
int LedPin2 = 3;
int LedPin3 = 2;

void setup() {
  // put your setup code here, to run once:
  BaseServo.attach(BasePin);
  BaseServo.write(0); 
  MedioServo.attach(MedioPin);
  MedioServo.write(0); 
  PinzaServo.attach(PinzaPin);
  PinzaServo.write(120); 
  pinMode(LedPin1, OUTPUT);
  pinMode(LedPin2, OUTPUT);
  pinMode(LedPin3, OUTPUT);
  Serial.begin(9600);

}

void PinzaServo1(){
  PinzaServo.write(90);   // Mueve el servo a 90 grados
  Serial.println("PinzaServo: 90 grados.");
  delay(1000);         // Espera 1 segundo 
}
void PinzaServo2(){
  PinzaServo.write(120);    // Mueve el servo a 120 grados
  Serial.println("PinzaServo: 120 grados.");
  delay(2000);  
}

void MedioServo1(){
  MedioServo.write(0);   // Mueve el servo a 0 grados
  Serial.println("MedioServo: 0 grados.");
  delay(1000);
}
void MedioServo2(){
  MedioServo.write(30 );   // Mueve el servo a 30 grados
  Serial.println("MedioServo: 30 grados.");
  delay(1000); 
}

void BaseServo1(){
  BaseServo.write(0);   // Mueve el servo a 0 grados
  Serial.println("BaseServo: 0 grados.");
  delay(1000); 
}
void BaseServo2(){
  BaseServo.write(53);   // Mueve el servo a 53 grados
  Serial.println("BaseServo: 53 grados.");
  delay(1000); 
}

void loop() {
  
  if (Serial.available() > 0) {
    char command = Serial.read();
    if (command == '1') {
      digitalWrite(LedPin2, HIGH);
      PinzaServo1();
      digitalWrite(LedPin2, LOW); 
      
    } else if (command == '2') {
      digitalWrite(LedPin2, HIGH);
      PinzaServo2();
      digitalWrite(LedPin2, LOW);
      
    }
    else if (command == '3') {
      digitalWrite(LedPin1, HIGH);
      MedioServo1();
      digitalWrite(LedPin1, LOW);
      
    }else if (command == '4') {
      digitalWrite(LedPin1, HIGH);
      MedioServo2();
      digitalWrite(LedPin1, LOW); 
      
      
    }else if (command == '5') {
      digitalWrite(LedPin3, HIGH);
      BaseServo1();
      digitalWrite(LedPin3, LOW);
      
      
    }else if (command == '6') {
      digitalWrite(LedPin3, HIGH);
      BaseServo2();
      digitalWrite(LedPin3, LOW);
      
      
    }
  }
}
