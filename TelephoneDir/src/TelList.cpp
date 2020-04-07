/*
 * TelList.cpp
 *
 *  Created on: Apr. 1, 2020
 *      Author: root
 */

#include "TelList.h"


bool TelList::append(const string& nm , const string & telNr){


	if(count < MAX && nm.length() > 1 && search(nm) == PSEUDO ){

	v[count].name = nm;
	v[count].telNr = telNr;
	count++;
	return true;
	}
	else
		return false;
}




int TelList::search(const string& name){

	for(int i = 0 ; i <= count ; i++  ){
		if(v[i].name == name)
				return i;
	}
		return PSEUDO;

}


bool TelList::erase(const string& name){
	int i = search(name);
	cout<<i;
	if(i !=PSEUDO){
		v[i]=v[count - 1];
		count--;
		cout<<"Contact erased "<<endl;
		return true;
	}
	else
		return false;
}


void TelList::print(){

	if(count == 0 )
		cout<<"Telephone directory is empty ";
	else{
		for(int i = 0 ; i< count ; i++) {
			cout<<"Name = "<<v[i].name<<setw(10)<<"Ph: "<<v[i].telNr<<endl;


		}
	}


}

int TelList::print(const string& name){

	int tempcnt=search(name);

	if(tempcnt==PSEUDO){
		cout<<"Entry Does not exists "<<endl;
		return 0;
	}
	else{
	    // printline(v[])
		cout<<"\nName = "<<v[tempcnt].name<<setw(10)<<"Ph: "<<v[tempcnt].telNr<<endl;
		return 1;

	}
}


int TelList::getNewEntries(){

	string tempname , tempnumbr;
	cout<<"Enter the Name ";
	cin.sync();
	cin.clear();
	cin>>tempname;
	cout<<"\nEnter the Number ";

	cin.sync();
    cin.clear();
	cin>>tempnumbr;
	append(tempname , tempnumbr);

	return count;

}

bool TelList::load(){

	char FileName[100];
	ifstream infile;
	cout<<"\nEnter the absolute path and Name of File ";
	getline(FileName,100);

	if(!(infile.open(FileName, ios::app |ios::binary)) );
		cerr<<"Error Opening in File ";

}


