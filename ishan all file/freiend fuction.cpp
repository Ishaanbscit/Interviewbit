//friend fuunction
#include<iostream>
using namespace std;
class A{
	protected:
		int a;
	public:
	/*	A()
		{
			cout<<"\n enter any number = ";
			cin>>a;
		}
		void show()
		{
			cout<<"\n a ="<<a;
		}*/
	friend 	void  square ();
			
};
void square()
{
	A obj;
	cout<<"enter any number";
	cin>>obj.an;
	cout<<"\n square="<<(obj.a*obj.a);
}
int main()
{
	square();
	return 0;
}