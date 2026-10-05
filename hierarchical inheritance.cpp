#include<iostream>
using namespace std;
//hierarchical inheritance
class parent{
	public:
		string carname;
		parent(string cn){
			carname=cn;
		};
};
class chile_1:public parent{
	public:
		chile_1(string cn):parent(cn){
			
		}
		void display(){
			cout<<"child_1 extends carname from parent"<<carname<<endl;
		}
};
class child_2:public parent{
	public:
		child_2(string cn):parent(cn){
			
		}
		void display(){
			cout<<"child_2 extends carname from parent "<<carname<<endl;
		}
};
int main(){
	child_2 c("AUDI");
	c.display();
}
