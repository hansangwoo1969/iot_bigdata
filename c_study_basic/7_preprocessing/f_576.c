#include <stdio.h>
#define CON(UDP, LOW) UDP ## 00 ## LOW
#pragma warning (disable:4996)


void main(void) {
	int NUM = CON(22, 77);
	// int NUM = 220077;
}
