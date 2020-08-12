#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num1,num2;
    printf("enter number 1");
	scanf("%d",&num1);
    printf("enter number 2");
	scanf("%d",&num2);
    if(num1>num2)
    {
        printf("%d is greater",num1);
    }
    else if(num1==num2)
    {
        printf("both are equal");
    }
    else
    {
        printf("%d is greater",num2);
    }
    
}