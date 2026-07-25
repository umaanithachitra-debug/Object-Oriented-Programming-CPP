//minimum element of array
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
	int min_element=arr[0];
	for(int i=0;i<n;i++){
		if(min_element>arr[i])
			min_element=arr[i];
	} 
	cout<<"Minimum element="<<min_element;
}
