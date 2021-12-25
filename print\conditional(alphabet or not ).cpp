/*5. Write a C program to check whether character is an alphabet or not using conditional operator.*/

#include<stdio.h>
int main()
{ char ch;
scanf("%c",&ch);
  (ch>='a' && ch<='z')||(ch>='A' && ch<='Z')?printf("it is alphabet"):printf("it is not alphabet");
}
