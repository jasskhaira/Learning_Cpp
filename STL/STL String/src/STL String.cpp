//============================================================================
// Name        : STL.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
#include<iterator>
using namespace std;

int main() {

	string out = "Hello", cpy(out) ,cp2(out,2), a5(5,'a');

	cout<<out<<endl;
	cout<<cpy<<endl;
	cout<<cp2<<endl;
	cout<<a5<<endl;

	//Accessing the contents using iterators

	string data = "My name is eric";

	string::const_iterator itr;
	for (auto itr = data.begin() ; itr != data.end(); itr++){
		cout<<*itr;

	}

	return 0;
}
