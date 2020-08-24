//============================================================================
// Name        : Pattrens.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cstdlib>
using namespace std;

int main() {

	int num= -6 ;
	for ( int j = 1 ; j <= 8 ; j++){
	for ( int i = 1 ; i <= abs(8 - num)  ; i ++){
	cout << "#"<<abs(8 - num);

	}
	num += 2;
	cout<<endl;
	}
	return 0;
}
