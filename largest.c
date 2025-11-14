#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter first number: ");
	scanf("%d",&num1);
	printf("enter second number: ");
	scanf("%d",&num2);
	if(num1>num2)
	{
		printf(" %d is largest number\n",num1);
	}
	else
	{
		printf("%d is largest number\n",num2);
	}
return(0);
}


