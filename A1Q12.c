#include <stdio.h>
#include <stdlib.h>

void main()
{
    int angle1;
    int angle2;
    int angle3;
    printf("Enter the first angle");
    scanf("%d",&angle1);
    printf("Enter the second angle");
    scanf("%d",&angle2);
    printf("Enter the third angle");
    scanf("%d",&angle3);
    if(angle1==angle2&&angle2==angle3)
    {
        printf("The triangle is equilateral");
    }
    else if(angle1==angle2||angle2==angle3||angle3==angle1)
    {
        printf("The triangle is isocelus");
    }
    else
    {
        printf("This triangle is scalene");
    }
    
}