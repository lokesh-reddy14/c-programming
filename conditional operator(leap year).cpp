/*4. Write a C program to check whether year is leap year or not using conditional operator.*/
#include<stdio.h>
int main()
{ int year;
scanf("%d",&year);
(year%4==0 && year%100!=0)?printf("leap year"):printf("non leap year");

}
