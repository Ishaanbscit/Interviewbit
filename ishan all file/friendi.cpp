#include<iostream>
using namespace std;
class ADD
{
protected:
int a,b;
public:
ADD()//default constructor
{
a=0;
b=0;
}
ADD(int m, int n)
//parametrized constructor
{
a=m;
b=n;
}
ADD friend operator +(ADD,ADD);
//prototype declaration of friend function
void disp()
{
cout<<"\n Value of a="<<a<<"\n Value of b="<<b;
}
};
ADD operator +(ADD t,ADD u)//definition of friend function
{
ADD D;
D.a=t.a+u.a;
D.b=t.b+u.b;
return D;
}
int main()
{
ADD A(10,20),B(30,40),C,D,E;
A.disp();
B.disp();
C=A+B;
C.disp();
D=C+A;
D.disp();
E=D+A;
E.disp();
return 0;
}



