//second largest element of array
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
	int largest=arr[0];
	int sec_largest=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>largest){
			sec_largest=largest;
			largest=arr[i];
		}
		else if(arr[i]>sec_largest && arr[i]!=largest){
			sec_largest=arr[i];
		}
	}
	cout<<sec_largest<<endl;
}
