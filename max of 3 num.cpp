/*2. Write a C program to find maximum between three numbers using conditional operator*/


#include<stdio.h>
int main()
{ int a,b,c,d;
   scanf("%d%d%d",&a,&b,&c);
   d=(a>b)?((a>c)?a:c):((b>c)?b:c);
   printf("is the max %d",d);
}
