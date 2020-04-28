/*
 * Floatarray.cpp
 *
 *  Created on: Apr. 23, 2020
 *      Author: root
 */

#include "Floatarray.h"


BadIndex::BadIndex( int II){ InvIndx = II ; }

BadIndex::~BadIndex(){}

Floatarray::Floatarray(int n) {

	max = n ;
	cnt = 0 ;

	arrPtr = new float[n];

	// TODO Auto-generated constructor stub

}

Floatarray::Floatarray(int n , float val) {

	max = n ;
	cnt = n ;

	arrPtr = new float[n];

	for( int i = 0 ; i < max ; ++i)
		arrPtr[i] = val;

	// TODO Auto-generated constructor stub

}

float& Floatarray::operator [](int i){

	if( i < 0  || i >= cnt )
	{
		throw BadIndex(i);
		cerr<<"\n class FloatArr: out of range!";
		exit(1);
	}
	return arrPtr[i];
}

float Floatarray::operator [](int i)const{

	if( i < 0  || i >= cnt )
	{
		throw BadIndex(i);
		cerr<<"\n class FloatArr: out of range!";
		exit(1);
	}
	return arrPtr[i];
}


bool Floatarray::append(float val){

	if(cnt < max){
		arrPtr[cnt++] = val;
		return true;
	}
	else
		return false;
}

void Floatarray::append(const Floatarray& v){

	expand(cnt+v.cnt);
	for (int i = 0 ; i <  v.cnt ; ++i){
		arrPtr[i + cnt] = v[i];
	}
}

void Floatarray::remove(int pos){

	if( pos >= 0  || pos <= cnt ){
		for( int i = pos ; i < cnt -1 ; ++i){
			arrPtr[i] = arrPtr [i + 1];
			--cnt;
		}

	}
	throw BadIndex(pos);

}

Floatarray::Floatarray(Floatarray& src){
	max = src.max;
	cnt = src.cnt;

	arrPtr = new float[max];

	for( int i = 0 ; i < cnt ; ++ i)
		arrPtr[i] = src[i];

}

Floatarray& Floatarray::operator =(const Floatarray& src){

	if (this != &src){
	max = src.max;
	cnt = src.cnt;

	arrPtr = new float[max];

	for( int i = 0 ; i < cnt ; ++ i)
		arrPtr[i] = src[i];
}
return *this;
}

void Floatarray::expand(int newMax){

	if(max == newMax)
		return;
	if ( newMax < cnt )
		cnt = newMax;

	float* temp = new float[newMax];

	for( int i = 0 ; i < cnt ; ++i){
	temp[i] = arrPtr[i];
	}
	delete [] arrPtr;

	arrPtr = temp;

	max = newMax;
}



Floatarray& Floatarray::operator +=(float val){
	append(val);
	return *this;
}

Floatarray& Floatarray::operator +=(const Floatarray& v ){
	append(v);
	return *this;
}


void Floatarray::insert(float val , int pos){

	if(pos >= cnt  || pos < 0)
		throw BadIndex(pos);
	expand(1);
	for(int i = cnt ; i > pos ; --i)
		arrPtr[i] = arrPtr[i - 1];

	arrPtr[pos] = val;

}

void Floatarray::insert(const Floatarray& v , int pos){

	if(pos >= cnt  || pos < 0)
		throw BadIndex(pos);
	expand(cnt + v.cnt );
	int i;
	for( i = cnt -1; i >=pos ; --i )
		arrPtr[i+v.cnt] = arrPtr[i];

	for( i = 0 ; i < v.cnt ; ++i)
		arrPtr[i+pos]= v[i];
	cnt = cnt + v.cnt;

}

ostream& operator << ( ostream& os , const Floatarray& v){

	for(int i = 0 ; i < v.cnt ; ++i ){
		os.width();
		os<<v[i];
	}
	return os;
}

Floatarray::~Floatarray() {

	delete [] arrPtr;
	// TODO Auto-generated destructor stub
}

