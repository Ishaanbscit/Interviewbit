/* to overload extraction operator(>>):
syntax:
friend istream & operator >>(istream &p,udc)
{
 //body
 return p;
}
//overloDING STREAM OPERATOR extraction operator(>>)*/
#include<iostream>
using namespace std;
class num{
	int s;
	public:
		friend ostream & operator<<(ostream &, num &);
		friend istream & operator>>(istream &,num &); 
	};
	 ostream &operator <<(ostream &p, num &k)
		{
			p<<k.s;
			return p;
		}
	istream & operator >>(istream &p,num &k)
	{
		cout<<"\n enter any number:";
		p>>k.s;
		return p;
	}
int main()
{
	num t;
	cin>>t;
	cout<<"\n entered value is :";
	cout<<t;
	return 0;
}
     







