#include <stdio.h>
#include <stdlib.h>

void main()
{
    char c;
    printf("enter the character");
    scanf("%c",&c);
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("the given character is a alphabet");
    }
    else if(c>='0'&& c<='9')
    {
        printf("the given character is a digit");
    }
    else
    {
        printf("it is a special character");
    }
    
}