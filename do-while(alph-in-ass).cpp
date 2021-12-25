/*4. Given two integers A and B. Print all numbers from A to B inclusively, in ascending order, if
 A < B,or in descending order, if A => B.*/


#include<stdio.h>
int main()
{ int a,b;
   scanf("%d%d",&a,&b);
  a=a;
   if (a>=b)
   { 
    while(a>=b)
   { printf("%d\n",a);
    a=a-1;
	}
   }
    else
   
   {
    do
   { printf("%d\n",a);
    a=a+1;
	}while(a<b);
   
   }
   
  return 0;
}
