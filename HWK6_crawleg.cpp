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
		cout << "Please enter an expression: ";
		cin >> n;
		int leftBracket=0;
		int rightBracket=0;
		int err = 0;
		for(int i = 0; i < n.length(); i++){
			cout << n[i] << endl;
			if(n[i] == '('){
				leftBracket++;
				if((n[i+1] == '-')||(n[i+1] == '+')||(n[i+1] == '/')||(n[i+1] == '*')){
			        err++;
			    }
			}
			if(n[i] == ')'){
				rightBracket++;
			}
			
			if((n[i] == '-')||(n[i] == '+')||(n[i] == '/')||(n[i] == '*')){
			    if((n[i+1] == '-')||(n[i+1] == '+')||(n[i+1] == '/')||(n[i+1] == '*')||(n[i+1] == ')')){
			        err++;
			    }
			}
			if((((int)n[i] >  57)&&((int)n[i] < 40))||((int)n[i] == 46)){ //converts character to decimal value to compare to decimal value of incorrect input characters
			    err++; //catches the decimal point but not non numerical or non arithmatic character
			}
			
		
		}
		if((leftBracket!=rightBracket)||(err!=0)){
			cout << "Expression is not well formed\n";
			continue;
		}

	}
}
