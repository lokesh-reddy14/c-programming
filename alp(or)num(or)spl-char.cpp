#include <stdio.h>
int main() 
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf(" is an alphabet.");
		
		else if(c >= '0' && c <= '9')
    {
        printf(" is digit.",c);
    }
		
	else
   	printf("it is special character");
   	
    return 0;
}
