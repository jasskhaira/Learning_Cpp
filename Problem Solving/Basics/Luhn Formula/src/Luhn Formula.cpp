//============================================================================
// Name        : Luhn.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int doubledigitVal(int digit){
	int sum;
	int doubledigit = digit * 2;

	if( digit > 10) sum = 1 + doubledigit % 10;

	else  sum = doubledigit;

	return sum;
}

int main() {

	int digit, sum;
	cout << "Enter the digits less than 10";
	cin>>digit;



	cout<<"Sum of digits in double number: "<<sum<<"\n";
	return 0;
}
