#include<iostream>
using namespace std;
main(){
	int n,i;
	cout<<"Enter a number:"<<endl;
	cin>>n;
	for(i=0;i<n;i++){
		if(n%i==0)
			cout<<i<<endl;
	}
}
