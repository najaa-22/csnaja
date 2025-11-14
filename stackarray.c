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




int main(){
	int count = 0, var, value;


	while (count != 1) {
	
		printf(" 1.Push\n 2.Pop\n 3.Display\n 4.Exit\n Choose a Choice: ");
		scanf("%d", &var);
	
		if(var == 1){
			printf("Enter a value: ");
			scanf("%d",&value);
			push(value);
		} else if (var == 2){
			pop();
		} else if (var == 3){
			display();
		} else if (var == 4){
			count++;
			printf("Exited...\n");
			return(0);
		} else {
			printf("invalid Number!!!\n");
		}
			
	
	}
	
	return(0);
}
