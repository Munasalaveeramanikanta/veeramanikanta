#include<stdio.h>
main()
{
	int fact,sum=0,r,n,i;
	int temp;
	printf("enter the value");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		fact=1;
		for(i=1;i<=r;i++)
		fact=fact*i;
		sum=sum+fact;
		n=n/10;
	}
	if(temp==sum)
	printf("strong number");
	else
	printf("not strong number");
	}
