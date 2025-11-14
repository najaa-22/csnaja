//write a c program to implement stack data structure using array with the following operations:
//1) push
//2) pop
//3) Display


#include<stdio.h>
#define MAX_SIZE 10

int s[MAX_SIZE], top = -1;


void push(int item){
	if (top >= MAX_SIZE - 1){
		printf("Stack is Full\n");
	} else {
		top = top + 1;
		s[top] = item;
	}
}

void pop(){
	if (top < 0){
		printf("Stack is empty\n");
		top = -1;
	} else {
		printf("Poped Element is: %d\n", s[top]);
		top = top - 1;
	}
}

void display(){
	if (top >= 0){
		printf("Stack Elements are:\n");
		for (int i = top; i >= 0; i--){
			printf("%d\n", s[i]);
		}
	} else {
		printf("Stack is empty\n");
	}
	
}




int main()
{
	int choice;
	do
	{
		int num;
		printf("stack operations:\n 1.push\n 2.pop\n 3.display\n 4.exit\n enter the choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter the number: ");
				scanf("%d",&num);
				push(num);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
			default:printf("enter the correct choice: ");
				break;
		}
	}while(choice!=4);
}
		
		
		
		
