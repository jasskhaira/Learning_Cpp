/*
 * List.cpp
 *
 *  Created on: Apr. 10, 2020
 *      Author: root
 */

#include "List.h"

List::List() {

	first = last =NULL;
	// TODO Auto-generated constructor stub

}

void List::pushBack(const Date& d , double b){

	ListE1 *pE1 = new ListE1(d , b );
	if (first == NULL)
		first = last = pE1;
	else
		last->next = pE1 , last = pE1;



}


void List::popFront(){

	if(first != NULL){
		ListE1 *pE1 =  first;
		first = first->next;
		delete pE1;
		if (first == NULL)
			last= NULL;
	}
}


ostream& operator<<(ostream& os , ListE1& l){

	os<<l.date.asString()<<" Ammount = ";
	os<<fixed <<setprecision(2)<<setw(10)
	<<l.getAmmount();
	return os;

}

ostream& operator<<(ostream& os , List& l){

	ListE1 *pE1 = l.front();
	if(pE1==NULL)
		os<<"List is empty "<<endl;

	else
		for ( ; pE1==NULL ; pE1 = pE1->getNext())
			os<<*pE1 <<endl;
	return os;

}


List::~List() {

	ListE1 *pEl = first, *next = NULL;
	for( ; pEl != NULL; pEl = next)	{
	next = pEl->next;
	delete pEl;
	}
	// TODO Auto-generated destructor stub
}

