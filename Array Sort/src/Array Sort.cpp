//============================================================================
// Name        : Array.cpp
// Author      : Jaspreet Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void selectionSort(int *arr , int len);




int main() {
	int data[100] , length;

	cout<<"Enter the numbers of elemnts in array ";
	cin>>length;

	for(int i = 0 ; i<= length ; i++){
		cout<<"Enter A["<<i<<"] = ";
		cin>>data[i];
	}

	selectionSort(data, length);

	for(int j = 0 ; j<=length ; j++ ){
		cout<<"   "<<data[j];

	}

}


void selectionSort(int *arr , int len){

	int *temp;

	for (int j = 0  ; j <= len ;j++ ){

		for (int i = 0 ; i <= len ; i++ ){

			if( *(arr + j) < *(arr + i ))
			{
				*temp = *(arr + i );
				*(arr + i ) = *(arr + j) ;
				*(arr + j)  = *temp;
			}
		}
	}
}



