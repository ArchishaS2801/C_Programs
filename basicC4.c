#include <stdio.h>
#include <stdlib.h>
int main()
{
	int age;
	printf("enter AGE");
	scanf("%d",&age);
	if(age==18)
	{
		printf(" 18");
	}
	else if(age>18)
	{
		printf(" greater 18");
	}
	if(age<18)
	{
		printf("lesser than 18");
	}
}
