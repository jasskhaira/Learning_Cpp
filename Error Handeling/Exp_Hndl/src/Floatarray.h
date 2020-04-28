/*
 * Floatarray.h
 *
 *  Created on: Apr. 23, 2020
 *      Author: root
 */

#ifndef FLOATARRAY_H_
#define FLOATARRAY_H_

#include<iostream>
#include<iomanip>
#include<fstream>

using namespace std;

class BadIndex{

private:
	int InvIndx;

public:
	BadIndex( int II);
    ~BadIndex();

	int getBadIndex()const { return InvIndx ;}




};



class Floatarray {

private:
	float* arrPtr;
	int max;

	int cnt;

	void expand( int newMax );

public:
	Floatarray(int n = 256 );
	Floatarray(int n , float val);
	 ~Floatarray();

	Floatarray( Floatarray& src );

	Floatarray& operator= ( const Floatarray& src);

	int length() const { return cnt ;}
	float& operator[]( int i );
	float operator[](int i) const;

	Floatarray& operator += (float val);
	Floatarray& operator += (const  Floatarray& v);


	void insert( float val, int pos);
	void insert( const Floatarray& v, int pos);

	bool append( float val);
	void append( const Floatarray& v);
	void remove( int pos);

	friend ostream& operator << ( ostream& os , const Floatarray& v);


};





#endif /* FLOATARRAY_H_ */
