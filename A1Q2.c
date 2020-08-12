#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a;
    printf("enter number : ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("NUmber is positive");
    }
    else if(a==0)
    {
        printf("number is 0");
    }
    else
    {
       printf("number is negative");
    }
    

}