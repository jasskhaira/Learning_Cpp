/*
 * Cars.h
 *
 *  Created on: Apr. 12, 2020
 *      Author: root
 */

#ifndef CARS_H_
#define CARS_H_

#include<string>
#include<iostream>
#include<iomanip>
using namespace std;

class Cars {

private:
	long nr;
	string producer;


public:

	Cars(long n = 0L , const string& prod = "");
	virtual ~Cars();

	// Access Methods
	long getNr(void) const {  return nr ;}
	void setNr( long n )  { nr = n ; }

	const string& getProd() const { return producer; }
	void setProd( const string& p) { producer = p ;}

	virtual void display(void) const;



};


class PassCar:  public Cars{

private:
	string passCarType;
	bool sunRoof;

public:

	PassCar( const string& tp , bool sd , int n = 0 ,const string& h = "");
	~PassCar();
	const string& getType() const {  return passCarType ;}

	void setType(  const string& tp) { passCarType = tp; }
	bool getSunRoof( ) const {  return sunRoof;  }
	void setSunroof(bool b ) { sunRoof = b; }
	void display() const ;



};


class Truck: public Cars{

private:
	int Num_of_axles;
	double Loadcapacity;

public:
	Truck( int na = 0 , double lc = 0 ,long n = 0L , const string& producer = "" );

	~Truck();

	void setAxles ( int a ) { Num_of_axles = a; }

	int getAxles() const { return Num_of_axles;}

	void setCapacity( double cp) { Loadcapacity = cp ;}
	double getCapacity() const { return Loadcapacity; }

	void display()const;

};



class CityCar: public Cars{

private:
	Cars* pcar[100];
	int Cn;

public:
	CityCar():Cn(0){};
	~CityCar(){ delete pcar; }

	bool insert( const string& tp, bool sr , long n , const string& prod );

	bool insert( int a , double t , long n , const string& prod);


	void display()const;

};

#endif /* CARS_H_ */
