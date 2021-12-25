#include<stdio.h>
int main()
{ 
  int sec,h,m,s;
  float km,mile,M,cm,feet,S,squre,l,b,retangle;
  
  printf("\nthe given time:");
  scanf("%d",&sec);
  h=sec/3600;
  m=(sec-(3600*h))/60;
  s=(sec-(3600*h))-(m*60);
  printf("\nthe h:m:s is %d:%d:%d",h,m,s);
  
  printf("\nthe given distancen km:");
  scanf("%f",&km);
  mile=1.6*km;
  M=km/1000;
  cm=M/100;
  feet=km*3280.84;
  printf("\nthe mile:M:cm:feet %f:%f:%f:%f",mile,M,cm,feet);
  
  printf("\nthe side of squre:");
  scanf("%f",&S);
  squre=S*S;  
  printf("\nthe area of squre %f",squre);
  
   printf("\nthe length of retanglel:");
  scanf("%f",&l);
   printf("the breath of retangleb:");
   scanf("%f",&b);
  retangle=l*b;
  printf("\nthe area of retangle %f: ",retangle); 
     
  
  
  
   return(0);
}
