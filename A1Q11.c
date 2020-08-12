#include <stdio.h>
#include <stdlib.h>

void main()
{
    int m_n;
    printf("Input month number ");
    scanf("%d",&m_n);
    if(m_n==1||m_n==3||m_n==5||m_n==7||m_n==9||m_n==11)
    {
        printf("This month has 31 days");
    }
    else if(m_n==2)
    {
        printf("This moth has 28/29 days depending on whether the year is leap or not");
    }
    else if(m_n==4||m_n==6||m_n==8||m_n==10||m_n==12)
    {
        printf("This month has 30 days");
    }
    else
    {
        printf("not a valid month number");
    }
    
}