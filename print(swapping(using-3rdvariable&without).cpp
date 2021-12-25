#include<stdio.h>
int main()
{
	int a,b,temp;
	/*using the 3rd variable*/
	printf("the value of a is:");
	scanf("%d",&a);
    printf("the value of b is:");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("\nthe value of a is:%d\n",a);
	printf("the value of b is:%d",b);
		
	/* without using third variable (1)*/
	printf("\nthe value of a is:");
	scanf("%d",&a);
    printf("the value of b is:");
	scanf("%d",&b);
    a=a*b;
	b=a/b;
	a=a/b;
	printf("\nthe value of a is:%d\n",a);
	printf("the value of b is:%d",b);
  
  
  /* without using third variable (2)*/
	printf("\nthe value of a is:");
	scanf("%d",&a);
    printf("the value of b is:");
	scanf("%d",&b);
    a=a+b;
	b=a-b;
	a=a-b;
	printf("\nthe value of a is:%d\n",a);
	printf("the value of b is:%d",b);
		
	return(0);
}
