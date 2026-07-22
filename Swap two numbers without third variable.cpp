#include<iostream>
using namespace std;
main(){
	int a,b;
	cout<<"Enter two numbers:"<<endl;
	cin>>a>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"a="<<a<<endl<<"b="<<b;
}
