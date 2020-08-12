#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a=5;
	int b=10;
	int t=a;
	a=b;
	b=t;
	printf("value of a is %d",a);
	printf("value of b is %d",b);
}
