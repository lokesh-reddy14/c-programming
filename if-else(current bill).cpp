#include<stdio.h>
int main()
{ 
   float units,a,bill;
   scanf("%f",&units);
   if(units<=50)
   {
   	a=(units*(0.50));
   	bill=(a+(0.2*a));  	
   	printf("the total amount is%f",bill);
   }
   else if((units>50)&&(units<=100))
   {
   	a=(units*(0.75));
   	bill=(a+(0.2*a));  	
   	printf("the total amount is%f",bill);
   }
   else if((units>100)&&(units<=250))
   {
   	a=(units*(1.20));
   	bill=(a+(0.2*a));  	
   	printf("the total amount is%f",bill);
   }
   else
   {
   	a=(units*(1.50));
   	bill=(a+(0.2*a));  	
   	printf("the total amount is%f",bill);
   }
}
