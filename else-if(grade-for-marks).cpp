#include<stdio.h>

int main()

{ 
	float i;
	scanf("%f",&i);
	if((i<=10) && (i>=9))
	{ 
	 printf("O Grade");
	 
	}
	else if((i<8.9) && (i>=7))
	{ 
	 printf("A Grade");
	 
	}
	else if((i<6.9) && (i>=5))
	{ 
	 printf("B Grade");
	 
	}
	else if((i<4.9) && (i>=3))
	{ 
	 printf("C Grade");
	 
	}
	else if (i<3)
	{ 
	 printf("Fail");
	 
	}
}
