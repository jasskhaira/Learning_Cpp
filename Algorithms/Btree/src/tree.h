/*
 * tree.h
 *
 *  Created on: Aug. 30, 2020
 *      Author: jass
 */

#ifndef TREE_H_
#define TREE_H_

#include<iostream>
#include<LinkedBinaryTree>
using namespace std;

struct node{
	int Data;
	node *left , *right , *parent;


};



class tree {
public:


	node *root, *current ;
	int size;


	tree(int val = 0);
	virtual ~tree();

	bool append_node(int val);
	bool delete_node();
	int getsize()  const{ return size ;}
	node getroot() const{ return root;  }
	node getcurrent() const{ return current;}




};

#endif /* TREE_H_ */
