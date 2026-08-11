#include<iostream>
using namespace std;
int main(){
	int n,j=0,i,temp;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int arr2[n];
	temp=arr[0];
	for(int i=0;i<n-1;i++){
		arr2[i]=arr[i+1];
	}
	arr2[n-1]=temp;
	for(int i=0;i<n;i++){
		cout<<arr2[i]<<" ";
	}
	
}
