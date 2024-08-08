#include<iostream>
using namespace std;
class animal{
	public:
		virtual void eat(){
			cout<<"I am Animal"<<endl;
		}
};
class herb:public animal{
	public:
		void eat() override{
			cout<<"I need grass"<<endl;
		}
};
class carn:public animal{
	public:
		void eat() override{
			cout<<"I need meat"<<endl;
		}
};
int main(){
	animal obj;
	herb ob;
	carn o;
	obj.eat();
	ob.eat();
	o.eat();
}
