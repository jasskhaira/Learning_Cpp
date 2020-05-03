/*
 * Exception.h
 *
 *  Created on: Apr. 30, 2020
 *      Author: root
 */

#ifndef EXCEPTION_H_
#define EXCEPTION_H_
#include<iostream>
#include<string>

using namespace std;

class FileError {

private:
	string filename;

public:
	FileError( const string& name);

	virtual ~FileError();

};


class OpenError: public FileError{

public:
	OpenError(const string& file):FileError(file){}
};

class ReadError: public FileError{

public:
	ReadError(const string& file):FileError(file){}
};


class WriteError: public FileError{

public:
	WriteError(const string& file):FileError(file){}
};

#endif /* EXCEPTION_H_ */
