#include <stdio.h>
#include <stdlib.h>

void main()
{
    char c;
    printf("enter the character");
    scanf("%c",&c);
    if(c>=97&&c<=122)
    {
       printf("it is a character");
    }
    else if(c>=65&&c<=90)
    {
        printf("it is a character");
    }
    else
    {
        printf("It is not a character");
    }
    
}