#include<iostream>
using namespace std;
class unary
{
 int a,b;
 public:
 unary()
 {
 cout<<"\n Enter the values of A and B:";
 cin>>a>>b;
 cout<<"Values of A, B \n";
 cout<<a<<"\n"<<b<<endl;
 }
 void show()
 {
 cout<<a<<"\n"<<b<<endl;
 }
 void friend operator-(unary &x);
void friend operator 
++(unary &x);
void friend operator --(unary &x); 
//call by reference 
};
void operator-(unary &x)
{
 x.a = -x.a; 
 x.b = -x.b;
}
void operator ++(unary &x)
{
 x.a = x.a+1; 
 x.b = x.b+1;
}
void operator --(unary &x)
{
 x.a = x.a-1; 
 x.b = x.b-1;
}
int main()
{
 unary t;
cout<<"Before Overloading\n";
t.show();
 cout<<"After Overloading \n";
 -t;
 t.show();
 -t;
 ++t;
 t.show();
 --t;
 t.show();
 return 0;
}