#include<iostream>
using namespace std;

//single inheritance
class parent{
	public:
		int pincode;
		long long phno;
		string city;
		parent(int p, long long n, string str){
			pincode=p;
			phno=n;
			city=str;
		}
};
class child : public parent{
	public:
		child(int p, long long  n,string str):parent(p,n,str){
			
		}
		void display(){
			cout<<"pincode is:"<<pincode<<endl;
			cout<<"phno is:"<<phno<<endl;
			cout<<"city is:"<<city<<endl;
		}
};
main(){
	child c(533293,92232431437,"hyderabad");
	c.display();
}
