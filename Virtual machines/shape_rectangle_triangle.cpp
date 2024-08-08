#include<iostream>
using namespace std;
class shape{
	public:
		virtual void area(){
			int a=0;
		}
		virtual void perimeter(){
			int v=0;
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
		void perimeter() override{
			int l,b,v;
			cout<<"Enter l and b:";
			cin>>l>>b;
			v=2*(l+b);
			cout<<"Perimeter of Rectangle = "<<v<<endl;
		}
};
class triangle:public shape{
	public:
		void area() override{
			int b,h;
			float a;
			cout<<"Enter for base for area:";
			cin>>b;
			cout<<"Enter for height for area:";
			cin>>h;
			a=0.5*b*h;
			cout<<"Area of Triangle ="<<a<<endl;
		}
		void perimeter() override{
			int r,h,k;
			float v;
			cout<<"Enter for radius for volume:";
			cin>>r;
			cout<<"Enter for height for volume:";
			cin>>h;
			cout<<"Enter for k for volume:";
			cin>>k;
			v=r*h*k;
			cout<<"Perimeter of Sphere ="<<v<<endl;
		}
};
int main(){
	shape obj;
	rectangle ob;
	triangle o;
	obj.area();
	obj.perimeter();
	ob.area();
	ob.perimeter();
	o.area();
	o.perimeter();
}
