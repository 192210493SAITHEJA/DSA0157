#include<iostream>
using namespace std;
class animal{
	public:
		virtual void speak(){
			cout<<"I am Animal"<<endl;
		}
};
class cat:public animal{
	public:
		void speak() override{
			cout<<"Meow Meow!"<<endl;
		}
};
class dog:public animal{
	public:
		void speak() override{
			cout<<"Bow Bow!"<<endl;
		}
};
int main(){
	animal obj;
	cat ob;
	dog o;
	obj.speak();
	ob.speak();
	o.speak();
}
