#include<stdio.h>
 int main()
 {  
 int side1,side2,side3;
 scanf("%d%d%d",&side1,&side2,&side3);
 if((side1==side2)&&(side2==side3))
    {printf("it ia a equilateral");}
 else if((side1==side2)&&(side2!=side3))
      { printf("it is a isosceles");
	  }
  else if((side2==side3)&&(side1!=side2))
      { printf("it is a isosceles");
	  }
 else if((side1==side3)&&(side1!=side2))
      { printf("it is a isosceles");
	  }
  else
  { printf("it is a scalene");
  }
 }
