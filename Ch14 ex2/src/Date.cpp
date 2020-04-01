/*
 * Date.cpp
 *
 *  Created on: Mar. 29, 2020
 *      Author: root
 */

#include "Date.h"
#include<iostream>
#include<ctime>

using namespace std;


Date::Date() {

	struct tm *ptr;
	time_t sec;

	time(&sec);

	ptr = localtime(&sec);


	Month = (short) ptr->tm_mon+1;
	day   = (short) ptr->tm_mday+1;
	Year  = (short) ptr->tm_year + 1900;

	// TODO Auto-generated constructor stub

}

void Date::Date(int mn  , int da , int yr ){

	if(!setDate(mn,da,yr))
	{
		mn = da = yr =1;
	}

	Month =(short) mn;
	day   =(short) da;
	Year  =(short) yr;

}

bool Date::isEqual(Date& D1, Date& D2) const {
	if( D1.Month==D2.Month && D1.day == D2.day && D1.Year == D2.Year ){
		return true;
	}
	else
		return false;

}

bool Date::isless(Date& D1, Date& D2) const {
	if( (D1.Month<=D2.Month || D1.day <= D2.day) && D1.Year <= D2.Year ){
		return true;
	}
	else
		return false;

}

const string& Date::asString()const{
	return date= to_string(Month)+'-'+to_string(day) +'-'+to_string(Year);

}

void Date::print(){

	cout<<Month<<'-'<<day<<'-'<<Year<<endl;

}

bool Date::setDate(int mn , int da ,int yr)
{
	if(mn<1 || mn>12 )
		return false;
	if(da<1 || da >12)
		return false;





}



Date::~Date() {
	// TODO Auto-generated destructor stub
}

