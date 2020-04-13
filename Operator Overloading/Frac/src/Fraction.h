/*
 * Fraction.h
 *
 *  Created on: Apr. 8, 2020
 *      Author: root
 */

#ifndef FRACTION_H_
#define FRACTION_H_

#include<fstream>
#include<iostream>

using namespace std;

class Fraction {

private:
	long Num , Den;


public:
	Fraction(): Num(0) , Den(1){};


	Fraction& operator++(){

		++Num;
		++Den;
		return *this;
	}

	Fraction& operator-(){

			Num = -Num;
			return *this;
		}

	Fraction& operator--(){

		--Num;
		--Den;
		return *this;
	}

	Fraction& operator-=(Fraction& f1){
		Num = Num*f1.Den - f1.Num * Den;
		Den = Den * f1.Den;
		return *this;
	}

	Fraction& operator+=(Fraction& f1){
			Num = Num*f1.Den + f1.Num * Den;
			Den = Den * f1.Den;
			return *this;
		}

	Fraction& operator*=(Fraction& f1){
		Num = Num * f1.Num;
		Den = Den * f1.Den;
		return this;
	}

	Fraction& operator/=(Fraction& f1){
			Num = Num * f1.Den;
			Den = Den * f1.Num;
			return this;
		}

	friend Fraction operator-( const Fraction& f1 , const Fraction& f2);
	friend Fraction operator+( const Fraction& f1 , const Fraction& f2);
	friend Fraction operator*( const Fraction& f1 , const Fraction& f2);
	friend Fraction operator/( const Fraction& f1 , const Fraction& f2);
	friend ostream& operator <<(ostream& os ,Fraction& f1 );
	friend istream& operator >>(istream& is ,Fraction& f1 );


	virtual ~Fraction();
};

#endif /* FRACTION_H_ */
