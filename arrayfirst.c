#include<stdio.h>
int main()
{
	int arr[50],i,num,sum=0;
	printf("enter the number of values: ");
	scanf("%d",&num);
	if (num<=50)
	{
		for(i=0;i<num;i++)
		{
			printf("enter the number: ");
			scanf("%d",&arr[i]);
		}
		for(i=0;i<num;i++)
		{
			sum=sum+arr[i];
		}
		printf("sum is :%d\n",sum);
		return(0);
	}
	else
	printf("values upto 50 only\n");
}
