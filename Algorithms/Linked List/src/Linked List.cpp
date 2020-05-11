//============================================================================
// Name        : Linked.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"linkList.h"
using namespace std;


linkList Lst;


int main() {

	Lst.addFront("hello");
	Lst.addFront("bro ");
	Lst.Display();

	Lst.removeFront();
	Lst.Display();



		return 0;
}
