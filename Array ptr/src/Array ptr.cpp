//============================================================================
// Name        : Array.cpp
// Author      : Jaspreet Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<iomanip>
using namespace std;



int str_cmp(const char *str1 , const char *str2){

	for(    ; *str1 == *str2 && *str1 != '\0' ; str1++ ,str2++ )
		;

		return(*str1 - *str2 );

}




int main() {
/*
	int v[] = { 10 , 20 , 30 ,40 } , i , *pv;

	for( pv = v ; pv <= v+2 ; pv++ )
		cout<<"        *pv=  "<< *pv;
	cout<<endl;
	for( pv = v , i = 1; i <= 3 ; i++ )
		cout<<"            pv[i]"<< pv[i];
	cout<<endl;
	for (pv = v , i = 0 ; pv+i <= &v[3] ; pv++ , i++)
		cout<<"      *(pv+i) =  "<< *(pv+i);

	cout<<endl;
	for ( pv = v+3 ; pv >= v ;  --pv )
		cout<<"  v["<<(pv -v) << "] = "<< v[pv - v];

-------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------
*/
/*
--------------------------------------------------------------------------------------------------
PRINTING LINE IN REVERSE ORDER
-------------------------------------------------------------------------------------------------

	char arr[100], *aptr;



	for(aptr = arr ;  aptr<=arr +100 && cin.get(*aptr) &&*aptr != '\n'; aptr++);


	while( aptr-- >= arr ){
		cout<<aptr;
		//cout<<*aptr<<endl;
	}
	cout<<endl;


*/



	char line1[100], line2[100], *line1ptr1 , *lineptr2 ;









	cout<<"Enter the fist line ";

	cin.sync();
	cin.clear();

	cin.get(line1,100);
	//for(line1ptr1 = line1 ;  line1ptr1 <= line1 +100 &&  cin.get(*line1ptr1) && *line1ptr1 != '\n'; line1ptr1++);



	cout<<"Enter the 2nd line ";

	cin.sync();
	cin.clear();

	cin.get(line2,100);
	//for(lineptr2 = line2 ;  lineptr2<=line2 +100 &&  cin.get(*lineptr2) && *lineptr2 != '\n'; lineptr2++);




	//cout<<str_cmp(line1ptr1,lineptr2);
	if(str_cmp(line1,line2)==1){

		cout<<"lines are equal";

	}













	return 0;
}
