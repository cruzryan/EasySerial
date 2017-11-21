# EasySerial
An opensource library to make Arduino Serials easier to use!

## How to use?
First, let's include the library:

```C++
#include <EasySerial.h>
```
then let's reference EasySerial so we can use it.

```C++
EasySerial ES;
```

Now we can use all the functions EasySerial provides us! (only 2 of them lol).

### How do I start a serial?

Well... You can simply do 

```C++
Serial.begin(port);
```
or use the built-in function

```C++
ES.serialBegin(int port)
```
(Both of them do the same thing so you're free to choose)

### Reading the Serial

```C++
  int myByte = easyserial.serialReader();
  ```
  
now myByte will hold the incoming serial Bytes!

__I know this library doesn't do that much, but I use it because it saves me from using more lines of code.__
