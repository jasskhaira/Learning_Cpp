//============================================================================
// Name        : Interpolation.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int Inertpol_Search(int *arr , int size , int var){
	int lo = 0 , hi = size -1 , mid = -1 , i  ;

	while(lo<= arr[i] ){
		if( lo == hi || arr[lo] == arr [hi])
			return(-1);

		mid = lo + ((hi - lo) / (arr[hi] - arr[lo])) * (var - arr[lo]);

		if(arr[mid] == var)
			return(mid);

		else{

			if (arr[mid] < var)
				lo = mid+1;

			else if (arr[mid] > var )
				hi = mid -1;


		}

	}

}


int main() {
	int a[] = { 10 , 20 , 30 , 33 , 34 ,40 , 50 , 60 , 70 , 99};


	int loc;

	loc = Inertpol_Search( a , 10 , 34);

	cout<<" Location of 34 "<<loc;


	return 0;
}
