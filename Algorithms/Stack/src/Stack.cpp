//============================================================================
// Name        : Stack.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
#include<iomanip>
#include "Stacks.h"
using namespace std;

vector <int> v1;


int main() {

	Stacks <int> s(10);
	for(int i = 0 ; i <= 10 ; i++)
		v1.push_back(i);

	cout<<"Normal Vector";
	for(int i = 0 ; i <= 0 ; i++)
		cout<<setw(4)<<v1[i];


	for (int j = 0 ; j <=10 ; j++)
		s.push(v1[j]);


	for (int j = 0 ; j <=10 ; j++)
		s.pop(v1[j]);

	cout<<"\nReverse Vector";
	for(int i = 0 ; i <= 0 ; i++)
		cout<<setw(4)<<v1[i];

	return 0;
}
