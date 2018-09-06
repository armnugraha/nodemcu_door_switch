const int buzzer = D1; 
const int sensor = D2;
const int led = D0;

int state; // 0 close - 1 open wwitch

void setup()
{
  pinMode(sensor, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  
  digitalWrite(led, LOW);
  delay(10000);
  tone(buzzer, 400);
  delay(4000);
  noTone(buzzer);
  tone(buzzer, 400);
  noTone(buzzer);
}

void loop()
{
  state = digitalRead(sensor);
  
  if (state == LOW){
    tone(buzzer, 400);
    digitalWrite(led, HIGH);
  }else{
   noTone(buzzer);
   digitalWrite(led, LOW);
  }
}


///* Arduino Tutorial: How to use a magnetic contact switch 
//   Dev: Michalis Vasilakis // www.ardumotive.com // Date: 4/8/2016 */
//
//#include "SIM900.h"
//#include "SoftwareSerial.h"
//SoftwareSerial SIM900A(D5,D7); //RX || TX
//#include "sms.h"
//SMSGSM sms;
//
//boolean started=false;
//boolean kirim=false;
//char smsbuffer[160];
//char n[20];
//
//const int ledPin = D1; 
//const int sensor = D6;
//
//int state = 0; // 0 close - 1 open wwitch
//
//void setup()
//{
//  //conec to gsm
//  SIM900A.begin(115200);   // Setting the baud rate of GSM Module  
//  Serial.begin(115200);    // Setting the baud rate of Serial Monitor (Arduino)
//  Serial.println ("SIM900A Ready");
//  delay(100);
//  Serial.println (" Ketik 's' untuk Mengirim SMS dan 'r' untuk Membaca SMS masuk");
//  
//  pinMode(sensor, INPUT);
////  pinMode(switchPin, INPUT);
//
//  pinMode(ledPin, OUTPUT);
//
//  if (gsm.begin(115200)){
//      started=true; 
//      digitalWrite(ledPin,LOW);
//      delay(100); 
//      digitalWrite(ledPin,HIGH);
//      delay(100); 
//      digitalWrite(ledPin,LOW);
//      delay(100); 
//      digitalWrite(ledPin,HIGH);
//    }
//}
//
//void loop()
//{
////  state = digitalRead(sensor);
////  Serial.println(state);
////  if (state == HIGH){
//////    tone(buzzer, 400);
////    digitalWrite(ledPin, HIGH);
////  }
////  else{
//////    noTone(buzzer);
////    digitalWrite(ledPin, LOW);
////    digitalWrite(ledPin,HIGH);
////    delay(100); 
////    digitalWrite(ledPin,LOW);
////    delay(100); 
////    digitalWrite(ledPin,LOW);
////  }
////  delay(200);
//
//  boolean a=digitalRead(sensor);
////  Serial.println(a);
//  if(a){
//    digitalWrite(ledPin, HIGH);
//  }else{
//    digitalWrite(ledPin, LOW);
//    digitalWrite(ledPin,HIGH);
//    delay(100); 
//    digitalWrite(ledPin,LOW);
//    delay(100); 
//    digitalWrite(ledPin,LOW);
////    if(started){
////      if(!kirim){
////          SendMessage();
////          kirim=true;
////      }  
////    }
////    
////    kirim=false;    
//    
//  }
//}
//
//void SendMessage()
//{
//  SIM900A.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
//  delay(1000);  // Delay of 1000 milli seconds or 1 second
//  SIM900A.println("AT+CMGS=\"081221686350\"\r"); // Replace with your mobile number
//  delay(1000);
//  SIM900A.println("Pintu Terbuka");// The SMS text you want to send
//  delay(100);
//  SIM900A.println((char)26);// ASCII code of CTRL+Z
//  delay(1000);
//  Serial.println ("SMS Selesai dikirim");
//}

