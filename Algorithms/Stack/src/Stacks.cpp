/*
 * Stacks.cpp
 *
 *  Created on: May 11, 2020
 *      Author: root
 */

#include "Stacks.h"

template <class T>
Stacks<T>::Stacks(int cap) {

	capacity = cap;
	stack = new T[cap];
	Top = 0 ;
	// TODO Auto-generated constructor stub

}


template <class T>
Stacks<T>::~Stacks() {
	delete[] stack;
	// TODO Auto-generated destructor stub
}

template<class T>
bool Stacks<T>::push(const T& x){

	if(Top == capacity)
		return false;

	stack[Top++] = x;
	return true;
}


template<class T>
bool Stacks<T>::pop(T& x){

	if(Top < 0){
		return false;
	}
	x = stack[Top--];
	return true;
}
