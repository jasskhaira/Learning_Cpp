/*
 * DLL.cpp
 *
 *  Created on: May 10, 2020
 *      Author: root
 */

#include "DLL.h"

node::node(const string&  d){
	data = d;
	next = prev = NULL;
}

node::~node(){}


DLL::DLL() {
	head = tail = NULL;
	size = 0;
	// TODO Auto-generated constructor stub

}

DLL::~DLL() {
	// TODO Auto-generated destructor stub
}


int DLL::addFront(node& nod){
	if (size == 0 ){
		head = tail = &nod;
		size++;
		return size;
	}

	node* newnode = new node();
	newnode = &nod;
	newnode->next = head;
	head->prev = newnode;
	newnode = head;
	size++;
	return(size);

}

int DLL::removeFront(){
	if(size == 0)
		return -1;

	node* temp = new node();

	temp = head;
	head = head->next;
	head->prev=NULL;

	delete temp;
	cout<<size;
	size-- ;
	return size;
}


int DLL::addEnd(node& nod){
	if (size == 0 ){
			head = tail = &nod;
			size++;
			return size;
		}

	node* newnode = new node();
	newnode = &nod;
	newnode->prev = tail;
	newnode->next=NULL;
	tail = newnode;
	size++;
	return size;
}


int DLL::removeEnd(){
	if (size == 0)
		return -1;

	node* temp = new node();
	temp = tail;
	tail = tail->prev;
	tail->next = NULL;

	delete temp;
	size-- ;
	return size;
}


void DLL::Display(){

	node *temp = head;

	do{
		cout<<temp->data;
		temp = temp->next;
	}while(temp->next !=NULL );

}



