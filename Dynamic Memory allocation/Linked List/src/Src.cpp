//============================================================================
// Name        : Linked.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include"List.h"
#include <iostream>
using namespace std;

int main() {

	cout<<"************** Testing Class List ***************"<<endl;

	List alist;

	//cout<<alist<<endl;

	Date date(10 , 12 , 2020) , d2(2 ,11 , 2020 ) ;
	double amount = 122.5 , a2 = 44.6;

	alist.pushBack(date , amount);
	alist.pushBack(d2 , a2);

	cout<<alist<<endl;




	return 0;
}
