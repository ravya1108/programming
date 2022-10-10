#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node* create() {
    struct node *head,*p,*previous;
    int choice,x,i;
    printf("\nEnter the number of nodes : ");
    scanf("%d",&choice);
    head=(struct node *)malloc(sizeof(struct node *));
    previous=(struct node *)malloc(sizeof(struct node *));
    previous=head;
    for(i=0;i<choice;i++){
        p=(struct node *)malloc(sizeof(struct node *));
        if(p==NULL){
            printf("Insufficient memory");
            break;
        }
        printf("Enter the value : ");
        scanf("%d",&x);
        p->data=x;
        p->next=NULL;
        previous->next=p;
        previous=p;
    }
 
    return head;
}    

void display(struct node *head){
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node *));
    p=head->next;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;          
    }
}

void merge(struct node *head1,struct node *head2){
    struct node *p=head1;
    while(p->next!=NULL)
        p=p->next;
    
    p->next=head2->next;
}
    
    

int main(){
    struct node *first,*second;
    first=(struct node *)malloc(sizeof(struct node *));
    second = (struct node *)malloc(sizeof(struct node *));
    if(first==NULL || second == NULL){
        printf("Insufficient memory");
        exit(0);
    }

    printf("\nenter the elements of first linked list : \n");
    first=create();

    printf("\nenter the elements of second linked list : \n");
    second=create();

    printf("\nFirst Linked List : \n");
    display(first);

    printf("\nSecond Linked List : \n");
    display(second);


    merge(first,second);
    
    printf("\nMerged Linked List : \n");
    display(first);
}
