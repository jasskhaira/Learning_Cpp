//============================================================================
// Name        : Doubly.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"DLL.h"
using namespace std;

node nodes[] = { node("One") , node("Two") , node("Three")  , node("Four") };

DLL list;

int main() {

	for(int i = 0 ; i < 4 ; i++ )
		list.addFront(nodes[i]);

	//cout<<list.getSize()<<endl;

	list.removeFront();

	cout<<list;




	return 0;
}
