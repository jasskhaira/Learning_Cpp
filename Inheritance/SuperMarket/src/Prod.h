/*
 * Product.h
 *
 *  Created on: Apr. 14, 2020
 *      Author: root
 */

#ifndef PROD_H_
#define PROD_H_
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class Product {


private:
	long Barcode;
	string Name;

public:
	Product( long bc = 0L ,const string& nm = "");
    ~Product();


	//Access Metheods
	void setCode(long code ) { Barcode = code ;}
	long getCode() const { return Barcode ;}

	void setName(const string& name ) { Name = name ;}
	const string& getName () const {  return Name ;}

	void scanner();
	void printer();

};

class PrepackedFood: public Product{

private:
	long Unitprice;

public:

	PrepackedFood(long code = 0L , const string& name = "" , long up = 0L);
	~PrepackedFood(){};


	long getPrice() const { return Unitprice ;}
	void setPrice( long price ) { Unitprice = price ;}

	void scanner();
	void printer();



	};


class FreshFood: public Product{

private:
	float weight;
	long PricePP;

public:

	FreshFood( long code = 0L , const string& name = "", long p = 0L , float w = 0);
	~FreshFood(){};
	void setWeight( float w ) { weight = w ;}
	float getWeight()const { return weight; }

	void setPricePP( long p) { PricePP = p ;}
	long getPricePP() const { return PricePP ;}

	void scanner();
	void printer();

};


#endif /* PRODUCT_H_ */
