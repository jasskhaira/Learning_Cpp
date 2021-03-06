/*
 * TelList.h
 *
 *  Created on: Apr. 1, 2020
 *      Author: root
 */

#ifndef TELLIST_H_
#define TELLIST_H_
#include<string>
#include<iostream>
#include<iomanip>
#include<fstream>

using namespace std;

#define PSEUDO -1
#define MAX		100

struct Elements { string name , telNr ;};

class TelList {

private:
	Elements v[MAX];
	int count ;

public:
	TelList() { count = 0 ;}

	//~TelList();

	int getcount() const { return count ;}

	Elements *retrive( int i) { return ( i >= 0 && i< count)? &v[i] : NULL; }

	bool append ( const string& nm , const string & telNr );


	bool append ( const Elements& el);// { return append ( el.name, el.telNr );


	bool erase(const string& name);

	int search(const string& name);

	void print();

	int print( const string& name);
	int getNewEntries();

	bool load();
	bool save();
	bool saveas();


};

#endif /* TELLIST_H_ */
