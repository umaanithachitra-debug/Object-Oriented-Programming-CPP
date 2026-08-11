//swap first element and last element of array
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n],index;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int i=0;
	int j=n-1;
	swap(a[i],a[j]);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
