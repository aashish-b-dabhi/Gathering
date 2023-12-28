#include<stdio.h>

int length(int a[] , int size)
{
	int len;
	
	len = size/sizeof(0);
	printf("Lenght Of Array = %d\n",len);
}

void main()
{
	int a[] = {11,22,33,44,55,66,77,88,99};
	
	length(a,sizeof(a));
}