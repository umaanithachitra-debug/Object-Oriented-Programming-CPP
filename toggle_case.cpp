//toggle case
#include<iostream>
using namespace std;
int main(){
	string str;
	cin>>str;
	int n=str.length();
	for(int i=0;i<n;i++){
		if(str[i]>='a' && str[i]<='z'){
			str[i]=toupper(str[i]);
		}
		else{
			str[i]=tolower(str[i]);
		}
	}
	cout<<str<<endl;
}
