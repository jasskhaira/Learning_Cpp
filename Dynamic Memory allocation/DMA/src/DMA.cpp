//============================================================================
// Name        : DMA.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<iomanip>
using namespace std;



int *splice(int *arr1 , int as1 , int *arr2, int as2  , int pos);

int main() {

	int ar1[7] =  { 3,4,5,7,8,9  } , ar2[5] = {  0 ,0 ,1 , 0 ,0 };
	int *ar3 = new int[ 7+5  ];

	ar3 = splice( ar1,7,  ar2 , 5 , 2);

	for( int i=0 ;i<=7+5; i++)
	cout <<setw(10)<<ar3[i]; // prints !!!Hello World!!!

	delete [] ar3;
	return 0;
}

int *splice(int *arr1 , int as1 , int *arr2, int as2  , int pos){


	int *temparr = new int[as1 + as2];
	int i , j;

	for ( i=0 ; i<=pos ; ++i ){

		temparr[i] = arr1[i];
		cout<<"temp ["<<i<<"] "<<temparr[i]<<endl;

	}

	for(  j = 0 ; j<=as2 ; ++j , ++i){

		temparr[i]=arr2[j];
		cout<<"temp ["<<i<<"] "<<temparr[i]<<endl;

	}

	for ( j = pos+1; j<=as1 ; ++j , ++i){

		temparr[i]= arr1[j];
		cout<<"temp ["<<i<<"] "<<temparr[i]<<endl;
	}

	return temparr;
}
