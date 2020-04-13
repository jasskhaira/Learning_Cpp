/*
 * Fraction.cpp
 *
 *  Created on: Apr. 8, 2020
 *      Author: root
 */

#include "Fraction.h"


Fraction operator-( const Fraction& f1 , const Fraction& f2){

	Fraction temp;
	temp.Num = f1.Num * f2.Den - f2.Num * f1.Den;
	temp.Den = f1.Num * f2.Den;
	return temp;
}


Fraction operator+( const Fraction& f1 , const Fraction& f2){

	Fraction temp;
	temp.Num = f1.Num * f2.Den + f2.Num * f1.Den;
	temp.Den = f1.Num * f2.Den;
	return temp;
}



Fraction::~Fraction() {
	// TODO Auto-generated destructor stub
}

