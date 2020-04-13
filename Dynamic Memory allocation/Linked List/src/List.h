/*
 * List.h
 *
 *  Created on: Apr. 10, 2020
 *      Author: root
 */

#ifndef LIST_H_
#define LIST_H_
#include<iostream>
#include<iomanip>
#include"Date.h"

using namespace std;

class ListE1 {

private:
	Date date;
	double amount;
	ListE1 *next;

public:

	ListE1( Date d = Date( 1 , 1 ,1 ) ,
			double b =0.0 ,
			ListE1* p = NULL)
	:date(d) , amount(b) , next(p){};

//Access Methods
	double getAmmount() const { return amount ;}
	ListE1* getNext() { return next ; }
	friend class List;
	friend ostream& operator<<(ostream& os , ListE1& l1);

};


class List {

private:
	ListE1* first , *last;


public:
	List();
	virtual ~List();


	ListE1* front() const { return first ;}
	ListE1* back() const { return last ; }

	void pushBack(const Date& d , double b );

	void popFront();
	friend  ostream& operator<<(ostream& os , List& l);

};

#endif /* LIST_H_ */
