//maximum element of array
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
	int max_element=arr[0];
	for(int i=0;i<n;i++){
		if(max_element<arr[i]){
			max_element=max(max_element,arr[i]);
		}
	}
	cout<<"Maximum element:"<<max_element;
	
}
