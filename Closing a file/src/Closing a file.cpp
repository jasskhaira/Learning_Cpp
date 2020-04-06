//============================================================================
// Name        : Closing.cpp
// Author      : Jaspreet Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<fstream>
using namespace std;

inline void openerror(char *file){

	cerr<<" Error on operning the file"<<file << endl;
	exit(1);
}

void copy( istream& is , ostream& os);


int main() {


	ifstream infile("infile.txt");

	if( !infile.is_open())
		openerror("infile");
	else
	{
		ofstream outfile("outfile.txt");
		if(!outfile.is_open())
			openerror("outfile");

		copy(infile , outfile);
		outfile.close();
	}
	infile.close();

	return 0;
}


void copy(istream& is , ostream& os){

	char c;
	while(is.get(c))
		os.put(c);


}
