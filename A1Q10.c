#include <stdio.h>
#include <stdlib.h>

void main()
{
    int angle1;
    int angle2;
    int angle3;
    printf("Enter the first angle \n");
    scanf("%d",&angle1);
    printf("Enter the second angle \n");
    scanf("%d",&angle2);
    printf("Enter the third angle \n");
    scanf("%d",&angle3);
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