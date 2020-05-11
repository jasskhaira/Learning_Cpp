/*
 * linkList.cpp
 *
 *  Created on: May 9, 2020
 *      Author: root
 */

#include "linkList.h"

linkList::linkList() {

	head = tail = NULL;
	size = 0;
	// TODO Auto-generated constructor stub

}

linkList::~linkList() {
	// TODO Auto-generated destructor stub
}


void linkList::addFront(const string& s){
	List *newnode = new List;

	newnode->name = s ;
	newnode->next= head;
	head = newnode;
	size++;

}

void linkList::addLast(const string& s){
	List *newnode = new List;
	newnode->name = s;
	tail->next = newnode;
	tail = newnode;
	size++;
}


bool linkList::removeFront(){

	List *oldnode = head;

	head = oldnode->next;

	delete oldnode;
	size--;
	return true;

}


void linkList::Display(){
	List *pos = new List;
	pos = head;
	do{
		cout<<pos->name;
		pos = pos->next;
	}while(pos != NULL);

}
