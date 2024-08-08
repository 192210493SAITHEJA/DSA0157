#include<iostream>
using namespace std;
class vehicle{
	public:
		virtual void drive(){
			cout<<"This is vehicle"<<endl;
		}
};
class car:public vehicle{
	public:
		void drive() override{
			cout<<"This is car"<<endl;
		}
};
class truck:public vehicle{
	public:
		void drive() override{
			cout<<"This is truck"<<endl;
		}
};
int main(){
	vehicle obj;
	obj.drive();
	car ob;
	ob.drive();
	truck o;
	o.drive();
}
