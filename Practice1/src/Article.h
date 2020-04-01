/*
 * Article.h
 *
 *  Created on: Mar. 29, 2020
 *      Author: root
 */

#ifndef ARTICLE_H_
#define ARTICLE_H_
#include<iostream>
#include<string>


using namespace std;


class Article {

private:
	long ArticleNumber;
	string ArticleName;
	double Salesprice;
	static int ObjNum;

public:
	Article(long ,const string& , double );
	virtual ~Article();
	Article(const Article &other);

	void print();

	long getnnumber() const { return ArticleNumber; };
	string getname()  const { return ArticleName;   };
	double getsalesprice()const   { return Salesprice;    };


	long Setnnumber(long);
	string Setname(string&);
	double Setsalesprice(double);
	static int getcount() { return ObjNum; };


};

#endif /* ARTICLE_H_ */
