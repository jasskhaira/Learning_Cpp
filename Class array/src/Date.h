/*
 * Date.h
 *
 *  Created on: Apr. 1, 2020
 *      Author: root
 */

#ifndef DATE_H_
#define DATE_H_

#include<string>

using namespace std;


class Date {

private:
	int Month , Day , Year;


public:
	Date(): Month(1) ,Day(1) ,Year(1) {};
	Date(int mn ,int da ,int yr);
	virtual ~Date();

	void Setdate();
	bool Setdate(int mn , int da ,int yr);


	int GetMonth() const  { return Month; };
	int GetDay()   const  { return Day;   };
	int GetYear()  const  { return Year;  };

	bool isEqual(const Date& d)const ;
	bool isLess( const Date& d)const;

	const string& asString() const;
	void print() const;

};


#endif /* DATE_H_ */
