#include<iostream>
using namespace std;
main(){
	int a,b,temp;
	cout<<"Enter two numbers:"<<endl;
	cin>>a>>b;
	temp=a;
	a=b;
	b=temp;
	cout<<"a="<<a<<endl<<"b="<<b;
}
