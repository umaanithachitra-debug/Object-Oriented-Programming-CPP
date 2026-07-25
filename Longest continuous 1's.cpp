//longest continuous 1's in an array
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a size:";
	cin>>n;
	int arr[n];
	cout<<"Enter elements of array:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int count=0,max_count=0;
	for(int i=0;i<n;i++){
		if(arr[i]==1){
			count++;
			max_count=max(max_count,count);
		}
		else{
			count=0;
		}
	}
	cout<<max_count<<endl;
}
