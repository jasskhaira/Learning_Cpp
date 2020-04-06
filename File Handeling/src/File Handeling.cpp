//============================================================================
// Name        : File.cpp
// Author      : Jaspreet Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<fstream>

using namespace std;

int main() {

ifstream file1("jass.txt");

if(!file1){
	cerr<<"An error occoured when oprning the file ";
	return 2;
}


char line [80];
int cnt;


while(file1.getline(line,80)){
	cout<<line<<endl;
	if( ++cnt == 20){

		cnt = 0;
		cout<< "-------<retuen> to continue --------"<<endl;
		cin.sync();
		cin.get();

	}
}


if (!file1.eof()){
	cerr<<"Error raeding the file "<<endl;
	return 3;

}


return 0;

}
