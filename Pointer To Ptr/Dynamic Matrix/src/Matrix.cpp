/*
 * Matrix.cpp
 *
 *  Created on: May 5, 2020
 *      Author: root
 */

#include "Matrix.h"

Row::Row(int s){
	size = s ;
	row = new double[s]; }

Row::~Row(){
	delete [] row;

}


Matrix::Matrix(int ro , int co) {
	lines = ro;
	cols = co;
	 mat = new Row*[lines];
	 for(int i = 0 ; i < lines ; i++)
		 mat[i] = new Row(cols);

	// TODO Auto-generated constructor stub
	 }

Matrix::Matrix(int ro , int co , double val){
	Matrix(ro , co);
	for(int i = 0 ; i < ro ; i++){
		for (int j = 0; j < co ; j++)
			(*this)[i][j]=val;
	}
}




Matrix::~Matrix() {
	for(int i = 0 ; i < lines ; i++)
		delete mat[i];
	delete [] mat;
	// TODO Auto-generated destructor stub
}


Row& Matrix::operator [](int i)throw (out_of_range){
	if(i< 0 || i> cols)
		throw out_of_range("Row Index : Out of Range ");
	else
		return *mat[i];

}
