//============================================================================
// Name        : Array.cpp
// Author      : Jass Khaira
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<iomanip>

using namespace std;



int main() {

	int data[100] , i=0;
	cout<<" Enter integers  to terminate enter character "<<endl;
	for ( ; i<=10 && data[i]; i++){
		cout<<"a["<<i<<"] = ";
		cin>>data[i];
	}



	int temp,j;

		for(int k = 0; k<i ;k++){
			j=k;
			for( ; j<i ; j++){

				if(data[k]>data[j+1]){

					temp     =  data[k];
					data[k]   =  data[j+1];
					data[j+1] =  temp;

				}

			}
		}


	for(int m=0;  m<i ; m++)
	cout<<setw(5)<<data[m];

	return 0;
}






