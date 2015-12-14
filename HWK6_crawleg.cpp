/*
 * HWK6_crawleg.cpp
 *
 *  Created on: Nov 29, 2015
 *      Author: graeme
 */

#include "HWK6_crawleg.h"
#include "ArithmeticExpression.h"
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <cstring>
#include <typeinfo>
using namespace std;



int main(){
	string n;		//Initializing n
	while(n!="#"){												//Beginning of the while loop; ends if hashtag is entered
		int spaceCount = 0;										//Initializing the space counter
		//Expression e;
		cout << "Please enter an expression: ";					//Asking for an expression to be entered
		std::getline(cin,n);									//Retrieving the line that was entered
		if(n=="#"){												//Checking if input = "#"
			break;												//If so, break from the loop
		}
		//cin >> n;
		int brackets=0;											//Initializing the brackets count to check for an even number of left & right brackets
		//int err = 0;

		//Loops through each letter
		for(int i = 0; i < n.length(); i++){					//Beginning of the loop
			//Prints each letter
			//cout << n[i] << endl;
			if(n[i] == '('){										//If the current character is a left bracket,
				brackets++;											//increase the bracket count
				/*if((n[i+1] == '-')||(n[i+1] == '+')||(n[i+1] == '/')||(n[i+1] == '*')){
			        err++;
			    }*/
			}
			if(n[i] == ')'){										//If the current character is a right bracket,
				brackets--;											//decrease the bracket count
			}
			
			/*if((n[i] == '-')||(n[i] == '+')||(n[i] == '/')||(n[i] == '*')){
			    if((n[i+1] == '-')||(n[i+1] == '+')||(n[i+1] == '/')||(n[i+1] == '*')||(n[i+1] == ')')){
			        err++;
			    }
			}*/
			//If current value is not a regular arithmetic character, excluding spaces
			if((((int)n[i] >  57)||(((int)n[i] < 40)&&((int)n[i]!=32)))||((int)n[i]==44)||((int)n[i]==46)){ //converts character to decimal value to compare to decimal value of incorrect input characters
				cout << "Invalid characters\n";						//Lets the user know they've entered invalid characters
				//cout <<"Value: "<< (int)n[i]<<endl;		1		//If enabled, prints the character that caused the error
				continue;											//continue to next loop
			}
			if((int)n[i]==32){										//If the current character is a space
				spaceCount++;										//increase the space count
			}
		}
		//cout << n.length();
		string k[n.length()-spaceCount];							//Initializing string k based on the input strings length without spaces
		int j=0;													//Initializing the count for k index
		for(int i = 0; i<n.length(); i++){							//Beginning of the loop
			if((int)n[i]!=32){										//If the current character is not a space,
				k[j]=n[i];											//k at its index is n at its index
				cout << k[j];										//print k at the current index
				j++;												//increment the index of k
				}
		}
		if(brackets!=0){											//If there's not an equal number of brackets
			cout << "Expression is not well formed";				//print "Expression not well formed"
			continue;												//continue to next loop
		}
		//If everything is good, evaluate the expression
		else{														//If no errors in the input
			cout<<endl;
			ArithmeticExpression exp = exp(k);
			exp.evaluate();
		}

	}
}
