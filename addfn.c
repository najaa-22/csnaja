#include<stdio.h>
int add(int,int);
int add(int num1,int num2)
{
	int result;
	result=num1+num2;
	return(result);
}
   int main()
 {
	int num1,num2,result;
	printf("enter the first number: ");
	scanf("%d",&num1);
	printf("enter the second number: ");
	scanf("%d",&num2);
	result=add(num1,num2);
	printf("result of addition is %d ",result);
	return(0);
}
