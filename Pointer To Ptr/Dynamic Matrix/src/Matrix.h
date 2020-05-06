/*
 * Matrix.h
 *
 *  Created on: May 5, 2020
 *      Author: root
 */

#ifndef MATRIX_H_
#define MATRIX_H_

#include<iostream>
#include<stdexcept>

using namespace std;

class Row{
private:
	double *row;
	int size;

public:
	Row(int s) ;
	~Row();

	double& operator[](int i)throw(out_of_range){

		if(i<0 || i>size)
			throw out_of_range("Colum index : out of Range\n");
		else
			return row[i];
	}

	Row& operator=(Row& r){
		this->size = r.size;
		this->row = r.row;
		return *this;
	}




};


class Matrix {

private:
	Row **mat ;
	int lines , cols;

public:
	Matrix(int ro , int co);
	Matrix(int ro , int co , double val);


	~Matrix();
	Matrix(Matrix&);

	int getLines()const { return lines ;}
	int getCols()const { return cols;}

	Row& operator[](int i)throw(out_of_range);
};

#endif /* MATRIX_H_ */
