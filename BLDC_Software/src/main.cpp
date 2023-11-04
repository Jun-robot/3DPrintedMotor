#include <Arduino.h>

void setup() {
  pinMode(PC12, OUTPUT);

	pinMode(PA10,OUTPUT);
	pinMode(PA9,OUTPUT);
	pinMode(PA8,OUTPUT);

	pinMode(PA7,OUTPUT);
	pinMode(PA5,OUTPUT);
	pinMode(PA4,OUTPUT);
	digitalWrite(PA7, HIGH);
	digitalWrite(PA5, HIGH);
	digitalWrite(PA4, HIGH);

	digitalWrite(PC12, HIGH);
	//Serial.begin(115200);
	//Serial.println("Hello World!");
	analogWriteFrequency(20000);
	}


float i = 0;
void loop() {
	int U, V, W = 0;
	U = (sin(i)+1 )* 127;
	V = (sin(i+ 2*PI/3)+1 )* 127;
	W = (sin(i+ 4*PI/3)+1 )* 127;
	// i = i + 0.11; //既製品+乾電池  
	// i = i + 0.003; //自作+Lipo
	//i = i + 0.0025;
	i = i + 0.0078;

	analogWrite(PA10, U);
	analogWrite(PA9, V);
	analogWrite(PA8, W);
}





