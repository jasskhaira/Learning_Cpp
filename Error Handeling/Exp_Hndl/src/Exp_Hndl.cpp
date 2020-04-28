//============================================================================
// Name        : Exp_Hndl.cpp
// Author      : Jaspreet Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"Floatarray.h"
using namespace std;

int main(){

	const Floatarray v(10 , 99);
	bool ok = false;


	while(!ok){
		try{
			cout<<"Here is the constant array : \n";
			cout<<setw(8) << v <<endl;

			int i;
			cout<<"Index?" ;  cin>>i;
			cout<<"\nThe value read :"<<v[i]<<endl;
			ok=true;
		}
		catch(BadIndex& err){
			cerr<<"Error\n"
				<<"Invalid Index"<<err.getBadIndex()<<endl;


		}
	}

	Floatarray w(20);
	// Array w
	try
	{
		w.insert(1.1F, 0);
		// To write.
		w.insert(2.2F, 1);
		w.insert(3.3F, 3);
		// Error!
		w[10] = 5.0;
		// Error!
		w.remove(7);
	// Error!
	}
	catch(BadIndex& err)
	{
		cerr << "\nError in writing! "
		<< "\nInvalid index: "
		<< err.getBadIndex() << endl;
		}
		cout << "\nHere is the array: \n";
		cout << setw(5) << w << endl;
		return 0;
	}






/*


Floatarray a1(10) , a2(15 , 0.1);

int main() {
	cout<<"Current total of elements in a1: "
			<<a1.length()<<endl;
	cout<<"Current total of elements in a2: "
			<<a2.length()<<endl;

	float x = -5.4 ;
	for( ; x< 6 ; x +=1.7)
		a1.append(x);

	a1 += a1 ;
	cout << "\nThe array elements after appending:"
	<< endl;
	cout << setw(5) << a1 << endl;

	const Floatarray ca1(a1);
	// Copy constructor
	// creates const object.
	cout << "\nThe copy of v has been created.\n";
	cout << "\nThe array elements of the copy:\n"
	<< setw(5) << ca1 << endl;

	a2.remove(4);

	a2.append(666.8);
	a2.append(6.88);

	a1 = a2 ;
	cout << "\nAssignment done.\n";
	cout << "\nThe elements after assigning: \n"
	<< setw(5) << a1 << endl;
	a1.insert( ca1, 0);
	cout << "\nThe elements after inserting "
	" the copy at position 0: \n"
	<< setw(5) << a1 << endl;
	return 0;

}*/
