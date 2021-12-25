#include<stdio.h>

int main()

{ 
	char alp;
	scanf("%c",&alp);
	if((alp>='A')&& (alp<='Z'))
	{ 
	 printf("captial");
	 
	}
	else if((alp>='a')&&(alp<='z'))
	{ 
		printf("small");
	}
	else
	
	{ 
		printf("special character");
	}
}
