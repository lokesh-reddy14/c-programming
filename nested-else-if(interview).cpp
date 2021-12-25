#include <stdio.h>

int main()

{
	float cg;
	char ti,hr;
	int at;
	
	printf("Enter your CGPA:");
	scanf("%f",&cg);
	
	if (cg>8.5)
	{
		printf("Enter your Aptitude test score:");
		scanf("%d",&at);
		
		if (at>60)
		{
			printf("Enter your Technical Interview report:");
			scanf("%c",&ti);
			
			if (ti=='E' || ti=='S')
			{
				printf("Enter your HR Interview report:");
				scanf("%c",&hr);
		
				if (hr=='Y')
		    	{
					printf("Congratulations!!! You are placed in XYZ company");
				}
			
				else
				printf("HR Interview is not cleared.");
			}
			
			else
			{
				printf("Technical Interview is not cleared.");
			}
			
			
		}
		
		else{
			printf("Aptitude test is not cleared.");
		}
	}
	
	else
	printf("Not Eligible for placements.");
	
	return 0;
}
