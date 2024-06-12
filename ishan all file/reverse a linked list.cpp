#include<iostream>
#include<vector>
using namespace std;
void print(int arr[],int size,int index)
{
	if(index==size)
	return;
	cout<<arr[index]<<", ";
	print(arr,size,index+1);
}
int main()
{
	int arr[]={1,3,5,7};
	int size = 4;
	
	print(arr,size,0);
	return 0;
}
