#include<iostream>
using namespace std;
//class template
//to print given value
template<class T>
class sample{
	public:
	T data;//where data is class instance variable name
	sample(T x){
		data=x;
	}
	void display(){
		cout<<"the value is:"<<data<<endl;
	}
	
};
main(){
	sample<int> s1(10);
	sample<double> s2(10.9);
	sample<string> s3("hello cpp");
	s1.display();
	s2.display();
	s3.display();
	
}
