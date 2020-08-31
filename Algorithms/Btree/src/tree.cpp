/*
 * tree.cpp
 *
 *  Created on: Aug. 30, 2020
 *      Author: jass
 */

#include "tree.h"

tree::tree(int val) {

	node *newnode = new node;
	newnode->Data = val;
	newnode->parent = NULL;
	newnode->left = NULL;
	newnode->right = NULL;
	current = newnode;
	root = newnode;
	size = 1;

	// TODO Auto-generated constructor stub

}

bool tree::append_node(int val){


	return true;
}

tree::~tree() {
	// TODO Auto-generated destructor stub
}

