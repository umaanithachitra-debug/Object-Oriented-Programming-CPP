#include<iostream>
using namespace std;
main(){
	int n,count=0,i;
	cout<<"Enter a number:"<<endl;
	cin>>n;
	for(i=1;i<=n;i++){
		if(n%i==0)
			count++;
	}
	if(count==2)
		cout<<"Prime";
	else
		cout<<"Not Prime";
}
