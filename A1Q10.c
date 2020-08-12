#include <stdio.h>
#include <stdlib.h>

void main()
{
    int angle1,angle2,angle3;
    printf("Enter the three angles \n");
    scanf("%d \n",&angle1);
    scanf("%d \n",&angle2);
    scanf("%d \n",&angle3);
    int total=angle1+angle2+angle3;
    if(total==180)
    {
        printf("The triangle is valid");
    }
    else
    {
        printf("not a valide triangle");
    }
    
}