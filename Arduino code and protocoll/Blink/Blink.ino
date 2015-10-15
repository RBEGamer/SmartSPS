/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */
String readString;
int modul_id;
// the setup function runs once when you press reset or power the board
void setup() {
Serial.begin(9600);
  // initialize digital pin 13 as an output.
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(A6, OUTPUT);
  pinMode(A7, OUTPUT);
  //set all realis to off
digitalWrite(A0, HIGH);
digitalWrite(A1, HIGH);
digitalWrite(A2, HIGH);
digitalWrite(A3, HIGH);
digitalWrite(A4, HIGH);
digitalWrite(A5, HIGH);
digitalWrite(A6, HIGH);
digitalWrite(A7, HIGH);


pinMode(12, INPUT);           // set pin to input
digitalWrite(12, HIGH);       // turn on pullup resistors
pinMode(11, INPUT);           // set pin to input
digitalWrite(11, HIGH);       // turn on pullup resistors
pinMode(10, INPUT);           // set pin to input
digitalWrite(10, HIGH);       // turn on pullup resistors
pinMode(9, INPUT);           // set pin to input
digitalWrite(9, HIGH);       // turn on pullup resistors


  modul_id = -1;
if(digitalRead(9) == 1){modul_id +=1;}
if(digitalRead(10) == 1){modul_id +=2;}
if(digitalRead(11) == 1){modul_id +=4;}
if(digitalRead(12) == 1){modul_id +=8;}

Serial.println( modul_id);
}

// the loop function runs over and over again forever
void loop() {
if(modul_id > 0){
  }

   while (Serial.available()) {
    delay(3);  //delay to allow buffer to fill 
    if (Serial.available() >0) {
      char c = Serial.read();  //gets one byte from serial buffer
      readString += c; //makes the string readString
    } 
  }

  if (readString.length() >0) {
      //Serial.println(readString); //see what was received

if(getValue(readString, '_', 0).toInt() == modul_id){
  if(getValue(readString, '_', 1) == "eoro"){
    if(getValue(readString, '_', 2) == "set"){
       int port = getValue(readString, '_', 4).toInt();
      if(getValue(readString, '_', 3) == "h"){   
       if(port == 0){digitalWrite(A0, LOW);}
       if(port == 1){digitalWrite(A1, LOW);}
       if(port == 2){digitalWrite(A2, LOW);}
       if(port == 3){digitalWrite(A3, LOW);}
       if(port == 4){digitalWrite(A4, LOW);}
       if(port == 5){digitalWrite(A5, LOW);}
       if(port == 6){digitalWrite(A6, LOW);}
       if(port == 7){digitalWrite(A7, LOW);}
      }else if(getValue(readString, '_', 3) == "l"){
       if(port == 0){digitalWrite(A0, HIGH);}
       if(port == 1){digitalWrite(A1, HIGH);}
       if(port == 2){digitalWrite(A2, HIGH);}
       if(port == 3){digitalWrite(A3, HIGH);}
       if(port == 4){digitalWrite(A4, HIGH);}
       if(port == 5){digitalWrite(A5, HIGH);}
       if(port == 6){digitalWrite(A6, HIGH);}
       if(port == 7){digitalWrite(A7, HIGH);}
      }
      }
    }
  }
    readString="";
  } 
 
}





String getValue(String data, char separator, int index)
{
  int found = 0;
  int strIndex[] = {
    0, -1  };
  int maxIndex = data.length()-1;
  for(int i=0; i<=maxIndex && found<=index; i++){
    if(data.charAt(i)==separator || i==maxIndex){
      found++;
      strIndex[0] = strIndex[1]+1;
      strIndex[1] = (i == maxIndex) ? i+1 : i;
    }
  }
  return found>index ? data.substring(strIndex[0], strIndex[1]) : "";
}
