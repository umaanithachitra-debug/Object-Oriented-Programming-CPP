#include<iostream>
using namespace std;
class counter{
	int count;
	public:
		counter(){
			count=10;
		}
		//prefix ++ overload
		void operator++(){
			count++;
		}
		void display(){
			cout<<"Value="<<count<<endl;
		}
};
int main(){
	counter c;
	c.display();//value=10
	++c;    //calls operator++()
	c.display();  //value=11
}
