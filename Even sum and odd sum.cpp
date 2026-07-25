//even elements sum and odd elements sum
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
	int even_sum=0,odd_sum=0;
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			even_sum+=arr[i];
		}
		else{
			odd_sum+=arr[i];
		}
	}
	cout<<odd_sum<<" "<<even_sum;
}
