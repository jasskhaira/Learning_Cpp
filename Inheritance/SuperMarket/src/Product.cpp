/*
 * Product.cpp
 *
 *  Created on: Apr. 14, 2020
 *      Author: root
 */

#include "Product.h"

Product::Product( long bc , string& nm) {

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

	cout<<"\nEnter the Barcode Number";
	cin>>c;
	setCode(c);
	setName(name);
}

void Product::printer(){
	cout<<"\nName of Product is "<<getName();
	cout<<"\nBarcode Number "<<getCode();

}


PrepackedFood::PrepackedFood(long code , string& name , long up){

	Product(code,name);
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
