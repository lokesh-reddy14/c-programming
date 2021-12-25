#include <stdio.h>

int main()

{
	int age,dis;
	char gen;
	
	//read gender.
	printf("enter your gender: ");
	scanf("%c",&gen);
	
	//read age.
	printf("enter your age: ");
	scanf("%d",&age);
	
	
	//read distance only if age id greater than 5. 
	if (age>=5)
	{
		printf("enter your distance in Km: ");
	scanf("%d",&dis);
	}
	
	
      	if (age>=59)
   	   {
		//if gender is male then 30% discount is given.
		 if (gen=='m')
		 printf("Total fare for you trip is %d",(dis*20)-(.3*(dis*20)));
		
		 //if gender is female then 40% discount is given.
		 else if (gen=='f')
		 printf("Total fare for you trip is %d",(dis*20)-(.4*(dis*20)));
	    } 
	
	     else if (age<=59 && age>=6)
	     {
		 //if age is between 6 and 12 only half fare is calculated.
		 if (age>=6 && age<=12)
		 printf("Total fare for you trip is %d",(dis*20)/2);
		 
		 //if age is between 13 and 59 total fare is calculated.
		 else
		 printf("Total fare for you trip is %d",dis*20);
	     }
	  	//if age is less than 5, no fare is taken.
	     else 
	     printf("Total fare for you trip is zero");
	
	     printf("\nHave a Safe Trip. :)");
	
     	return 0;
	
}
