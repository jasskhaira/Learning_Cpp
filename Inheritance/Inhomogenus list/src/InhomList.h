/*
 * InhomList.h
 *
 *  Created on: Apr. 19, 2020
 *      Author: root
 */

#ifndef INHOMLIST_H_
#define INHOMLIST_H_
#include"Cell.h"


class InhomList {

private:
	Cell* first;

protected:
	Cell* getPrev(const string& s);
	void insertAfter(const string& s , Cell* prev );
	void insertAfter(const string& s , const string& b , Cell* prev );

	void erasePos(Cell* pos);

public:
	InhomList(){ first = NULL ;}
	InhomList( const InhomList& src );
	~InhomList();

	InhomList& operator= ( const InhomList& src);

	void insert( const string& n);
	void insert( const string& n , const  string& b);
	void erase(const string& n);

};

#endif /* INHOMLIST_H_ */
