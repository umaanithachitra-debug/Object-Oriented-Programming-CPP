#include<iostream>
using namespace std;
class student{
	public:
	student(){
		cout<<"student object created"<<endl;
	}
	void display(){
		cout<<"anonymous object ";
	}
};
int main(){
	student().display();
	//anonymous object
	//calls display function
}
