/*
 * prod.cpp
 *
 *  Created on: Apr. 17, 2020
 *      Author: root
 */




/*
 * Product.cpp
 *
 *  Created on: Apr. 14, 2020
 *      Author: root
 */

#include "Prod.h"

Product::Product( long bc , const string& nm) {

	setCode(bc);
	setName(nm);
	// TODO Auto-generated constructor stub

}

Product::~Product() {
	// TODO Auto-generated destructor stub
}

void Product::scanner(){
	string name;
	long c;

	cout<<"\nEnter the name of product";
	getline(cin,name);

	cout<<"\nEnter the Barcode ";
	cin>>c;
	setCode(c);
	setName(name);
}

void Product::printer(){
	cout<<"\nName of Product is "<<getName();
	cout<<"\nBarcode  "<<getCode();

}


PrepackedFood::PrepackedFood(long c1 , const string& n1 , long up){

	Product(c1,n1);
	setPrice(up);
}

void PrepackedFood::scanner(){
	long up;
	Product::scanner();
	cout<<"\nEnter the Unit price";
	cin>>up;
	setPrice(up);

}


void PrepackedFood::printer(){


	Product::printer();
	cout<<"\nUnit Price = "<<getPrice();

}

FreshFood::FreshFood( long cf , const string& nf , long p , float w){

	Product(cf,nf);
	setWeight(w);
	setPricePP(p);
}

void FreshFood::scanner(){
	float w;
	long p;
	Product::scanner();
	cout<<"\nEnter Weight ";
	cin>>w;
	setWeight(w);
	cout<<"\nEnter Price per pound ";
	cin>>p;
	setPricePP(p);
}

void FreshFood::printer(){

	Product::printer();
	cout<<"\nWegiht = "<<getWeight();
}




