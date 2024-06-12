#include<iostream>
using namespace std;
class unary{
	int a,b;
	public:
		unary()
		{
			cout<<"\n Enter the values of a and b:";
			//cout<<a<<"\n"<<b<<endl;
			cin>>a>>b;
			cout<<"values of A and B:";
			cout<<a<<"\n"<<b<<endl;
		}
		void show()
		{
			cout<<a<<"\n"<<b<<endl;
		}
void friend operator -(unary &x);
void friend operator ++(unary &x);
void friend operator --(unary &x);
};
void operator-(unary &x)
{
	x.a=-x.a;
	x.b=-x.b;
}
void operator ++(unary &x)
{
	x.a=x.a+1;
	x.b=x.b+1;	
}
void operator --(unary &x)
{
	x.a=x.a-1;
	x.b=x.b-1;
}
int main()
{
	unary t;
	cout<<"before overloading\n";
	t.show();
	cout<<"after overloading\n";
	-t;
	t.show();
	-t;
	++t;
	t.show();
	--t;
	t.show();
	return 0;
}
