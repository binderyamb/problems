#include <stdio.h>

int main() {
	// <type> <name>
	//unsigned int, short-sanah oin ezleh zai baga, sizeof- bite-g hmjih, float-butarhain orongiin nariivchlal %.3f- 3 orongiin nariivchlaltai bichih
	// long long-olon orontoi too hevleh, double- olon orontoi butarhai too %lf
	
	short myShort = 256;
	int myNumber = 9;
	long long myLong = 123464789465153;
	
	float myFloat = 3.14;
	double myDouble = 2.1315646;
	
	printf("%lf", myDouble);
}