//============================================================================
// Name        : SuperMarket.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"Prod.h"

using namespace std;


const Product& islower(const Product& p1, const Product& p2 );

int main() {


	Product* parr[3];
	FreshFood *pFF ;


	parr[0] = new Product(789,"Wire");

	parr[1] = new PrepackedFood(123,"Bread",2.99);

	parr[2] = new FreshFood(456,"Oranges",4.99 , 4);



	pFF = new FreshFood(489,"Grapes",4.99 , 4);

	parr[0]->printer();
	parr[1]->printer();
	parr[2]->printer();

	pFF->printer();

	Product p1(99323,"Flour");
	p1.printer();

	PrepackedFood pf1(6895,"Sugar",0.49);
	pf1.printer();

	return 0;
}


const Product& islower(const Product& p1, const Product& p2 ){

	if(p1.getCode()<p2.getCode())
		return p1;
	else
		return p2;

}
