/*
 * Expression.h
 *
 *  Created on: Nov 29, 2015
 *      Author: graeme
 */
#include <string>
using namespace std;

#ifndef EXPRESSION_H_
#define EXPRESSION_H_e

class Expression {
	virtual string evaluate(string n);
	virtual void print();
	};

#endif /* EXPRESSION_H_ */
