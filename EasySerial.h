/* 

	Please feel free to contribute to this library 

*/

#ifndef EasySerial_h
#define EasySerial_h

#include "Arduino.h"

class EasySerial
{
	public:

		//Serial

		serialBegin(int); //Starts a serial in [int] port
		void serialReader(); //Reads incoming bytes from serial
};

#endif