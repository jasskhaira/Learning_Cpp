//============================================================================
// Name        : Iterators.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {

	vector<int> intArr;

	for(int i = 0 ; i < 11 ; i++)
		intArr.push_back(i);

	vector<int>::iterator arrItr = intArr.begin();

	while(arrItr != intArr.end()){
		cout<<*arrItr<<endl;
		arrItr++;
	}



	auto elFound = find(intArr.begin(),intArr.end(),7);

	if(elFound != intArr.end() ){

		int pos = distance(intArr.begin(),elFound);
		cout<<"Val "<<*elFound;
		cout<<"Pos "<<pos;

	}


	string s = "HELLO WORLD! ";

	auto sItr = s.cbegin();

	while(sItr != s.cend()){
		cout<<*sItr;
	sItr++;
	}

	cout<<"Size "<<intArr.capacity()<<" SS "<<s.capacity();



	return 0;
}
