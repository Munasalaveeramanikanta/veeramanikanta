#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int i;
	printf("enter the value");
	gets(a);
	puts(a);
	puts(strrev(a));
}
