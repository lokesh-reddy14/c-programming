#include<stdio.h>
int main()


{ int x,y,z;
 
	scanf("%d%d%d",&x,&y,&z);
	if(x>y)
	{ 
		if(x>z)
		{
		printf("the biggest number is x");
		}
		else
		{
			printf("the biggest number is z");
		}
	}
	else
	{
		if(y>z)
		{
			printf("the biggest number is y");
		}
		else
		{
			printf("the biggest number is z");
		}
	}
}
