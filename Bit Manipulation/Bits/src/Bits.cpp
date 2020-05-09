//============================================================================
// Name        : Bits.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#define MASK 0x20

void putBits(unsigned int num){


}

int main() {
	unsigned int a, b ;

	a=12;
	b = a << 3;
	cout<<b;

	char c= 'b';
	c = c| MASK;
	cout<<c;


	return 0;
}
