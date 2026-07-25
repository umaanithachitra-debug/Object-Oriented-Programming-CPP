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
	for(int num=1;num<=n;num++){
		bool flag=false;
		for(int i=0;i<n;i++){
			if(num==arr[i]){
				flag=true;break;
			}
		}
		if(flag==false){
			cout<<num<<endl;
			break;
		}
	}
}
