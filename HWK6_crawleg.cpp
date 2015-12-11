/*
 * HWK6_crawleg.cpp
 *
 *  Created on: Nov 29, 2015
 *      Author: graeme
 */

#include "HWK6_crawleg.h"
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;



int main(){

	string n;
	while(n!="#"){
		Expression e;
		cout << "Please enter an expression: ";
		cin >> n;
		int leftBracket=0;
		int rightBracket=0;
		for(int i = 0; i < n.length(); i++){
			cout << n[i] << endl;
			if(n[i] == '('){
				leftBracket++;
			}
			if(n[i] == ')'){
				rightBracket++;
			}
		}
		if(leftBracket!=rightBracket){
			cout << "Expression is not well formed\n";
			continue;
		}
		else{
			e.evaluate(n);
		}

	}
}
