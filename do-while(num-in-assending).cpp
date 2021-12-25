/*2. Given two integers A and B (A <= B). Print all numbers from A to B inclusively.*/

#include<stdio.h>
int main()
{ int a,b;
   scanf("%d%d",&a,&b);
  a=a;
   if (a<=b)
   { 
 do
   { printf("%d\n",a);
    a=a+1;
	}while(a<=b);
   }
    else
   
   {
    printf("it is not possblie\n");
   }
   
  return 0;
}
