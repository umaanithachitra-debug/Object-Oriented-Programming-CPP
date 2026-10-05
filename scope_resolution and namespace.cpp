//scope resolution operator
#include<iostream>
using namespace std;
int a=10;
namespace Student{
	int a=110;
}
class Stu{
	public:
		static int a;
};
int Stu::a=200;
main(){
	int a=20;
	cout<<"Global variable value:"<<::a<<endl;
	cout<<"Local variable value:"<<a<<endl;
	cout<<"Namespace variable value: "<<Student::a<<endl;
	cout<<"Class variable value: "<<Stu::a;
	
}
