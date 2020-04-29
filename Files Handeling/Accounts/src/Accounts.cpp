//============================================================================
// Name        : Accounts.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"Account.h"
#include<fstream>
using namespace std;

int main() {
	Account TestObj[2], a[] = { Account("Jass" , 1234 , 500)
							, Account("Ani" , 34344 , 800)
							, Account("Harry"  , 7787 , 999)};

	SavAcc m("Mike" , 123 , 700 , 2.99);
	char file[] = "Account.txt" , f2[] = "file.fle";

	ofstream acc(f2, ios::out | ios::binary);
	if(!acc){
		cerr<<"Error opening file"<<endl;
		exit(1);
}

	for( int i = 0 ; i < 3 ; ++i ){
	if(!a[i].write(acc))
		cerr<<"Error writting on file" << endl;
	}
	acc.close();

	ifstream ain(f2, ios::out | ios::binary);

	for( int i = 0 ; i < 3 ; ++i ){
		if(!TestObj[i].read(ain))
			cerr<<"Error Reading" << endl;
		}

	//for(int j = 0 ; j< 3 ; ++j)
		cout<<m<<endl;

	ain.close();



}
