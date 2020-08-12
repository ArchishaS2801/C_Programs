#include <stdio.h>
#include <stdlib.h>
#include <math.h> 


int main()
{
    printf("Enter the a,b,c of your quadratic equation");
    int a;
    printf("enter a");
    scanf("%d",&a);
    int b;
    printf("enter b");
    scanf("%d",&b);
    int c;
    printf("enter c");
    scanf("%d",&c);
    double D=(b*b)-(4*a*c);
    double DP=(b*b)+(4*a*c);
    if(D<0)
    {
        printf("roots dont exist");
    }
    else if(D==0)
    {
        double ans=(D*(0.5))/2*a;
        printf("%f",ans);
    }
    else
    {
        double ans=(D*(0.5))/2*a;
        double ans2=(DP*(0.5))/2*a;
        printf("%f ",ans);
        printf("%f ",ans2);


    }
    
    

}