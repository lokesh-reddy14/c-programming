#include<stdio.h>
void main()
{
	float a,b,c,s,m,d;
	int x,y,p;
	printf("enter the value of a,b:");
	scanf("%f%f",&a,&b);
	printf("enter the value of x,y:");
	scanf("%d%d",&x,&y);
	c=a+b;
	s=a-b;
	m=a*b;
	d=a/b;
	p=x%y;
	printf("sum of two numbers %f",c);
	printf("subtraction of two numbers %f",s);
	printf("division of two numbers %f",d);
	printf("multiplication of two numbers %f",m);
	printf("modules of two numbers %d",p);
}
