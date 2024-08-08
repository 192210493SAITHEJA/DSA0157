#include<iostream>
using namespace std;
class shape{
	public:
		virtual void area(){
			int a=0;
		}
		virtual void volume(){
			int v=0;
		}
};
class sphere:public shape{
	public:
		void area() override{
			int r;
			float a;
			cout<<"Enter for radius for area:";
			cin>>r;
			a=4*3.14*r*r;
			cout<<"Area of Sphere ="<<a<<endl;
		}
		void volume() override{
			int r;
			float v;
			cout<<"Enter for radius for volume:";
			cin>>r;
			v=1.333*3.14*r*r;
			cout<<"Volume of Sphere ="<<v<<endl;
		}
};
class cylinder:public shape{
	public:
		void area() override{
			int r,h;
			float a;
			cout<<"Enter for radius for area:";
			cin>>r;
			cout<<"Enter for height for area:";
			cin>>h;
			a=(2*3.14*r*h)+(2*3.14*r*r);
			cout<<"Area of Sphere ="<<a<<endl;
		}
		void volume() override{
			int r,h;
			float v;
			cout<<"Enter for radius for volume:";
			cin>>r;
			cout<<"Enter for height for volume:";
			cin>>h;
			v=3.14*r*r*h;
			cout<<"Volume of Sphere ="<<v<<endl;
		}
};
int main(){
	shape obj;
	sphere ob;
	cylinder o;
	obj.area();
	obj.volume();
	ob.area();
	ob.volume();
	o.area();
	o.volume();
}
