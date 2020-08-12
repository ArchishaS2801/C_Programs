#include <stdio.h>
#include <stdlib.h>

void main()
{
    int m1;
    int m2;
    int m3;
    int m4;
    int m5;
    printf("Enter math marks");
    scanf("%d",&m1);
    printf("Enter physics marks");
    scanf("%d",&m2);
    printf("Enter chemistry marks");
    scanf("%d",&m3);
    printf("Enter biology marks");
    scanf("%d",&m4);
    printf("Enter computer marks");
    scanf("%d",&m5);
    int tm=m1+m2+m3+m4+m5;
    double perc=tm/5;
    if(perc>=90&&perc<=100)
    {
        printf("A");
    }
    else if(perc>=80&&perc<90)
    {
        printf("B");
    }
    else if(perc>=70&&perc<80)
    {
        printf("C");
    }
    else if(perc>=60&&perc<70)
    {
        printf("D");
    }
    else if(perc>=40&&perc<60)
    {
        printf("E");
    }
    else if(perc<40)
    {
        printf("F");
    }
    else
    {
        printf("invalid inputs");
    }
    
}