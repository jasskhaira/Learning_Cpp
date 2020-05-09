//============================================================================
// Name        : InsertionSort.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<iomanip>
using namespace std;


template <class T >
void InsertioSort(T* arr, int size ){
	T temp;
	for(int i = 0 ; i < size ; i++){

		for(int j = 0 ; j < size ; j++)
			if(arr[i] < arr [j]  && i != j){
				temp = arr[i];
				arr[i]= arr[j];
				arr[j]=temp;
	}}

}

template <class T >
void getentries(T* arr , int size  ){

	for(int i = 0 ; i < size ; i++)
	cin>>arr[i];
}

template <class T >
void showetentries(T* arr , int size  ){

	for(int i = 0 ; i < size ; i++)
	cout<<setw(2)<<arr[i];
}

int main() {

	int intar[10];
	char arr[10];
	double darr[10];

	cout<<"Entre int values ";
	getentries(intar , 10);

	cout<<"Entre Char values ";
	getentries(arr , 10);

	cout<<"Entre Double values ";
	getentries(darr , 10);

	InsertioSort(intar ,10);
	InsertioSort(arr ,10);
	InsertioSort(darr ,10);



	cout<<"Int Sorted array  ";
	showetentries(intar , 10);
	cout<<endl;
	cout<<"Char Sorted array  ";
	showetentries(arr , 10);
		cout<<endl;
	cout<<"Double Sorted array  " ;
	showetentries(darr , 10);


	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
