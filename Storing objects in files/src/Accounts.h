/*
 * Accounts.h
 *
 *  Created on: Apr. 6, 2020
 *      Author: root
 */

#ifndef ACCOUNTS_H_
#define ACCOUNTS_H_

#include<string>
#include<fstream>
#include<iostream>
using namespace std;

class Accounts {

private:
	string name;
	unsigned long nr;
	double balance;

public:
	Accounts();
	Accounts(string nm , unsigned long num , double bal );

	virtual ~Accounts();

	inline string& getname() const{ return name; }
	inline unsigned long getNumber() const { return nr; }
	inline double getbalance() const { return balance; }

	ostream& Accounts::write(ostream& os)const;
	istream& Accounts::read(istream& is);




};

#endif /* ACCOUNTS_H_ */
