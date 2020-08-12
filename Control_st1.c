#include <stdio.h>

void main()
{
    int a=10;
    if(a<10){
        if(a%2==0)
        {
            printf("this is even and less than 10");
        }
        else
        {
            printf("this is odd");
        }
    }
    else{
        printf("this is greater than 10");
    }

}