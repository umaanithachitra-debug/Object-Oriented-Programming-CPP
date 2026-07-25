//left_sum and right_sum
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,i,j;
	cout<<"Enter a size:";
	cin>>n;
	int arr[n];
	cout<<"Enter elements of array:";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int b[n];
	for(i=0;i<n;i++){
		int left_sum=0,right_sum=0;
		//left sum
		for(j=i-1;j>=0;j--){
			left_sum+=arr[j];
		}
		//right sum
		for(j=i+1;j<n;j++){
			right_sum+=arr[j];
		}
		b[i]=abs(left_sum-right_sum);
	}
	for(i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
}
