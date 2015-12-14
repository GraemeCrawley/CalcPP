/*
 *
 * ArithmeticExpression.hstd::
 *  Created on: Nov 29, 2015
 *      Author: graeme
 */
#include "Expression.h"
#include <string>
#include <iomanip>
using namespace std;

class ArithmeticExpression : public Expression{
/*private:
	string exp;
public:
	//Constructor
	AithmeticExpression(string s){
		exp = s;
	}*/
	Expression *left;
	Expression *right;
	string evaluate (){ //evaluate left expression and right expression
	void print(); // prints expression
	return "string";
	}
	float convert (string s){ // Converts a string (as would be returned by evaluate) to a float
	}
};

