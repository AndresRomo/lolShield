/*
||
|| @author Alexander Brevig
|| @version 1.0
||
*/

#ifndef LOLSHIELD
#define LOLSHIELD

#include <Arduino.h>

struct CharliePin {
	byte vcc;
	byte gnd;
};

typedef CharliePin charliePin;

class Lol {

#define INDEX 1
#define NUMBER_OF_STATUSES ((_numberOfPins*_numberOfPins)-_numberOfPins)

public:
	Lol();
	
	void ledOn(char x, char y);
	
	void setVcc(byte pin);
	void setGnd(byte pin);
	
	void clear();
	
private:
	byte numberOfPins;
	byte pins[14];
	const charliePin ledMap[9][14] = {
    {{13, 5}, {13, 6}, {13, 7}, {13, 8}, {13, 9}, {13,10}, {13,11}, {13,12},{13, 4}, { 4,13}, {13, 3}, { 3,13}, {13, 2},{2,13}},
    {{12, 5}, {12, 6}, {12, 7}, {12, 8}, {12, 9}, {12,10}, {12,11}, {12,13},{12, 4}, { 4,12}, {12, 3}, { 3,12}, {12, 2}, { 2,12}},
    {{11, 5}, {11, 6}, {11, 7}, {11, 8}, {11, 9}, {11,10}, {11,12}, {11,13},{11, 4}, { 4,11}, {11, 3}, { 3,11}, {11, 2}, { 2,11}},
    {{10, 5}, {10, 6}, {10, 7}, {10, 8}, {10, 9}, {10,11}, {10,12}, {10,13},{10, 4}, { 4,10}, {10, 3}, { 3,10}, {10, 2}, { 2,10}},
    {{ 9, 5}, { 9, 6}, { 9, 7}, { 9, 8}, { 9,10}, { 9,11}, { 9,12}, { 9,13},{ 9, 4}, { 4, 9}, { 9, 3}, { 3, 9}, { 9, 2}, { 2, 9}},
    {{ 8, 5}, { 8, 6}, { 8, 7}, { 8, 9}, { 8,10}, { 8,11}, { 8,12}, { 8,13},{ 8, 4}, { 4, 8}, { 8, 3}, { 3, 8}, { 8, 2}, { 2, 8}},
    {{ 7, 5}, { 7, 6}, { 7, 8}, { 7, 9}, { 7,10}, { 7,11}, { 7,12}, { 7,13},{ 7, 4}, { 4, 7}, { 7, 3}, { 3, 7}, { 7, 2}, { 2, 7}},
    {{ 6, 5}, { 6, 7}, { 6, 8}, { 6, 9}, { 6,10}, { 6,11}, { 6,12}, { 6,13},{ 6, 4}, { 4, 6}, { 6, 3}, { 3, 6}, { 6, 2}, { 2, 6}},
    {{ 5, 6}, { 5, 7}, { 5, 8}, { 5, 9}, { 5,10}, { 5,11}, { 5,12}, { 5,13},{ 5, 4}, { 4, 5}, { 5, 3}, { 3, 5}, { 5, 2}, { 2, 5}}
};

};


#endif
