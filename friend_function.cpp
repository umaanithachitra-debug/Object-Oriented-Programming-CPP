#include<iostream>
using namespace std;
class student{
	private:
	int id;
	friend void display(int, student s);//declared friend function
};
void display(int sid, student s){
	s.id=sid;
	cout<<"Studdent id: "<<s.id;
}
main(){
	student s1;
	display(111,s1);
}
