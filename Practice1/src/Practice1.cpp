//============================================================================
// Name        : Practice1.cpp
// Author      : Jass Khaira
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"Article.h"

Article article1(111,"Tent",160.0);

void test(Article A);
using namespace std;

int main() {

	cout << "\nThe first statement in main().\n" << endl;
	Article article2( 2222,"jogging shoes", 199.99);
	cout << "\nThe first call of test()." << endl;

	test(article1);
	// Passing by Value
	cout << "\nThe second call of test()." << endl;
	test(article2);
	// Passing by Value
	cout << "\nThe last statement in main().\n"	<< "\nThere are still " << Article::getcount()<< " objects\n" << endl;
	return 0;

}


void test(Article A)
{
	cout << "\nThe given object:" << endl;
	A.print();

	static Article bike( 3333, "bicycle", 999.0);
	cout << "\nThe static object in function test():"
	<< endl;
	bike.print();
	cout << "\nThe last statement in function test()"
	<< endl;

}
