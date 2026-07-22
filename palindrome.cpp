#include<iostream>
using namespace std;
main(){
	int rev=0,temp,i,n;
	cout<<"enter a number:"<<endl;
	cin>>n;
	temp=n;
	while(temp!=0){
		int digit=temp%10;
		rev=rev*10+digit;
		temp=temp/10;
	}
	if(rev==n){
		cout<<"Palindrome";
	}
	else
		cout<<"Not Palindrome";
}
