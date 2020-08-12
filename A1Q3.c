#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num;
    printf("enter number");
    scanf("%d",&num);
    if(num%5==0 && num%11==0)
    {
        printf("number is divisle ny both 5 and 11");
    }
    else
    {
        printf("not divisble");
    }
    
}