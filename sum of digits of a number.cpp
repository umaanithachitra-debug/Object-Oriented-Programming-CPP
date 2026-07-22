#include<iostream>
using namespace std;
main(){
	int n,sum=0;
	cout<<"Enter a number:"<<endl;
	cin>>n;
	int temp=n;
	while(temp>0){
		int digit=temp%10;
		sum=sum+digit;
		temp=temp/10;
	}
	cout<<"Sum of digits of a number:"<<sum<<endl;
}
