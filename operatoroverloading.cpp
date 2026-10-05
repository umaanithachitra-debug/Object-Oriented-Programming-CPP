#include<iostream>
using namespace std;
class student
{
	public:
	int marks;
	student operator +(student s)//main part of this program
	{
		student temp;
		temp.marks=marks+s.marks;
		return temp;
	}
	void display(){
		cout<<"student marks total is:"<<marks<<endl;
	}
};
class minusnum
{
	public:
	int num;
	minusnum(int n):num(n){ }
	minusnum operator -()
	{
		return -num;
	}
	void show()
	{
		cout<<"minus opoverloading value is:"<<num<<endl;
	}
};
main(){
	student s1,s2,s3;
	s1.marks=78;
	s2.marks=89;
	s3=s1+s2;
	s3.display();
	minusnum n(100);
	minusnum n1=-n;
	n1.show();
}
