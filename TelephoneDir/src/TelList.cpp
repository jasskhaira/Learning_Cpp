/*
 * TelList.cpp
 *
 *  Created on: Apr. 1, 2020
 *      Author: root
 */

#include "TelList.h"

bool TelList::append(const string& name , const string & telNr){

	for(int i = 0 ; i <= count ; i++){
		if(v[i].name == name || name == NULL ){
			return false;
		}

	}


	v[count].name = name;
	v[count].telNr = telNr;
	count++;
	return true;
}


int TelList::search(const string& name){

	for(int i = 0 ; i <= count ; i++  ){
		if(v[i].name == name){
			return i;
			break;
		}
		else
			return PSEUDO;
	}



}


TelList::~TelList() {
	// TODO Auto-generated destructor stub
}

