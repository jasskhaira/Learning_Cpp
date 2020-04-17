/*
 * Cars.cpp
 *
 *  Created on: Apr. 12, 2020
 *      Author: root
 */

#include "Cars.h"



Cars::Cars(long n  , const string& prod ) {

	cout<<"Creating an object of Cars Type"<<endl;
	setNr(n);
	setProd(prod);
	// TODO Auto-generated constructor stub

}

Cars::~Cars() {

	cout<<"\nObject of Cars Type has been destroyed";
	// TODO Auto-generated destructor stub
}

void Cars::display(void)const{
	cout <<"\nNumber = "<<getNr();
	cout<<"\nProducer "<<getProd();

}



PassCar::PassCar( const string& tp , bool sd , int n ,const string& hs ){


	Cars( n , hs);
	setType(tp);
	sunRoof = sd;
	cout<<"\nObject of PassCar type has been created";

}


PassCar::~PassCar(){
	cout<<"\nObject of PassCar Type has been destroyed";
}


void PassCar::display()const{

	Cars::display();
	cout<<"\nType of Passenger Car "<<getType();

	if(!getSunRoof() )
		cout<<"\nNo Sunroof ";
	else
		cout<<"\nIt has Sunroof ";

	}

Truck::Truck( int na , double lc ,long n  ,const string& producer ){

	Cars(n , producer );
	setAxles( na);
	setCapacity( lc );
	cout<<"\nObject of Truck class has been Created";
}

Truck::~Truck(){

	cout<<"\nObject of Truck class has been Destroyed";
}

void Truck::display()const{

	Cars::display();
	cout<<"\nNumber of Axles "<<getAxles();
	cout<<"\nLoad Capacity "<<getCapacity();

}
