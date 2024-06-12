#include<iostream>
using namespace std;

int power(int num1,int num2)
{
	int ans=1;
	
	for(int i=1; i<=num2;i++){
		ans = ans*num1;
	}
	return ans;
}
int main()
{
	int c,d;
	cout<<"enter the number for power=";
	cin>>c;
	cout<<"then power for that number=";
	cin>>d;
	
	int answer = power(c,d);
	cout<<"answer is="<<answer <<endl;
	
	return 0;
}