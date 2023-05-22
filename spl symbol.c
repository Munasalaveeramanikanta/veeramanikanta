#include<stdio.h>
main()
{
	char ch;
	scanf("%c",&ch);
	
	if((ch>='A')&&(ch<='Z'))
	printf("alphabet");
  else
   	if((ch>='a')&&(ch<='z'))
	printf("alphabet");
	else if((ch>='1')&&(ch<='100'))
	printf("digit");
	else
	printf("spl symbol");
}
