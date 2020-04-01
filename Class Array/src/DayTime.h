/*
 * DayTime.h
 *
 *  Created on: Apr. 1, 2020
 *      Author: root
 */

#ifndef DAYTIME_H_
#define DAYTIME_H_t
#include<string>

using namespace std;


class DayTime {

private:
	int Month , Day , Year;


public:
	DayTime(): Month(1) ,Day(1) ,Year(1) {};
	DayTime(int mn ,int da ,int yr);
	virtual ~DayTime();

	void Setdate();
	bool Setdate(int mn , int da ,int yr);


	int GetMonth() const;
	int GetDay()   const;
	int GetYear()  const;

	bool isEqual(const DayTime& )const ;
	bool isLess( const DayTime& )const;

	const string& asString() const;
	void print() const;

};

#endif /* DAYTIME_H_ */
