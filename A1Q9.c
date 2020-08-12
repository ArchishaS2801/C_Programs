#include <stdio.h>
#include <stdlib.h>

void main()
{
    char c;
    printf("Enter the character");
    scanf("%c",&c);
    if(c>='a'&&c<='z')
    {
        printf("The character is an uppercase alphabet");
    }
    else if(c>='A'&& c<='Z')
    {
        printf("The character is a capital alphabet");
    }
    else
    {
        printf("The character is not an alphabet");
    }
    
}