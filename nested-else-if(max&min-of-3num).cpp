#include<stdio.h>
int main()


{ int x,y,z;
 
	scanf("%d%d%d",&x,&y,&z);
	if(x>y)
	{ 
		if(x>z)
		{
		printf("%d\n%d",x,y);
		}
		else
		{
			printf("%d\n%d",z,y);
		}
	}
	else
	{
		if(y>z)
		{
			printf("%d\n%d yz",y,z);
		}
		else
		{
			printf("%d\n%d",z,x);
		}
	}
}
