/*
 * Check.h
 *
 *  Created on: Dec 24, 2016
 *      Author: eren
 */

#ifndef CHECK_H_
#define CHECK_H_
#include <iostream>
#include "Payment.h"

using namespace std;
class Check: public Payment{
private:
	string name;
	string bankID;
public:
	Check(int,string,string);
	Check(int);
	virtual ~Check();
	string getName() const;
	void setName(string);
	string getBankID() const;
	void setBankID(string);


};

#endif /* CHECK_H_ */
