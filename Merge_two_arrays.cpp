//merge two unsorted arrays
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n+n],a2[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>a2[i];
	}
	int i=0;
	for(int j=n;j<2*n;j++)
	{
		a[j]=a2[i];
		i++;
	}
	for(int i=0;i<2*n;i++){
		cout<<a[i]<<" ";
	}
}
