/*
 * DayTime.h
 *
 *  Created on: Apr. 7, 2020
 *      Author: root
 */

#ifndef DAYTIME_H_
#define DAYTIME_H_
#include<ctime>
#include<iostream>
#include<string>

using namespace std;

class DayTime {

private:
	short hour , minute, second;
	bool overflow;

public:
	DayTime( int h = 0, int  m= 0 , int s = 0);
	bool SetTime(int hr , int min ,int s );
	int getHour() const { return hour ;}
	int getMinute() const{ return minute;}
	int getSecond() const{ return second; }
	int asSecond() const { return (60*60*hour + 60*minute + second); }


	bool operator <(const DayTime& t) const
	{	return asSecond() < t.asSecond();}

	DayTime& operator++(){
		++second;
		return *this;
	}

	inline bool operator > (const DayTime& t)const
		{  return asSecond() > t.asSecond(); }

	inline bool operator <=( const DayTime& t)const
		{	return ( asSecond() < t.asSecond() || asSecond() == t.asSecond()) ; }


	inline bool operator >=(  const DayTime& t ) const
		{ return ( asSecond() > t.asSecond() || asSecond() == t.asSecond()) ; }

	inline bool operator ==( const DayTime& t)const
		{	return asSecond() == t.asSecond() ; }

	inline bool operator !=( const DayTime& t)const
			{	return asSecond() != t.asSecond() ; }


	friend ostream& operator <<(ostream& os ,DayTime& t );
	friend istream& operator >>(istream& is ,DayTime& t );

	void print()const;
	virtual ~DayTime();
};


#endif /* DAYTIME_H_ */
