/* 

	Please feel free to contribute to this library 
	
*/


#include "EasySerial.h"
#include "Arduino.h"


EasySerial::serialBegin(int port){ //Starts a serial from [port]!
	Serial.begin(port);
}

EasySerial::serialReader(){ //Returns incoming bytes from Serial
	 int incomingByte = 0;
	 if (Serial.available() > 0) {
                incomingByte = Serial.read();
                return incomingByte;
        }
}