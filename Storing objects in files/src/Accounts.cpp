/*
 * Accounts.cpp
 *
 *  Created on: Apr. 6, 2020
 *      Author: root
 */

#include "Accounts.h"

Accounts::Accounts(string nm , unsigned long num , double bal ){


	name = nm;
	nr = num;
	balance = bal;
	// TODO Auto-generated constructor stub

}

Accounts::~Accounts() {
	// TODO Auto-generated destructor stub
}


 ostream& Accounts::write(ostream& os)const{

	 os<<name<<'\0';
	 os.write((char*)&nr,sizeof(nr));
	 os.write((char*)&balance, sizeof(balance));

	 return os;


};


istream& Accounts::read(istream& is ){

	getline(is , name , '\0');
	is.read((char*)&nr , sizeof(nr));
	is.read((char*)&balance , sizeof(balance));

	return is;

}
