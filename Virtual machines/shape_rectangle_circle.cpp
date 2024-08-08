#include<iostream>
using namespace std;
class shape{
	public:
		virtual void area(){
			int a=0;
		}
};
class rectangle:public shape{
	public:
		void area() override{
			int l,a,b;
			cout<<"Enter l and b:";
			cin>>l>>b;
			a=l*b;
			cout<<"Area of Rectangle = "<<a<<endl;
		}
};
class circle:public shape{
	public:
		void area() override{
			int r;
			float a;
			cout<<"Enter r:";
			cin>>r;
			a=3.14*r*r;
			cout<<"Area of Circle ="<<a<<endl;
		}
};
int main(){
	shape obj;
	rectangle ob;
	circle o;
	obj.area();
	ob.area();
	o.area();
}
