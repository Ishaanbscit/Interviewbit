#include<iostream>
using namespace std;
class num
{ 
 int x; 
 float f; 
 public: 
  num() 
  { 
   x=0; 
   f=0; 
  } 
  num(float m) 
  { 
   x=5; 
   f=m; 
  } 
  void disp() 
  { 
   cout<<"\n x="<<x<<"\t f="<<f; 
   //cout<<"\n x="<<x<<"\t f="<<f; 
  } 
}; 
int main() 
{ 
 num t; 
 t.disp();
 t=3; 
 t.disp(); 
 t=5.6; 
 t.disp(); 
 t='x';
 t.disp();
 return 0; 
} 
 