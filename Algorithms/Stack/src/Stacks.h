/*
 * Stacks.h
 *
 *  Created on: May 11, 2020
 *      Author: root
 */

#ifndef STACKS_H_
#define STACKS_H_

template <typename T>
class Stacks {

private:
	T *stack;
	int Top , capacity;


public:
	Stacks(int cap );
	 ~Stacks();

	bool empty() { return (Top == 0);}
	bool push(const T& x);
	bool pop(T& x);
};

#endif /* STACKS_H_ */
