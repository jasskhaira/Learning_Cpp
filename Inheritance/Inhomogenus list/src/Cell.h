/*
 * Cell.h
 *
 *  Created on: Apr. 19, 2020
 *      Author: root
 */

#ifndef CELL_H_
#define CELL_H_
#include<iostream>
#include<string>

using namespace std;

class Cell {

private:
	Cell* next;

protected:
	Cell(Cell* suc = NULL ){  next = suc ; }

public:
	virtual ~Cell();

	virtual void display() const = 0 ;
};



class BaseE1: public Cell{

private:
	string name;

public:
	BaseE1( Cell* suc = NULL , const string& s = "")
	: Cell(suc) , name(s){}

	//Access Method

	void display()const ;

};


class DerivedE1: public BaseE1{

private:
	string rem;

public:
	DerivedE1( Cell* suc = NULL , const string& s ="" , const string& b = "")
	:BaseE1(suc , s ) , rem(b){}

	void display()const;

};
#endif /* CELL_H_ */
