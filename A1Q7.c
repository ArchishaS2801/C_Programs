#include <stdio.h>
#include <stdlib.h>

void main()
{
    char c;
    printf("enter the character");
    scanf("%c",&c);

    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        printf("it is a vowel");
    }
    else if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        printf("it is a vowel");
    }
    else
    {
        printf("it is a consonant");
    }
  

    


}