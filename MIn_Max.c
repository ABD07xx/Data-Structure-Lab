#include<stdio.h>
#include<stdlib.h>
void create();
void view();
void min();
void max();
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
Min();
Max();
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
 
Min(){
 	int min;
 	struct node *ptr=head;
 	ptr = head->data;
 	while(ptr!=NULL){
	 
 	if(min>ptr->data){	 
	 min = ptr->data; 
                      }
    else{
    	printf("");
    	}
   {
             ptr= ptr->next;    
   }
        printf("Minimum value node in the list: %d\n", min);  
    }	
 }

void Max(){
 	int max;
 	struct node *ptr=head;
 	ptr = head->data;
 	while(ptr!=NULL){
	 
 	if(max>ptr->data){	 
	 max = ptr->data; 
                      }
     {
             ptr= ptr->next;    
     }
        printf("Maximum value node in the list: %d\n", max);  
                    }	
 	
 }
