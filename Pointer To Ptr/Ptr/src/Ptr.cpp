//============================================================================
// Name        : Ptr.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stdarg.h>
using namespace std;


unsigned int min(unsigned int first , ...){

	unsigned int arg, min = first;
	va_list vap;

	va_start(vap , first);

	while((arg=va_arg(vap,unsigned int))!= 0){
		if(arg< min)
			min = arg;
	}

	va_end(vap);
	return min;


}

int main() {

	cout<<min(23,45,65,76,87,8,0);

	return 0;
}
