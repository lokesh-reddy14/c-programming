#include <stdio.h>

int main()
{
    int num,res;

    
    printf("Enter any number: ");
    scanf("%d", &num);
    res=num%2;
    printf("the LSB is:%d",res);
    return(0);
       
}
