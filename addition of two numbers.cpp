//Addition of two numbers in cpp--documentation section
//directive preprocessor section
#include<iostream>
//namespace section
using namespace std;
//global variable declaration section
int a,b;
int add(int, int);//function declaration
//main function section
main(){
	//local variable declaration section
	int c;
	//statements
	cout<<"enter a,b values:";
	cin>>a>>b;
	cout<<"addition of two numbers is:"<<add(a,b);//function call
}
//function definition
int add(int a,int b){
	return a+b;
}
