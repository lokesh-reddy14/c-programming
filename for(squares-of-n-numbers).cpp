/*9. For a given integer N, print all the squares of integer numbers where the square is less than
 or equal to N, in ascending order*/
 
 #include<stdio.h>
 #include<math.h>
 int main()
 { int i,n,squr;
 scanf("%d",&n);
 i=1;
 for(i=1;i<=n;i++)
 {
 	squr=i*i;
 	printf("the square of %d is %d\n",i,squr);
 }
 }
