/*1. Write a C program to find maximum between two numbers using conditional operator*/
#include<stdio.h>
int main()
{ int a,b,c;
   scanf("%d%d",&a,&b);
   c=(a>b)?a:b;
   printf("is the max %d",c);
}
