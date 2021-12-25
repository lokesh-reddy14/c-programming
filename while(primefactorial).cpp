#include<stdio.h>
int main()
{
	 int num,i;
	 scanf("%d",&num);
	 while(num%2==0)
	 { printf("%d\t",2);
	 num=num/2;
	 }
	 for(i=3;i<=num;i=i+2)
	 {while(num%i==0)
	     { printf("%d\t",i);
	     num=num/i;
	     }
	 }
}
