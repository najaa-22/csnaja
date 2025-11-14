#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5
int counter=0;

struct stack {
    int data;
    struct stack *link;
};

struct stack *TOP = NULL;


void push(int item) {
    struct stack *newnode;
    newnode = (struct stack *)malloc(sizeof(struct stack));
    newnode->data = item;
    newnode->link = NULL;
    
    if(TOP==NULL)
    {
    	TOP=newnode;
    	counter=counter+1;
    }
    else
    {
    	if (counter<MAX_SIZE)
    	{
    		newnode->link=TOP;
    		TOP=newnode;
    		counter=counter+1;
    	}
    	else
    		printf("stack is full");
    }
    
    
}


void traverselist() {
    struct stack *ptr = TOP;
    if (ptr == NULL) {
        printf("stack is empty.\n");
        return;
    }
    printf("Linked List: ");
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}


void pop() {
    if (header == NULL) {
        printf("stack is empty, deletion not possible.\n");
        return;
    }
    struct node *ptr = top;
    header = header->link;
    printf("Deleted element: %d\n", ptr->data);
    free(ptr);
}




















int main() {
    int choice, num, key;

    do {
        printf("\n stack using Linked List Operations:\n");
        printf("1. push element at top\n");
        printf("4. Display\n");
        printf("5. pop element\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number: ");
                scanf("%d", &num);
                push(num);
                break;
            case 2:
                printf("Enter the number: ");
                scanf("%d", &num);
                insertatend(num);
                break;
            case 3:
                printf("Enter the key after which to insert: ");
                scanf("%d", &key);
                printf("Enter the number: ");
                scanf("%d", &num);
                insertatany(key, num);
                break;
            case 4:
                traverselist();
                break;
            case 5:
                deleteatfirst();
                break;
            case 6:
                deleteatend();
                break;
            case 7:
                printf("Enter the key to delete: ");
                scanf("%d", &key);
                deleteatany(key);
                break;
            case 8:
                printf("Exiting...\n");
                break;
            default:
                printf("Enter a valid choice.\n");
        }
    } while (choice != 8);

    return 0;
}









