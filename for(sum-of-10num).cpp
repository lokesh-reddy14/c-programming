/*6. 10 numbers are given in the input. Read them and print their sum. Use as few variables as you
can.*/
 
 #include<stdio.h>
int main()
{ int a,b,c;
 b=0;  
   for(a=1;a<=10;a++)
   { scanf("%d",&c);
    b=b+c;
	}
   printf("\nthe sum is:%d",b);


   
  return 0;
}
