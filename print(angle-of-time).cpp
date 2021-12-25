 //H hours, M minutes and S seconds are passed since the midnight (0 ≤ H < 12, 0 ≤ M < 60, 0 ≤ S < 60).
//Determine the angle (in degrees) of the hour hand on the clock face right now.
//Hint: For each of the hour, hours hand rotates by 30 degrees.
#include<stdio.h>
int main()
{
    float h,m,s,H,H1,H2,t,angle;
    printf("enter the hours:");
    scanf("%f",&h);
    printf("enter the mintues:");
    scanf("%f",&m);
    printf("enter the seconds");
    scanf("%f",&s);
    H=h;
    H1=m/60;
    H2=s/3600;
    t=H+H1+H2;
    printf("the time converted into hours:%f",t);
    angle=t*30;
    printf("\nthe angle of time is:%f",angle);
    return(0);
}
