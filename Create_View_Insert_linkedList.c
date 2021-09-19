#include<stdio.h>
#include<stdlib.h>
create();
view();
struct node   
{  
    int data;  
    struct node *next;   
};
struct node*head=NULL,*tail=NULL;
int main()
{
	int ch;
	while(1)
	{
		printf("Press 1 to  create \nPress 2 to view");
		printf("\nPlease enter your choice ");
		scanf("%i",&ch);
		switch(ch)
		{
			case 1:create();
			break;
			case 2:view();
			break;
			default :printf("you have entered the wrong choice try again!");
			return 0;
		}
	}

}
create()
{
	int n,i;
	printf("please enter the number of nodes which you want to create ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		struct node* temp=(struct node *)malloc(sizeof(struct node));
		printf("enter your data ");
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(i==0)
		{
			head=temp;
			tail=temp;
		}
		else 
		{
			tail->next=temp;
			tail=temp;
		}
	}
 } 

 view()
 {
 	struct node*t;
 	t=head;
 	while(t!=NULL)
 	{
 		printf("%d\t",t->data);
 		t=t->next;
	}
	printf("\n");
 }
