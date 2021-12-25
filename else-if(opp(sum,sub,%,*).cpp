#include<stdio.h>

int main()

{ 
	int i,j;
	float k;
	char op;
	scanf("%d%d",&i,&j);
	scanf("%c",&op);
	if(op=='+')
	{ 
	    k=i+j;
	 printf("%f",k);
	 
	}
	else if(op=='-')
	{ 
	    k=i-j;
	 printf("%f",k);
	 
	}
	else if(op=='*')
	{ 
	    k=i*j;
	 printf("%f",k);
	 
	}
	else if(op=='/')
	{ 
	   k=i/j;
	 printf("%f",k);
	 
	}
	else if(op=='%')
	{ 
	  k=i%j;
	 printf("%f",k);
	 
	}
	
	else
	{ 
	    printf("Invalid Operator");
	    
	}
	
}
