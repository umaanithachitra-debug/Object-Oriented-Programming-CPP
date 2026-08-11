#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int key,found=0;
	cout<<"enter key:";
	cin>>key;
	for(int i=0;i<n;i++){
		if(a[i]==key){
			found+=1;
			cout<<"key found at "<<i<<endl;
			break;
		}
	}
	if(found==0){
		cout<<"Key not found";
	}
	

}
