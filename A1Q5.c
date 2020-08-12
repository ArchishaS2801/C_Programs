#include <stdio.h>
#include <stdlib.h>

void main()
{
    int year;
    printf("Please enter the year: ");
    scanf("%d",&year);

    if(year%400==0)
    {
       printf("It is a leap year");
    }
    else if(year%100==0)
    {
        printf("Not a leap year");
    }
    else if(year%4==0)
    {
        printf("It is a leap year");
    }
    else
    {
       printf("not a leap year");
    }
    
}