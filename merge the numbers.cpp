#include<stdio.h>
int main()
{
	int arr1=5,arr2=5,arr,i,j;
	int a[5],b[5];
	printf("enter the value of a");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	printf("enter the value of b");
	for(i=0;i<5;i++)
	scanf("%d",&b[i]);
	arr=arr1+arr2;
	int c[arr];
	for(i=0;i<arr1;i++)
	{
		c[i]=a[i];
	}
	for(i=0,j=arr1;j<arr&&i<arr2;i++,j++)
	{
		c[j]=b[i];
	}
	for(i=0;i<arr;i++)
	{
		printf("%d ",c[i]);
	}
}
