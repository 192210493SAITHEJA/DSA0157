#include<iostream>
using namespace std;
class employee{
	public:
		virtual void calculatepay(){
			cout<<"This is Salaries"<<endl;
		}
};
class manager:public employee{
	public:
		void calculatepay() override{
			cout<<"50k"<<endl;
		}
};
class engineer:public employee{
	public:
		void calculatepay() override{
			cout<<"35k"<<endl;
		}
};
int main(){
	employee obj;
	manager ob;
	engineer o;
	obj.calculatepay();
	ob.calculatepay();
	o.calculatepay();
}
