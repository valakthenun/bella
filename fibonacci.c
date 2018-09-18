#include<stdio.h>
int main()
{
	int n1=0,n2=0,n3,n,i;
	printf("enter the number");
	scanf("%d",&n);
	printf("enter the no of fibonacci series");
	for(i=2;i<n;i++)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d",n3);
	}
	return 0;
}


