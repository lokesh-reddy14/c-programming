//Problem Statement -1
//A school decided to replace the desks in three classrooms. Each desk sits two students. Given the
//number of students in each class, print the smallest possible number of desks that can be purchased.
//The program should read three integers: the number of students in each of the three classes, a, b,and c respectively.
//Example: In the first test there are three groups. The first group has 20 students and thus needs 10
//desks. The second group has 21 students, so they can get by with no fewer than 11 desks. 11 desks is
//also enough for the third group of 22 students. So we need 32 desks in total.

#include<stdio.h>
int main()
{ int d1,d2,d3,dt,As,Bs,Cs;
   
   printf("the number of students in section A:");
   scanf("%d",&As);
   printf("the number of students in section B:");
   scanf("%d",&Bs);
   printf("the number of students in section C:");
   scanf("%d",&Cs);
   d1=(As/2)+(As%2); 
   printf("\nthe number of desks is need in class A:%d",d1); 
   d2=(Bs/2)+(Bs%2); 
   printf("\nthe number of desks is need in class B:%d",d2);
   d3=(Cs/2)+(Cs%2); 
   printf("\nthe number of desks is need in class C:%d",d3);
   dt=d1+d2+d3;
   printf("\nthe total number desks requied:%d",dt);
   
   
}
