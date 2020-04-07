//============================================================================
// Name        : Reading.cpp
// Author      : Jaspreet Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<fstream>
#include<iomanip>
using namespace std;

char  header[] = " ***** K H A I R A  P I Z Z A *****\n\n";


struct Pizza { char name[20] ; float price; };
const int MAXCNT = 10 ;

Pizza pizzaread;

Pizza pizzaMenu[10] = {
		{ "Peproni" , 9.99} ,
		{"Veg Pizza " , 8.99} ,
		{"Ham Pizza " , 12.50F },
		{"Todays Special ",  7.99 }
};


int cnt = 4 ;

char pizzaFile[256] = "pizza.txt";

int j =0 ;

int main() {
	cout<<header<<endl;

	cout<<"How many menu items you want to add in Menu ";
	cin>>j;







	for( j+=cnt ; cnt < j ; cnt++ ){


		cout<<"Enter the name of item ";
		cin>>pizzaMenu[cnt].name;
		cout<<"Enter the price of "<<pizzaMenu[cnt].name;
		cin>>pizzaMenu[cnt].price;
	}

	cout<<cnt;
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
	outfile.close();

	ifstream  infile("pizzaFile.txt");

	if(!infile)
		cerr<<"Error loading file";


		while(true)
			if(!infile.read((char*)&pizzaread,sizeof(Pizza))){
				cerr<<"Error reding file ";
				break;
			}
			else
			{

				cout<<pizzaread.name<<setw(10)<<pizzaread.price<<endl;


			}



		}




