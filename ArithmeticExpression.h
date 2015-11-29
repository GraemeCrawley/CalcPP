/*
 * ArithmeticExpression.h
 *
 *  Created on: Nov 29, 2015
 *      Author: graeme
 */

#include <string>

class ArithmeticExpression : public Expression{
	Expression *left;
	Expression *right;
	string evaluate (){ //evaluate left expression and right expression
	void print(); // prints expression
	}
	float convert (string s){ // Converts a string (as would be returned by evaluate) to a float
	}
};

