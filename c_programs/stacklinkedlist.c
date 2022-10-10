#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node* top = NULL;
void push(int val) {
    struct Node *new;
    new = (struct Node *)malloc(sizeof(struct Node));
    new->data = val; 
    if (top == NULL)
    {
        new->next = NULL;
    } 
    else {
        new->next = top; 
    }
    top = new;
    printf("Node is Inserted\n\n");
}
int pop() {
    if (top == NULL) {
        printf("\nStack Underflow\n");
    } else {
        struct Node *temp = top;
        int temp_data = top->data;
        top = top->next;
        free(temp);
        return temp_data;
    }
}
void display() {
    if (top == NULL)
        printf("\nStack is empty\n");
    else {
        printf("The stack is \n");
        struct Node *temp = top;
        while (temp->next != NULL) {
            printf("%d \n", temp->data);
            temp = temp->next;
        }
        printf("%d\n\n", temp->data);
    }
}

int main() {
    int choice, val;
    while (choice!=4) {
        printf("choose from following :\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("\nEnter the val to insert: ");
            scanf("%d", &val);
            push(val);
            break;
        case 2:
            printf("Popped element is :%d\n", pop());
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nWrong Choice\n");
        }
    }
}
