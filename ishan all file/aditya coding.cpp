#include<stdio.h>
#define size 3
int main()
{
	int n[size],i;
	printf("enter %d numbers=",size);
	for(i=1;i<size;i++)
	scanf("%d",(n+1));
	for(i=0;i<size;i++)
	printf("%5d",*(n+1));
}