/*
 * ArithmeticExpression.cpp
 *
 *  Created on: Nov 29, 2015
 *      Author: graeme
 */

#include "ArithmeticExpression.h"
#include <string>
#include <iomanip>
using namespace std;

ArithmeticExpression::ArithmeticExpression() {
	class ArithmeticExpression {
	private:
		string n;										//holds the expression
		//Expression left;									//holds the left expression
		//Expression right;									//holds the right expression
	public:
		//Constructor
		ArithmeticExpression(string expression) {
			n = expression;
		}
		string evaluate() {
			int a;
			int bracketCount = 0;				//counts left and right brackets
			if (n[0] == '(') {						//removes outside brackets
				for (a = 1; a < (n.length() - 1); a++) {
					string temp[a - 1] = n[a];
				}
				n = a;
			}

			//Change this for more than two digits
			string tempString;
			int counter;
			if (((int) n[counter] > 57) && ((int) n[counter] < 48)) {//checks if there is only numbers in the string
				for (counter = 0; counter < n.length(); counter++) {
					if (n[counter] == n[n.length - 1]) {
						return n;//returns the string if there is only numbers
					}
				}
			}

			for (int i = 0; i < n.length(); i++) {			//find left + right
				if (n[i] == '(') {					//checks for right brackets
					bracketCount++;			//adds to counter if there is one
				}
				if (n[i] == ')') {					//checks for right brackets
					bracketCount--; //subtracts one from counter if there is one
				}
				if ((bracketCount == 0) && (n[i] == '+')) {	//checks for add symbol to split
					for (int j = 0; j < i; j++) {
						left[j] = n[j];					//creates left string
					}
					for (int k = (i + 1); i < n.length(); k++) {
						right[k - i + 1] = n[k];		//creates right string
					}
					ArithmeticExpression L = L(left);
					ArithmeticExpression R = R(right);
					Addition result = Addition(L.evaluate(),(R.evaluate()));	//calls Addition class
			}
			if ((bracketCount == 0) && (n[i] == '-')) {	//checks for subtract symbol to split
				for (int j = 0; j < i; j++) {
					left[j] = n[j];						//creates left string
				}
				for (int k = (i + 1); i < n.length(); k++) {
					right[k - i + 1] = n[k];			//creates right string
				}
				Subtraction result = Subtraction(Expression(left)).evaluate(),(Expression(right)).evaluate());	//calls subtraction class
			}
			if ((bracketCount == 0) && (n[i] == '*')) {	//checks for multiplication to split
				for (int j = 0; j < i; j++) {
					left[j] = n[j];						//creates left string
				}
				for (int k = (i + 1); i < n.length(); k++) {
					right[k - i + 1] = n[k];			//creates right string
				}
				Expression L(left);
				Multiplication result =
						Multiplication(Expression(left)).evaluate(),
						(Expression(right))
			.evaluate()); //calls multiplication class
		}
		if ((bracketCount == 0) && (n[i] == '/')) {	//checks for division to split
			for (int j = 0; j < i; j++) {
				left[j] = n[j];						//creates left string
			}
			for (int k = (i + 1); i < n.length(); k++) {
				right[k - i + 1] = n[k];				//creates right string
			}
			Multiplication result = Division(Expression(left)).evaluate(),
					(Expression(right))
			.evaluate());; 	//calls division class
		}
	}
	return result;							//returns result after all recursion

}
void print() {
//check expression.print()
}
float convert(string s) {							//converts string to integer
	istringstream buffer(s);
	int num;
	buffer >> num;
	return num;
}
	}
}
}
