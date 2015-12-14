/*
 * Expression.h
]
 *
 *  Created on: Nov 29, 2015
 *      Author: graeme
 */

#ifndef EXPRESSION_H_
#define EXPRESSION_H_

#include <string>
using namespace std;



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
