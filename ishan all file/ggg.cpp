#include<iostream>
using namespace std;
class B;
class A
{
	protected:
	int a;
	public:
			friend class B;
};
class B
{
	int b;
	public:
		
		B()
		{
			A obj;
			cout<<"\n Enter first number:";
			cin>>obj.a;
			cout<<"enter second number";
			cin>>b;
			cout<<"\nSum="<<obj.a+b<<endl;
		}
};
int main()
{
B p;
return 0;
}
