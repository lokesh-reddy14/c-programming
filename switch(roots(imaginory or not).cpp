#include<stdio.h>
#include<math.h>
int main()
{  
int a,b,c;
float d,root1,root2;
scanf("%d%d%d",&a,&b,&c);
d=sqrt((b*b)-4*a*c);
	switch(d>=0)
	{  case 1:
		root1=((-b)-d)/(2*a);
		printf("the root1 is:%.2f",root1);
		root2=((-b)+d)/(2*a);
		printf("the root2 is:%.2f",root2);
	   case 0:
	   	printf("it is imaginary");
	}
}
