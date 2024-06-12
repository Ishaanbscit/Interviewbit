#include<stdio.h>
int main()
{
	int n[3][3],i,j;
	printf("enter values in 3*3 matrix");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",(*(n+i)+j));
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%5d",*(*(n+i)+j));
		printf("\n");n
}
}