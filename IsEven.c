#include<stdio.h>
#include<stdlib.h>
void create();
void view();
struct node   
{  
    int data;  
    struct node *next;   
};
struct node*head=NULL,*tail=NULL;
int main()
{
create();
view();
IsEven();

}
void create()
{
	int i,s;
	printf("Please enter the number of nodes you want to create: \n");
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
		struct node* temp=(struct node *)malloc(sizeof(struct node));
		printf("Enter your data: ");
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
 void view()
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
IsEven(){
	printf("Even Numbers Are: \n");
 	struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
 	if(ptr->data % 2 == 0){
 		printf("%d\t",ptr->data);
 	}
 	else{
 		printf(" ");
	 }
 		ptr=ptr->next;
	
	}
	 printf("\n");
	
 	
 	
 }
