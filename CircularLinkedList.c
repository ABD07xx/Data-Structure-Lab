#include<stdio.h>
#include<stdlib.h>
void create();
void view();
struct node   
{  
    int data;  
    struct node *next;   
};
struct node *head=NULL, *tail=NULL;
int main()
{
	int cha;
	while(1)
	{
		printf("Press 1 to create or 2 to view\n");
		printf("Please enter your choice");
		scanf("%i",&cha);
		switch(cha)
		{
			case 1:create();
			break;
			case 2:view();
			break;
			default :printf("Please select the correct option");
			return 0;
		}
	}

}
void create(){
	int i,n;
	printf("Enter the number of nodes you want to create: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		struct node* temp = (struct node*)malloc(sizeof(struct node));
		printf("Enter your data: ");
		scanf("%d",&temp->data);
        if(head==NULL){
        	head=temp;
        	tail=temp;
        	tail->next=head;
		}	
		else{
			tail->next=temp;
		    tail=temp;
		    tail->next=head;
		}
	}
}

void view(){
		struct node*t;
 	t=head;
 	while(t->next!=head)
 	{
 		printf("%d\t",t->data);
 		t=t->next;
	}
	printf("\n");
}
