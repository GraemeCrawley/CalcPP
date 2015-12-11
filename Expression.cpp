/*
 * Expression.cpp
 *
 *  Created on: Nov 29, 2015
 *      Author: graeme
 */

#include "Expression.h"
#include <string>
using namespace std;

Expression::Expression() {
	class Expression {
	private:
	        string exp;
	public:
	        //Constructor
	        Expression(string s){
	                exp = s;
	        }
	        virtual string evaluate();                                                      //evaluates expr$
	                //add code to check if its correct
	                ArithmeticExpression n(exp);                                    //initializes an express$
	                string result = n.evaluate();                                   //gets result from evalu$
	                return result;
	        virtual void print(){
	                //convert expression into simplified version
	                //i.e. no extra brackets or spaces
	        }
	}
}


