#include <SoftwareSerial.h>
SoftwareSerial mySerial(10, 11); // TX, RX

void setup() 
{
  Serial.begin(9600);
  mySerial.begin(9600);
  }

void loop() 
{ 
    //ADELANTE
    mySerial.write('1');
    delay(1000);
    //ATRAS
     mySerial.write('2');
    delay(1000);
    //IZQUIERDA
     mySerial.write('3');
    delay(1000);
    //IZQUIERDA
     mySerial.write('4'); 
    delay(1000);
    //DETENER
     mySerial.write('5'); Serial.println("LED:on");
    delay(1000);
}


