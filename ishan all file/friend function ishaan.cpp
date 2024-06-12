#include<iostream>
using namespace std;
class ADD{
	int a,b;
	public:
		ADD()
		{
			a=0;
			b=0;
		}
		ADD(int m,int n)
		{
			a=m;
			b=n;
		}
		ADD friend operator +(ADD,ADD);
		void disp()
		{
			cout<<"\n value of a ="<<a<<"\n value of b="<<b;
		}
};
ADD operator +(ADD t, ADD u)
{
	ADD D;
	D.a=t.a + u.a;
	D.b==t.b+u.b;
	return D;	
}
int main()
{
	ADD A(10,20),B(30,40),C,D;
	A.disp();
	B.disp();
	C+A+B;
	C.disp();
	D=C+A;
	D.disp();
	return 0;
}
