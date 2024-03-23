//The below program is a calculator which calculates the basic arithmatic operations
#include<iostream>
using namespace std;
int main(){
	float x; // input from user
	cin>>x;
	char op;
	cin>>op;
	float y; //input from user
	cin>>y;
	if(op=='+'){
		cout<<x+y;
	}
	else if(op=='-'){
		cout<<x-y;
	}
	else if(op=='x'){ //normally people use cross as a sign of multiplication therefore taking the input as normal cross but converting it into "*" sysbol for multiplication
		cout<<x*y;
	}
	else if(op=='/'){
		cout<<x/y;
	}
	
}
