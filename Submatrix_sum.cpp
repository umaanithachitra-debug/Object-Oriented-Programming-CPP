#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int mat[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>mat[i][j];
		}
	}int x,y,k,l;
	cin>>x>>y>>k>>l;
	int sum=0;
	for(int i=x;i<=k;i++){
		for(int j=y;j<=l;j++){
			sum+=mat[i][j];
		}
	}
	cout<<sum<<endl;
}

