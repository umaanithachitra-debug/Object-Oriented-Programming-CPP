#include<iostream>
using namespace std;
int main(){
	int n,j=0,i;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int arr2[n];
	for(i=0;i<n;i++){
		if(arr[i]!=0){
			arr2[j]=arr[i];
			j++;
		}
	}
	while(j<n){
		arr2[j]=0;
		j++;
	}
	for(i=0;i<n;i++){
		cout<<arr2[i]<<" ";
	}
}

