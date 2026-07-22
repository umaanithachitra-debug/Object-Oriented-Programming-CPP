#include<iostream>
using namespace std;
main(){
	int n,count=0;
	cout<<"Enter a number:"<<endl;
	cin>>n;
	int temp=n;
	while(temp>0){
		int digit=temp%10;
		count++;
		temp=temp/10;
	}
	cout<<"Count="<<count<<endl;
}
