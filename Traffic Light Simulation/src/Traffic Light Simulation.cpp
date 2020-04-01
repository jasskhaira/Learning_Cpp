//============================================================================
// Name        : Traffic.cpp
// Author      : Jass Khaira
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<iomanip>
#include<string>
#include"Lights.h"
#include <unistd.h>

using namespace std;

Lights L1, L2(Lights::off);

inline void wait(int sec) {  sleep(sec);   }

int main() {
	string line(50,'-');
	cout << "Simulation of Traffic Lights!"<< endl; // prints !!!Hello World!!!

	cout<< "Terminate this program with Esc key "<< endl;

	cout<<"1. Light "<<setw(10)<<"2 . Lights"<<endl;
	cout<<line<<endl;
	while(1){
		L1.setState(Lights::Red);



	}

	return 0;
}
