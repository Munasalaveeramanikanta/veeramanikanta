#include<stdio.h>
int add();
int sub();
void main()
{
	int r,r2;
	r=add();
	r2=sub();
	printf("Result=%d,%d",r,r2);
}
int add()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=a+b;
	return c;
}
int sub()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=a-b;
	return c;
}
