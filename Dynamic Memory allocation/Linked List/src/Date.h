/*
 * Date.h
 *
 *  Created on: Apr. 10, 2020
 *      Author: root
 */

#ifndef DATE_H_
#define DATE_H_

#include<iostream>
#include<iomanip>

#include<string>

using namespace std;

class Date {

private:
	int Month , day , Year;

	string date;

public:
	Date();

	Date(int month, int day , int year);

	virtual ~Date();

	void setDate();

	bool setDate(int mn, int da, int yr);

	int getMonth() const { return Month; };
	int getYear()  const { return Year ; };
	int getDay()   const { return day ;  };

	bool isEqual(Date& , Date& ) const ;
	bool isless(Date& , Date&)   const ;
	const string& asString() const;
	void print();

	inline bool isleapyr(int);
};
#endif /* DATE_H_ */