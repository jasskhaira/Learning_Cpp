/*
 * DayTime.cpp
 *
 *  Created on: Apr. 7, 2020
 *      Author: root
 */

#include "DayTime.h"

DayTime::DayTime(int h , int  m , int s ) {


	SetTime( h , m , s);

	// TODO Auto-generated constructor stub

}

bool DayTime::SetTime(int hr , int min , int s ){


	if( hr >=0  && hr < 24  &&
		min >= 0 && min < 60 &&
		s >= 0 && s < 60 ){

		hour   = (short) hr;
		minute = (short) min;
		second    = (short) s;
		return true;



	}
	else{

		//cerr<<"Enter Correct values of time"<<endl;
		return false;
}

}


void DayTime::print()const{

	cout<<"Time is "<<getHour()<<':'<<getMinute()<<':'<<getSecond()<<endl;


}


DayTime::~DayTime() {
	// TODO Auto-generated destructor stub
}




ostream& operator <<(ostream& os ,DayTime& t ){

	  os<<t.getHour()<<':'
		<<t.getMinute()<<':'
	  <<t.getSecond();

	  return os;
}


istream& operator >>(istream& is , DayTime& t )
	{

	  int h =0 , s= 0 , m = 0;
	  char c1 = 0 , c2 = 0;
	  cout<<"Enter Time in hh:mm:ss";

	  cin.sync(); 	cin.clear();

	  if(!(is>>h>>c1>>m>>c2>>s))
		  return is ;

	  if(c1==':' && c2 == ':' && t.SetTime( h , m , s) )
		is.setstate(ios::failbit);
	 return is;
	}
