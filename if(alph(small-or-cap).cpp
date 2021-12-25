#include <stdio.h>
int main() 
{
    char c;
   
    scanf("%c",&c);

    if ((c >= 'a' && c <= 'z'))
        printf("It is small letter.");
    else
        printf("It is capital letter.");

    return 0;
}
