/*
 * DLL.h
 *
 *  Created on: May 10, 2020
 *      Author: root
 */

#ifndef DLL_H_
#define DLL_H_

#include<iostream>
#include<string>

using namespace std;

class  node{
private:
	string data;
	node *next , *prev;
	friend class DLL;
public:
	node(const string&  d = " ");
	~node();
	string getdata()const { return data;}
	node* getnext()const { return next;}
};


class DLL {
private:
	node *head , *tail;
	int size;

public:
	DLL();
	~DLL();

	int getSize()const { return  size ;}

	node& getHead()const { return *head ;}
	node& getTail()const { return *tail;}

	int addFront(node & nod);
	int removeFront();

	int addEnd(node& nod);
	int removeEnd();
	void Display();




};


#endif /* DLL_H_ */
