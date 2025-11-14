#include <stdio.h>
#define MAX_SIZE 5

int queue_array[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int item) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue Overflow!\n");
    } else {
        if (front == -1)
            front = 0;
        rear++;
        queue_array[rear] = item;
        printf("%d enqueued to queue.\n", item);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow!\n");
    } else {
        printf("%d dequeued from queue.\n", queue_array[front]);
        front++;
        if (front > rear) { // Queue is now empty
            front = -1;
            rear = -1;
        }
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue_array[i]);
        }
        printf("\n");
    }
}

int main() {
	int choice;
	do
	{
		int num;
		printf("queue operations:\n 1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n enter the choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter the number: ");
				scanf("%d",&num);
				enqueue(num);
				break;
			case 2:
				dequeue();
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
