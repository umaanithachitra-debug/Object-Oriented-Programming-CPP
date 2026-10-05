#include<iostream>
using namespace std;
//function template
//to find max of two numbers
class sample{
	public:
		template <class T,class U>
		T maxvalue(T a ,U b){
			return  (a>b)?a:b;
		} 
};
main(){
	sample s;
	cout<<"max integer value is:"<<s.maxvalue(10,20.7)<<endl;
	cout<<"max float value is:"<<s.maxvalue(10.9f,20)<<endl;
	cout<<"max double value is:"<<s.maxvalue(10.7,900)<<endl;
	cout<<"max char value is:"<<s.maxvalue('a','A')<<endl;
}
