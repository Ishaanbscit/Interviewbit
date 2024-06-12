// write a program find out sum of the data of the class using freind class//
#include<iostream>
using namespace std;
class A{
	protected:
		int a;
	public:
		A()
		{
			cout<<"\n enter any number = ";
			cin>>a;
		}
		void show()
		{
			cout<<"\n a ="<<a;
		}
	friend 	void  add ();
			
};
void add()
{
	A obj;
	cout<<"\n add="<<(obj.a*(1+obj.a)/2);
}
int main()
{
	add();
	return 0;
}