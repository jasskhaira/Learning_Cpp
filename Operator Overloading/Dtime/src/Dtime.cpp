//============================================================================
// Name        : Dtime.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"DayTime.h"
using namespace std;


DayTime T1 , T2(10 , 30 ,30 );

int main() {

	T1.SetTime(10 ,32 , 4);
	cout<<T2<<endl;
	cout<<T1<<endl;
	cin>>T1;

	cout<<T1<<endl;


	if( T1 < T2 )
	{
		cout<<"T1 is less than T2";

	}
	else
		cout<<"T1 is greater than T2 ";

}
