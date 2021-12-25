#include <stdio.h>

int main()
{
    char op;
    float num1, num2, result;
    scanf("%c",&op);
    scanf("%f%f",&num1,&num2);

    switch(op)
    {
        case '+': 
            result = num1 + num2;
            printf("the resultis:%f",result);
            break;

        case '-': 
            result = num1 - num2;
             printf("the resultis:%f",result);
            break;

        case '*': 
            result = num1 * num2;
             printf("the resultis:%f",result);
            break;

        case '/': 
            result = num1 / num2;
             printf("the resultis:%f",result);
            break;

        default: 
            printf("Invalid operator");
    }
    
}
