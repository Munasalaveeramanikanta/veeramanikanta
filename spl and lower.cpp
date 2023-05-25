#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
	 char a[100];
	 int i=0,low,spl,ch;
	 low=spl=0;
	 gets(a);
	 while(a[i]!='\0')
	 {
	 	ch=a[i];
	 	if(ch>='a'&&ch<='z')
	 	low++;
	 	else
	 	spl++;
	 	i++;
	 }
	 printf("%d",low);
	 printf("\n%d",spl);
}
