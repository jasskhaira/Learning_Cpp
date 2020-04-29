/*
 * Account.cpp
 *
 *  Created on: Apr. 28, 2020
 *      Author: root
 */

#include "Account.h"

Account::Account(const string& n  , unsigned long nr  , double balance ) {
	// TODO Auto-generated constructor stub

	setName(n);
	setBalance(balance);
	setNr(nr);

}

Account::~Account() {
	// TODO Auto-generated destructor stub
}


ostream& Account::write(ostream& os)const{
	os<<name<<'\0';
	os.write((char*)&nr, sizeof(nr));
	os.write((char*)&balance,sizeof(balance));
	return os;
}

istream& Account::read(istream& is){
	getline(is, name , '\0');
	is.read((char*)&nr, sizeof(nr));
	is.read((char*)&balance , sizeof(balance));
	return is;
}

ostream& operator <<(ostream& os ,const Account& a){

	os<<"Name "<<a.getName()<<endl;
	os<<setw(4)<<"Acnt No "<<a.getNr()<<endl;
	os<<setw(4)<< "Balance "<<a.getBalance()<<endl;
	return os;
}


DepAcc::DepAcc(const string& n
			, unsigned long nr
			, double balance
			, double odlim
			, float i ){

	Account( n , nr , balance);
	setInt(i);
	setOdlim(odlim);

}

DepAcc::~DepAcc(){}

ostream& operator <<(ostream & os , const DepAcc& a){

	os<<"Intrest "<<a.getInt()<<endl;
	os<<"Overdarft Limit"<<a.getOdlim()<<endl;
	return os;
}


SavAcc::SavAcc(const string& n
			, unsigned long nr
			, double balance
			, float i ){
	Account( n , nr , balance );
	setInt(i);
	}


SavAcc::~SavAcc(){}

ostream& operator<<(ostream& os , SavAcc& a){

	os<<"Intrest "<<a.getInt()<<endl;
	return os;
}





