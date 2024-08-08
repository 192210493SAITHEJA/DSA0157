#include<iostream>
using namespace std;
class person{
	public:
		virtual void work(){
			cout<<"This is Person"<<endl;
		}
};
class employee:public person{
	public:
		void work() override{
			cout<<"This is Employee"<<endl;
		}
};
class manager:public person{
	public:
		void work() override{
			cout<<"This is Manager"<<endl;
		}
};
int main(){
	person obj;
	obj.work();
	employee ob;
	ob.work();
	manager o;
	o.work();
}
