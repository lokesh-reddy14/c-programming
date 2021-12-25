/*2. Check whether a number is palindrome or not*/

#include <stdio.h>
int main() 
{
  int n,rev,rem,org;
    printf("Enter an number: ");
    scanf("%d",&n);
    org=n;
    rev=0;
     while (n != 0)
	 {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    } 
    if{ (org==rev)
        printf("%d is a palindrome.", org);
    }else
     {   printf("%d is not a palindrome.",org);}

    return 0;
}
