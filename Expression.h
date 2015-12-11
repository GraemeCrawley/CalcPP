/*
 * Expression.h
]
 *
 *  Created on: Nov 29, 2015
 *      Author: graeme
 */

#include <string>
using namespace std;

#ifndef EXPRESSION_H_
#define EXPRESSION_H_e

class Expression{
private:
	string exp;
public:
	//Constructor
	Expression(string s){
		exp = s;
	}
	virtual string evaluate(string);
	virtual void print();
	};

#endif /* EXPRESSION_H_ */
