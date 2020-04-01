/*
 * Article.cpp
 *
 *  Created on: Mar. 29, 2020
 *      Author: root
 */

#include "Article.h"

int Article::ObjNum=0;


Article::Article(long Num, const string&  name , double price) {

	ObjNum++;
	ArticleNumber=Num;
	ArticleName = name;
    Salesprice = price;

    cout<<"An object of type Article"+ ArticleName + " is created."<<endl;
    cout<<"This is the "<<Article::getcount()<<"Article";


	// TODO Auto-generated constructor stub

}

Article::~Article() {

	ObjNum--;
	cout<<"An object of type Article" + ArticleName +" is destroyed."<<endl;
	cout<<"This is the "<<Article::getcount()<<"Article";

	// TODO Auto-generated destructor stub
}



Article::Article(const Article &other) {
	// TODO Auto-generated constructor stub

}



void Article::print(){

	cout<< ArticleName<<endl;
	cout<<"Number = "<< ArticleNumber<<endl;
	cout<<"Price = "<< Salesprice<<endl;
	getchar();
}


long Article::Setnnumber(long num){
	ArticleNumber=num;
	return 1;
}

double Article::Setsalesprice(double price){
	Salesprice=price;
	return 1;
}

string Article::Setname(string &name){
	ArticleName=name;
}












