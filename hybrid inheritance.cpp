#include<iostream>
using namespace std;
class parent{
	public :
		parent(){
			cout<<"parent class"<<endl;
		}
};
class child_1:virtual public parent{
	public:
		child_1():parent(){
			cout<<"child_1 class"<<endl;
		}
};
class child_2:virtual public parent{
	public:
		child_2():parent(){
			cout<<"child_2 class"<<endl;
		}
};
class smallchild:public child_1,public child_2{
	public:
		void display(){
			cout<<"small child";
		}
};
int main(){
	smallchild sc;
	sc.display();
	return 0;
}
