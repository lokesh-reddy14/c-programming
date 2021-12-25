//A snail goes up A feet during the day and falls B feet at night. How long does it take him to go up Hfeet?
//Given three integer numbers H, A and B (A > B), the program should output a number of days.
//Hint: ceil() function gives nearest next integer.
//For example: ceil(1.98) = 2.0   Ceil(1.4) = 2.0

#include<stdio.h>
#include<math.h>
int main()
{  
    int a,b,c,h;
	
	printf("the distance travelled a is:");
	scanf("%d",&a);
	printf("the distance travelled b is:");
	scanf("%d",&b);
	printf("the total distance c:");
	scanf("%d",&c);
    h=c/(a-b);
	printf("\nthe total number days will take to travell h:%d",h);
	
}


