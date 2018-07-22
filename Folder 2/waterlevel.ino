// Example 55.2
 
#include <SoftwareSerial.h>
SoftwareSerial SIM900(7, 8);
 int level1=2;
 int level2=3;
 int level3=4;
 int level4=5;
 boolean cs1,cs2,cs3,cs4,ps1,ps2,ps3,ps4;
void setup()
{
  SIM900.begin(19200);
  Serial.begin(9600);
  delay(2000);
  pinMode(level1,INPUT);
  pinMode(level2,INPUT);
  pinMode(level3,INPUT);
  pinMode(level4,INPUT);
  //delay(20000);  // give time to log on to network. 
}
 
 
void sendSMSlevel1()
{
  SIM900.print("AT+CMGF=1\r");                                                        // AT command to send SMS message
  delay(100);
  SIM900.println("AT + CMGS = \"+919154234955\"");                                     // recipient's mobile number, in international format
  delay(100);
  SIM900.println("level1.");        // message to send
  delay(100);
  SIM900.println((char)26);                       // End AT command with a ^Z, ASCII code 26
  delay(100); 
  SIM900.println();
  delay(1000);                                     // give module time to send SMS
                                   // turn off module
}
 void sendSMSlevel2()
 {
   SIM900.print("AT+CMGF=1\r");                                                        // AT command to send SMS message
  delay(100);
  SIM900.println("AT + CMGS = \"+919154234955\"");                                     // recipient's mobile number, in international format
  delay(100);
  SIM900.println("level2.");        // message to send
  delay(100);
  SIM900.println((char)26);                       // End AT command with a ^Z, ASCII code 26
  delay(100); 
  SIM900.println();
  delay(1000);                                     // give module time to send SMS
                                          // turn off module
}

void sendSMSlevel3()
{
  SIM900.print("AT+CMGF=1\r");                                                        // AT command to send SMS message
  delay(100);
  SIM900.println("AT + CMGS = \"+919154234955\"");                                     // recipient's mobile number, in international format
  delay(100);
  SIM900.println("level3.");        // message to send
  delay(100);
  SIM900.println((char)26);                       // End AT command with a ^Z, ASCII code 26
  delay(100); 
  SIM900.println();
  delay(1000);                                     // give module time to send SMS
                               // turn off module
}

void sendSMSlevel4()
{
  SIM900.print("AT+CMGF=1\r");                                                        // AT command to send SMS message
  delay(100);
  SIM900.println("AT + CMGS = \"+919154234955\"");                                     // recipient's mobile number, in international format
  delay(100);
  SIM900.println("level4.");        // message to send
  delay(100);
  SIM900.println((char)26);                       // End AT command with a ^Z, ASCII code 26
  delay(100); 
  SIM900.println();
  delay(1000);                                     // give module time to send SMS
                                 // turn off module
}

void loop()
{
//sendSMS();
 // do {} while (1);
 cs1=digitalRead(level1);
 cs2=digitalRead(level2);
 cs3=digitalRead(level3);
 cs4=digitalRead(level4);
 
 
 
 if(ps1!=cs1)
 {
   sendSMSlevel1();
   Serial.println("level1");
   ps1=cs1;
 }
 /*
  if(ps2!=cs2)
 {
   sendSMSlevel2();
   Serial.println("level2");
   ps2=cs2;
 }
  if(ps3!=cs3)
 {
   sendSMSlevel3();
   Serial.println("level3");
   ps3=cs3;
 }
 if(ps4!=cs4)
 {
  sendSMSlevel4();
    Serial.println("level4");
   ps4=cs4;
 }
 */
 delay(1000);
 
}

