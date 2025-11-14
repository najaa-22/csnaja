#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *header = NULL;

void insertatend(int item) {
    struct node *newnode, *ptr;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->link = NULL;

    if (header == NULL) {
        header = newnode;
    } else {
        ptr = header;
        while (ptr->link != NULL)
            ptr = ptr->link;
        ptr->link = newnode;
    }
}


void insertatfront(int item) {
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->link = header;
    header = newnode;
}


void insertatany(int key, int item) {
    struct node *ptr = header;
    while (ptr != NULL && ptr->data != key)
        ptr = ptr->link;

    if (ptr == NULL) {
        printf("Key %d not found, insertion not possible.\n", key);
    } else {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = item;
        newnode->link = ptr->link;
        ptr->link = newnode;
    }
}

void traverselist() {
    struct node *ptr = header;
    if (ptr == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("Linked List: ");
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}

void deleteatfirst() {
    if (header == NULL) {
        printf("List is empty, deletion not possible.\n");
        return;
    }
    struct node *ptr = header;
    header = header->link;
    printf("Deleted element: %d\n", ptr->data);
    free(ptr);
}

void deleteatend() {
    if (header == NULL) {
        printf("List is empty, deletion not possible.\n");
        return;
    }
    struct node *ptr = header, *ptr1 = NULL;

    if (header->link == NULL) { 
        printf("Deleted element: %d\n", header->data);
        free(header);
        header = NULL;
        return;
    }

    while (ptr->link != NULL) {
        ptr1 = ptr;
        ptr = ptr->link;
    }

    printf("Deleted element: %d\n", ptr->data);
    ptr1->link = NULL;
    free(ptr);
}

// Function to delete a node with a given key
void deleteatany(int key) {
    if (header == NULL) {
        printf("List is empty, deletion not possible.\n");
        return;
    }

    struct node *ptr = header, *prev = NULL;

    while (ptr != NULL && ptr->data != key) {
        prev = ptr;
        ptr = ptr->link;
    }

    if (ptr == NULL) {
        printf("Key %d not found, deletion not possible.\n", key);
        return;
    }

    if (prev == NULL) { // deleting first node
        header = header->link;
    } else {
        prev->link = ptr->link;
    }

    printf("Deleted element: %d\n", ptr->data);
    free(ptr);
}

int main() {
    int choice, num, key;

    do {
        printf("\nLinked List Operations:\n");
        printf("1. Insert at front\n");
        printf("2. Insert at end\n");
        printf("3. Insert after key\n");
        printf("4. Display\n");
        printf("5. Delete first\n");
        printf("6. Delete last\n");
        printf("7. Delete by key\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number: ");
                scanf("%d", &num);
                insertatfront(num);
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








