/*
 * linkList.h
 *
 *  Created on: May 9, 2020
 *      Author: root
 */

#ifndef LINKLIST_H_
#define LINKLIST_H_
#include<iostream>
#include<string>
using namespace std;

struct List{
	string name;
	List* next;


};

class linkList {

private:
	List *head , *tail;
	int size;


public:
	linkList() ;
	virtual ~linkList();
	void addFront(const string& s );
	bool removeFront();

	void addLast(const string& s);

	bool removeLast();

	void Display();



};

#endif /* LINKLIST_H_ */
