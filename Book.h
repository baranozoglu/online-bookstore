/*
 * Book.h
 *
 *  Created on: Dec 24, 2016
 *      Author: eren
 */

#ifndef BOOK_H_
#define BOOK_H_
#include <iostream>
using namespace std;

class Book:public Product{
private:
	string author;
	string publisher;
	int page;
public:
	Book();
	virtual ~Book();
	void printProperties();
	string getAuthor() const;
	void setAuthor(string);
	string getPublisher() const;
	void setPublisher(string);
	int getPage() const;
	void setPage(int);
};

#endif /* BOOK_H_ */