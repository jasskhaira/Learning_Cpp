//============================================================================
// Name        : TelephoneDir.cpp
// Author      : Jaspreet Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"TelList.h"
using namespace std;

char menu();


TelList MyContacts;

int main() {

	char option;
	string nm;
	MyContacts.append( "Jasspreet" , "416-270-1580" );
	MyContacts.append( "Milkha" , "416-270-1581" );

	cout<<MyContacts.getcount();

	cout << "************   Telephone List  ***********" << endl; // prints !!!Hello World!!!

	while(option!='Q'){
	option = menu();

	switch(option){

		case 'D':
			MyContacts.print();
			break;
		case 'F':
			cout<<"\n Enter the name to seach ";
			cin>>nm;
			MyContacts.print(nm);
			break;
		case 'A':
			MyContacts.getNewEntries();
			break;
		case 'E':
			cout<<"Enter the name to erase the contact ";
			cin>>nm;
			MyContacts.erase(nm);
			break;



	}


	}
	return 0;
}


char menu(){

	static char menustr[] = {
	"\n\n			D = Display all entries"
	"\n\n			F = Find a telephone number"
	"\n\n			A = Append a new entry "
	"\n\n			E = Erase an entry "
	"\n\n			Q = Quit the program"
	"\n\n Your choice: "


	};
	char choice;
	cout<<menustr;
	cin.sync();
	cin.clear();
	cin>>choice;

	return choice;

}
