#include<stdio.h>
int main()
{  
 int angle1,angle2,angle3; 
    
   printf("one of the side is angle1:");
   scanf("%d",&angle1);
   
   printf("one of the side is angle2:");
   scanf("%d",&angle2);
   
   angle3= 180-(angle1+angle2);
   
   printf("last of the side is %d",angle3);
    
    return(0);
	   
}
