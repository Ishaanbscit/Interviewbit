#include<iostream>
using namespace std;
void print(int n)
{
	if(n==0)
	return;
	cout<<n<<endl;
	print(n-1);
	cout<<n<<endl;
	cout<<endl;
	
}
int main()
{
	int n;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	print(n);
	cout<<"print the number in decresing order"<<endl;
}
