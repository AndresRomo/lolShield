

#include "lol.hpp"

Lol::Lol(){
	for(int i=0 ; i<14 ; i++)
	{
		pins[i] = i;
	}
	numberOfPins = 14;
	clear();
}

void Lol::ledOn(char x, char y)
{
	setVcc(ledMap[y][x].vcc);
	setGnd(ledMap[y][x].gnd);
}

//set a pin HIGH 
void Lol::setVcc(byte pin){
	
	pinMode( pins[pin] , OUTPUT );
	digitalWrite( pins[pin] , HIGH );
}

//set a pin LOW 
void Lol::setGnd(byte pin){
	pinMode( pins[pin] , OUTPUT );
	digitalWrite( pins[pin] , LOW );
}

//set all as input
void Lol::clear(){
	for (byte i=0; i<numberOfPins; i++){
		pinMode( pins[i] , INPUT);
	}
}