#include<iostream>
using namespace std;
void print(int n)
{
	if(n==0)
	return ;
	
	cout<<n<<endl;
	
	print(n-1);
}
int main()
{
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	cout<<"print the number in  the decreasing order"<<endl;
    print(n);
}
