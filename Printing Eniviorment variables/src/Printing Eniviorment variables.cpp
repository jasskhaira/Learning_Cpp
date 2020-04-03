//============================================================================
// Name        : Printing.cpp
// Author      : Jaspreet Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(int argc , char* argv , char *env) {

	cout<<"Program :"<< argv<<endl;

	int i ;
	for (i = 1 ; i< argc ; i++ )
		cout<< argv[i]<<endl;

	cout<<"type <Return>  to go on ";
	cin.get();

	cout<<"\nEnvironment strings :"<<endl;


	//for(i = 0 ; env[i] != NULL ; i++)
		cout<<*env<<endl;



	return 0;
}
