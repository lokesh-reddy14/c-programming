/*7. N numbers are given in the input. Read them and print their sum.*/

#include<stdio.h>
int main()
{ int i,n,a,sum;
 scanf("%d",&a);
 i=1;
 sum=0;
 while(i<=a)
 { scanf("%d",&n);
 sum=sum+i;
 i=i+1;
 }
 printf("the sum of all numbers is: %d",sum);
}
