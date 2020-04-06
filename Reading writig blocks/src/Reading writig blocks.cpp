//============================================================================
// Name        : Reading.cpp
// Author      : Jaspreet Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<fstream>

using namespace std;

char  header[] = " ***** K H A I R A  P I Z Z A *****\n\n";


struct Pizza { char name[20] ; float price; };
const int MAXCNT = 10 ;


Pizza pizzaMenu[10] = {
		{ "Peproni" , 9.99} ,
		{"Veg Pizza " , 8.99} ,
		{"Ham Pizza " , 12.50F },
		{"Todays Special ",  7.99 }
};


int cnt = 4 ;

char pizzaFile[256] = "pizza.txt";

int main() {
	cout<<header<<endl;

	int exitcode = 0;
	ofstream outfile("pizzaFile.txt" );

	if(!outfile){
		cerr<<"Error opening file "<<endl;
		exitcode = 1;

	}
	else {
		for(int i=0 ; i < cnt ; ++i){
			if(!outfile.write((char*)&pizzaMenu[i],sizeof(Pizza)))
			{
				cerr<<"Error wrinting!"<<endl;
				exitcode = 2;

			}


		}


	}

	if( exitcode == 0 )
		cout<<"\nData has been added to file "<<pizzaFile<<"\n"<<endl;
	return exitcode;

}
