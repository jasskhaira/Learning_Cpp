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


int main() {


	node nodes[] = { node("One") , node("Two") , node("Three")  , node("Four") };

	DLL list;

	cout<<list.getSize();
	for(int i = 0 ; i < 4 ; i++ )
		list.addFront(nodes[i]);

	cout<<list.getSize();
	list.Display();




	return 0;
}
