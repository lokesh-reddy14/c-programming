/*8. N numbers are given in the input. Read them and print their product.*/

#include<stdio.h>
int main()
{ int i,n,a,product;
  scanf("%d",&a);

 i=1;
 product=1;
 while(i<=a)
 { 
  scanf("%d",&n);

 product=product*n;
 i=i+1;
 }
 printf("the product of all numbers is: %d",product);
}
