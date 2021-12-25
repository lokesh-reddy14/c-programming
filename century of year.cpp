#include<stdio.h>
#include<math.h>
int main()
{ 
  float year,d;
  printf("enter the year:");
  scanf("%f",&year);
  d=ceil(year/100);
    
  printf("the century is:%.0f",d);
  return 0;
}
