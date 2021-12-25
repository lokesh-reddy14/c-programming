#include<stdio.h>

int main()

{ 
	int alp;
	scanf("%d",&alp);
	if((alp>=65) && (alp<=90))
	{ 
	 printf("captial");
	 
	}
	else if((alp>=97) && (alp<=122))
	{ 
		printf("small");
	}
	else
	
	{ 
		printf("special character");
	}
}

