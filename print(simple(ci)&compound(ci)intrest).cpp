#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,si,ci;	
	printf("the princpal is p:");
	scanf("%f",&p);	
	printf("the rate of interest is r:"); 
	scanf("%f",&r);	
	printf("the time is t:");
	scanf("%f",&t);	
	si=(p*r*t)/100;
	printf("the simple interest is: %f",si);
	ci=p*(pow((1+r/100),t));
	printf("\n the compound interset is: %f",ci);
	return(0);	
		
}
