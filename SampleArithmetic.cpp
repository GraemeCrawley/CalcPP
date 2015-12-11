int ArithmeticExpression(){
	string n;								//holds the expression
	string left = null;						//holds the left expression
	string right = null;					//holds the right expression
	int bracketCount = 0;					//counts left and right brackets
	if (n[0] = 0){							//removes outside brackets
		for(int a = 1; a < (n.length() - 1); a++){
			string temp[a-1] = n[a];		
		}
		n = a;
	}
	for (int i = 0; i < n.length(); i++){				//find left + right
			if (n[i] == '('){							//checks for right brackets
				bracketCount++;							//adds to counter if there is one
			}
			if (n[i] == ')'){							//checks for right brackets
				bracketCount--;							//subtracts one from counter if there is one
			}
			if ((bracketCount==0) && (n[i] == '+')){
				for(int j = 0; j <  i; j++){
					left[j] = n[j];
				}
				for(int k = (i+1); i < n.length(); k++){
					right[k-i+1] = n[k];
				}
				Addition(ArithmeticExpression(left), ArithmeticExpression(right));
			}
			if ((bracketCount==0) && (n[i] == '-')){
				for(int j = 0; j <  i; j++){
					left[j] = n[j];
				}
				for(int k = (i+1); i < n.length(); k++){
					right[k-i+1] = n[k];
				}
				Subtraction(ArithmeticExpression(left), ArithmeticExpression(right));	
			}
			if((bracketCount==0) && (n[i] == '*')){
				for(int j = 0; j <  i; j++){
					left[j] = n[j];
				}
				for(int k = (i+1); i < n.length(); k++){
					right[k-i+1] = n[k];
				}
				Multiplication(ArithmeticExpression(left), ArithmeticExpression(right));
			}
			if((bracketCount==0) && (n[i] == '/')){
				for(int j = 0; j <  i; j++){
					left[j] = n[j];
				}
				for(int k = (i+1); i < n.length(); k++){
					right[k-i+1] = n[k];
				}
				Division(ArithmeticExpression(left), ArithmeticExpression(right));
			}
			}
}				
