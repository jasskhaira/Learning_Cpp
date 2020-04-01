/*
 * Date.cpp
 *
 *  Created on: Apr. 1, 2020
 *      Author: root
 */

#include "Date.h"
#include<ctime>
#include<iostream>


using namespace std;

Date::Date(int mn ,int da ,int yr) {

	Month = mn;
	Day   = da;
	Year  = yr;

	// TODO Auto-generated constructor stub

}

Date::~Date() {
	// TODO Auto-generated destructor stub
}



void Date::Setdate(){

	struct tm *dur;

	time_t sec;

	time(&sec);
	dur = localtime(&sec);

	Month = (short) dur->tm_mon;
	Day   = (short) dur->tm_mday;
	Year  = (short) dur->tm_year;
}


bool Date::Setdate(int mn , int da ,int yr){


	if( mn < 1 || mn > 12 || da < 1 || da > 31 )
		return false;


	Month = mn;
	Day   = da;
	Year  = yr;
	return true;

}

void Date::print() const {

	cout<<Month<<'-'<<Day<<'-'<<Year<<endl;

}



bool Date::isEqual(const Date& d )const{

	return Month == d.Month && Day == d.Day &&  Year == d.Year;


}


bool Date::isLess(const Date& d) const {
	if( Year != d.Year)
		return Year < d.Year;
	else if(Month != d.Month )
		return Month < d.Month;
	else
		return Day < d.Day;
}




