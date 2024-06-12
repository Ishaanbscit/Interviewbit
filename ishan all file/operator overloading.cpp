/* write a program to find out A=3*b, 
if A and B be the objects of the same
class.use operator overloading to 
accomplish the objective
by using non member function*/

#include<iostream>
using namespace std;
class op{
	int a,b,c,d,e;
	public:
		op()
		{
			a=0;
			b=0;
			c=0;
			d=0;
			e=0;
		}
		op(int m,int n, int o,int p, int q){
			a=m;
			b=n;
			c=o;
			d=p;
			e=q;

		}
		void show()
		{
			cout<<"\na="<<a<<"\nb="<<b<<"\nc="<<c<<"\na="<<d<<"\ne="<<e<<endl;
		}
		
		op friend operator +(int,op);
};
op operator +(int m,int n, int o,int p, int q)
{
	op t;
	t.a=m+r.a;
	t.b=n+r.b;
	t.c=o+r.c;
	t.d=p+r.d;
	t.e=q+r.e;
	return t;
}
int main()
{
	op A,B,C,D,E(10,20,30,40,50);
	A.show();
	B.show();
	C.show();
	D.show();
	E.show();
	A=3+B;
	A.show();
	B.show();
	C.show();
	D.show();
	E.show();
	return 0;
	}
