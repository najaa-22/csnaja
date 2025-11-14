#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5
int counter = 0;

struct stack {
    int data;
    struct stack *link;
};

struct stack *TOP = NULL;

// Function to push an element onto the stack
void push(int item) {
    if (counter >= MAX_SIZE) {
        printf("Stack is full. Push not possible.\n");
        return;
    }

    struct stack *newnode = (struct stack *)malloc(sizeof(struct stack));
    if (!newnode) {
        printf("Memory allocation failed.\n");
        return;
    }

    newnode->data = item;
    newnode->link = TOP;
    TOP = newnode;
    counter++;
    printf("%d pushed to stack.\n", item);
}

// Function to pop an element from the stack
void pop() {
    if (TOP == NULL) {
        printf("Stack is empty. Pop not possible.\n");
        return;
    }

    struct stack *temp = TOP;
    printf("Popped element: %d\n", temp->data);
    TOP = TOP->link;
    free(temp);
    counter--;
}

// Function to display the stack
void display() {
    if (TOP == NULL) {
        printf("Stack is empty.\n");
        return;
    }

    struct stack *ptr = TOP;
    printf("Stack elements (top to bottom): ");
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}

// Main function
int main() {
    int choice, num;

    do {
        printf("\n--- Stack using Linked List ---\n");
        printf("1. Push element\n");
        printf("2. Pop element\n");
        printf("3. Display stack\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter number to push: ");
                scanf("%d", &num);
                push(num);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}

