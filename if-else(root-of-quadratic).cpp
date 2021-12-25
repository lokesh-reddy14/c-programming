#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e,x,y;
     printf("the value of a:");
     scanf("%f",&a);
    
     printf("the value of b:");
      scanf("%f",&b);
    
     printf("the value of c:");
      scanf("%f",&c);
	d=(((b*b)-(4*a*c)));
	if(d>=0)
	{

	e=sqrt(d);
	x=((-b)+(e))/(2*a);
   	y=((-b)-(e))/(2*a);
	printf("\nthe result is %f",d);
	printf("\nthe result is %f",e);
	printf("\n the vale of x is:%f",x);
	printf("\n the vale of y is :%f",y);
	
    }
    else
    printf("\nthe root does not exited\n");
}
