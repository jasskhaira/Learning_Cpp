/*
 * Product.h
 *
 *  Created on: Apr. 14, 2020
 *      Author: root
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class Product {


private:
	long Barcode;
	string Name;

public:
	Product( long bc = 0L , string& nm = "");
	virtual ~Product();


	//Access Metheods
	void setCode(long code ) { Barcode = code ;}
	long getCode() const { return Barcode ;}

	void setName( string& name ) { Name = name ;}
	string& getName () const {  return Name ;}

	void scanner();
	void printer();

};

class PrepackedFood: public Product{

private:
	long Unitprice;

public:

	PrepackedFood(long code = 0L , string& name = "" , long up = 0L)
	~PrepackedFood();


	long getPrice() const { return Unitprice ;}
	long setPrice( long price ) { Unitprice = price ;}

	void scanner();
	void printer();



	};
class FreshFood: public Product{

private:
	float weight;
	long PricePP;

public:

	FreshFood( long cod);
	~FreshFood();
	void setWeight( float w ) { weight = w ;}
	float getWeight()const { return weight; }

	void setPricePP( long p) { PricePP = p ;}
	long getPricePP() const { return PricePP ;}

	void scanner();
	void printer();



};

#endif /* PRODUCT_H_ */
