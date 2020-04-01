/*
 * Lights.h
 *
 *  Created on: Mar. 31, 2020
 *      Author: root
 */

#ifndef LIGHTS_H_
#define LIGHTS_H_
#include<iostream>

using namespace std;

class Lights {

public:
	enum State {off, Red , Yellow , Green };

private:
	State state;


public:
	Lights(State s = off): state(s){}


	State getState() const {return state ;}
	void setState(State s);

	virtual ~Lights();
};

#endif /* LIGHTS_H_ */
