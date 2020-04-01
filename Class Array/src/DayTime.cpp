/*
 * DayTime.cpp
 *
 *  Created on: Apr. 1, 2020
 *      Author: root
 */

#include "DayTime.h"
#include<ctime>

DayTime::DayTime(int mn ,int da ,int yr) {

	Month = mn;
	Day   = da;
	Year  = yr;

	// TODO Auto-generated constructor stub

}

DayTime::~DayTime() {
	// TODO Auto-generated destructor stub
}



void DayTime::Setdate(){

	struct tm *dur;

	time_t sec;

	time(&sec);
	dur = localtime(&sec);

	Month = (short) dur->tm_mon;
	Day   = (short) dur->tm_mday;
	Year  = (short) dur->tm_year;
}


bool DayTime::Setdate(int mn , int da ,int yr){


	if( mn < 1 || mn > 12 || da < 1 || da > 31 )
		return false;


	Month = mn;
	Day   = da;
	Year  = yr;




}






