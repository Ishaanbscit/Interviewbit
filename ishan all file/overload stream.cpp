/* to overload stream operator<<*/
#include<iostream>
using namespace std;
class str{
	char *s;
	public:
		str(char *k)
		{
			s=k;
		}
	friend ostream & operator<<(ostream &,str&);
};
ostream &operator <<(ostream &p,str &k)
{
	p<<k.s;
	return p;
}
int main()
{
	char d[]="CIMAGEPROFESIONALCOLLEGE";
	str s("CIMAGE");
	cout<<s;
	cout<<"\n"<<d;
	return 0;
}