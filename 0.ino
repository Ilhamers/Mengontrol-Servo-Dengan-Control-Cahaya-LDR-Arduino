#include <Servo.h>              //Library untuk motor servo
Servo myservo;                     //Membuat object 1 buah Servo
int pinSensorLDR = 0;          //Pin input untuk sensor LDR
int hasil;                                 //Membuat variable untuk hasil sensor

void setup() {
  myservo.attach(6);               //Hubungkan servo pada Pin 6 Arduino
}

void loop() {
  hasil = analogRead(pinSensorLDR);       //hasil = input dari sensor LDR
  hasil = map(hasil, 10, 800, 0, 180);         //Convert hasil LDR untuk Servo
  myservo.write(hasil);                               //Putar servo sesuai hasil LDR
  delay(10);                                                  //Delay
}
