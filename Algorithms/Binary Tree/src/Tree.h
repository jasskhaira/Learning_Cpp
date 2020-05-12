/*
 * Tree.h
 *
 *  Created on: May 12, 2020
 *      Author: root
 */

#ifndef TREE_H_
#define TREE_H_
#include<iostream>
#include<string>

using namespace std;

struct node{

	int data;
	node *parentPtr , *childPtr;


};

class Tree {

private:
	node* Node;

public:
	Tree();
	virtual ~Tree();

	void insert(int& n);
};

#endif /* TREE_H_ */
