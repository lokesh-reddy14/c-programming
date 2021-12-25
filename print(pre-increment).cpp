#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	b=++a;
	printf("preincrement is %d",a);
	printf("preincrement is %d",b);
	return(0);	
}
