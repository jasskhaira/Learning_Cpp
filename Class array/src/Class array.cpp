//============================================================================
// Name        : Class.cpp
// Author      : Jaspreet Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include"Date.h"

using namespace std;

Date D[]={ Date(03 , 12 ,1994) , Date(01 ,03 , 2002 ) , Date(01, 04 , 2019 ), Date()};

int main() {

	D[3].Setdate();

	for(int i=0 ; i<=3 ; i++){
		D[i].print();

	}




	return 0;
}
