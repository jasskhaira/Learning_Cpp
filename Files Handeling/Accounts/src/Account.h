/*
 * Account.h
 *
 *  Created on: Apr. 28, 2020
 *      Author: root
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>


using namespace std;

enum TypeId { ACCOUNT , DEP_ACC , SAV_ACC};

class Account {

private:
	string name;
	unsigned long nr;
	double balance;
public:
	Account(const string& n = " " , unsigned long nr = 0 , double balance = 0);
	virtual ~Account();

	void setName(const string& name) { this->name = name; }
	void setNr(unsigned long nr) { this->nr = nr; }
	void setBalance(double bal) {  balance = bal; }

	string getName() const {  return name;}
	unsigned long getNr() const {  return nr;}
	double getBalance() const {  return balance ; }

	virtual ostream& write(ostream& os) const;
	virtual istream& read(istream& is);

	virtual void dispaly();
	friend ostream& operator <<( ostream& os,const Account& a );

	virtual TypeId getTypeId() const { return ACCOUNT ;}


};

class DepAcc: public Account{

private:
	double odlim;
	float intrest;
public:
	DepAcc(const string& n = " "
			, unsigned long nr = 0
			, double balance = 0
			, double odlim = 0
			, float i = 0  );
	~DepAcc();


	void setInt(float i) { intrest = i; }
	void setOdlim(double o ) { odlim = o ;}

	double getInt( ) const { return intrest;}
	float getOdlim() const { return odlim ; }

	ostream& write(ostream& os) const;
	istream& read(istream& is);
	void dispaly();


	TypeId getTypeId() const { return DEP_ACC ;}

};


class SavAcc : public Account {

private:
	float intrest;

public:
	SavAcc(const string& n = " "
			, unsigned long nr = 0
			, double balance = 0
			, float i = 0  );
	~SavAcc();

	void setInt( float i )  {  intrest = i ;}

	float getInt() const { return intrest ;}

	ostream& write(ostream& os) const;
	istream& read(istream& is);
	void dispaly();

	TypeId getTypeId() const { return SAV_ACC ;}

};











#endif /* ACCOUNT_H_ */
