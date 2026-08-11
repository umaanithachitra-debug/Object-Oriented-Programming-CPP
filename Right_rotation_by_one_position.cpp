//right rotation of array elemnts by one position
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
	temp=arr[n-1];
	//arr2[0]=temp;
	for(int i=0;i<n-1;i++){
		arr2[i+1]=arr[i];
	}
	arr2[0]=temp;
	for(int i=0;i<n;i++){
		cout<<arr2[i]<<" ";
	}
}


/*#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	if(n==0){
		cout<<"Array is empty";
	}
	
	else
	{
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cout<<arr[n-1]<<" ";
		for(int i=0;i<n-1;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
}*/
	
