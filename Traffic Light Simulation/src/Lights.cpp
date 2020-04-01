/*
 * Lights.cpp
 *
 *  Created on: Mar. 31, 2020
 *      Author: root
 */

#include "Lights.h"

	// TODO Auto-generated constructor stub






	void Lights::setState(State s){
		switch(s)
		{	case off:   	cout<<"        OFF         "; break;
			case Red:   	cout<<"        RED         "; break;
			case Yellow:   	cout<<"        YELLOW      "; break;
			case Green:   	cout<<"        GREEN       "; break;
			default:  return;
		}
		state = s;
	}







Lights::~Lights() {
	// TODO Auto-generated destructor stub
}

