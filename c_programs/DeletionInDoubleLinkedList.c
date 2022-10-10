#include<stdio.h>
struct node
{
    int data;
    struct node *llink;
    struct node *rlink;
};
struct node *ptr,*head,*pr;
int n,i,a;
int main()
{
	head=(struct node*)malloc(sizeof(struct node*));
	pr=(struct node*)malloc(sizeof(struct node*));
	ptr=(struct node*)malloc(sizeof(struct node*));
	printf ("enter number of elements:");
    scanf("%d",&n);
    pr=head;
    printf ("enter elements:\n");
    for(i=0;i<n;i++)
    {
      ptr=insert(pr); 
      pr=ptr;
    }
    printf("enter the element to be deleted ");
    scanf("%d",&a);
    delete(head,a);
    display(head);
    return 0;
}
void display(struct node *head)
{
  struct node *x;	
  printf("the list is :\n");
  x=head->rlink;
  while(x!=NULL)
  {
    printf("%d\n",x->data);
    x=x->rlink;
  }
}

	void delete(struct node *head,int n)
{
	struct node *n1;
	n1=head;
	while(n1->rlink!=NULL)
	{
	if(n1->data==n)
	{
		n1->rlink->llink=n1->llink;
		n1->llink->rlink=n1->rlink;
		break;
    }
	n1=n1->rlink;
    }
	
}
int insert(struct node *r)
{
	struct node *h;
	h=(struct node *)malloc(sizeof(struct node *));
	scanf("%d",&h->data);
	h->llink=r;
	h->rlink=r->rlink;
	r->rlink=h;
	return r->rlink;
}


