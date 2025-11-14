#include<stdio.h>
void sort_array(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
void display_array(int arr[],int n)
{
	printf("\narray elements are: ");
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
void merge_array(int arr1[],int arr2[],int arr3[],int n1,int n2)
{ 
        int i,j;
	for (int i=0;i<n1;i++)
	{
		arr3[i]=arr1[i];
	}
	
	for (int j=0;j<n2;j++)
	{
		arr3[i]=arr2[j];
		i++;
	}
}
int main()
{
	int arr1[100],arr2[100],arr3[200],n1,n2,n3,i;
	printf("enter the number of values to array1: ");
	scanf("%d",&n1);
	if(n1<100)
	{
		for(i=0;i<n1;i++)
		{
			printf("enter the number: ");
			scanf("%d",&arr1[i]);
		}
		
	}
	else
	{
		printf("only upto 100\n");
	}
	printf("enter the number of values to array2: ");
	scanf("%d",&n2);
	
	if(n2<100)
	{
		for(i=0;i<n2;i++)
		{
			printf("enter the number: ");
			scanf("%d",&arr2[i]);
		}
	}
	else
	{
		printf("only upto 100\n");
	}
		sort_array(arr1,n1);
		sort_array(arr2,n2);
		display_array(arr1,n1);
		display_array(arr2,n2);
		merge_array(arr1,arr2,arr3,n1,n2);
		sort_array(arr3,n1+n2);
		display_array(arr3,n1+n2);
		
}










	
