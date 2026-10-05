#include<iostream>
using namespace std;
class student
{
	public:
	int marks;
	//student(int m):marks(m){}			//another way of writing constructor
	student(int marks)//using constructor
	{
		int m=marks;
	}
	student operator +(student s)//main part of this program
	{
		return student(marks+s.marks);
	}
	void display(){
		cout<<"student marks total is:"<<marks;
	}
};
main(){
	student s1(89),s2(78);
	student s3=s1+s2;
	s3.display();
}
