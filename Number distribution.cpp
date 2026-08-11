//count number of positive numbers, negative numbers, zeros in an array
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int pos_count=0,neg_count=0,zero_count=0;
	for(int i=0;i<n;i++){
		if(arr[i]>0)
			pos_count+=1;
		else if(arr[i]<0)
			neg_count+=1;
		else
			zero_count+=1;
	}
	cout<<pos_count<<zero_count<<neg_count;
}

