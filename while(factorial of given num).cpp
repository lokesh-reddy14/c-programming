/*1. Find factorial of a given number.*/

#include<stdio.h>
int main()
{ int i,n,product;
 scanf("%d",&n);
 i=1;
 while(i<=n)
 { 
 product=product*i;
 i=i+1;
 }
 printf("the factorial of numbers is: %d",product);
}
