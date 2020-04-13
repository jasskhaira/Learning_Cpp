/*
 * Euro.h
 *
 *  Created on: Apr. 9, 2020
 *      Author: root
 */

#ifndef EURO_H_
#define EURO_H_
#include<iostream>
#include<sstream>
#include<iomanip>

using namespace std;


class Euro {

private:
	long data;




public:
	Euro(int euro = 0 ,int cents = 0){ data = 100L * (long)euro + cents; };

	Euro( double x){
		x *=100.0;
		data  = (long) (x >= 0.0 ? x+ 0.5 : x - 0.5);
	}

	long getWholepart() const { return data / 100 ;}
	int getCents() const { return (int) (data%100);}
	double asDouble() const { return (double)data/100.0 ;}
	string asString()const;

	void print(ostream& os)const
	{	os<<asString()<<" Euro"<<endl; }

	Euro operator-()const{
		Euro temp;
		temp.data = -data;
		return temp;
	}

	Euro operator+( const Euro& e2)const
	{
		Euro temp;
		temp.data = data + e2.data;
		return temp;
	}

	Euro operator-( const Euro& e2)const
		{
			Euro temp;
			temp.data = data - e2.data;
			return temp;
		}

	Euro& operator+=( const Euro& e2){

		data +=e2.data;
		return *this;

	}

	Euro& operator-=( const Euro& e2){

			data -=e2.data;
			return *this;

		}

	virtual ~Euro();
};

#endif /* EURO_H_ */
