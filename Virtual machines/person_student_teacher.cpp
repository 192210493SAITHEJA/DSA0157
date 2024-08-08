#include<iostream>
using namespace std;
class person{
	public:
		virtual void greet(){
			cout<<"Hello! This is Person"<<endl;
		}
};
class student:public person{
	public:
		void greet() override{
			cout<<"This is student"<<endl;
		}
};
class teacher:public person{
	public:
		void greet() override{
			cout<<"This is teacher"<<endl;
		}
};
int main(){
	person obj;
	obj.greet();
	student ob;
	ob.greet();
	teacher o;
	o.greet();
}
