#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void create();
void view();
void freq();
void insert_beg();
void insert_mid();
void delete_node();
 struct node{
 	int data;
 	struct node *next;
 };
 struct node *head=NULL,*tail=NULL;
 int main(){
	int choice;
	while(1){
	
	printf("Press 1 to create a Linked List: \nPress 2 to View the list: \nPress 3 to check the frequency of an element: \nPress 4 to insert at beginning: \nPress 5 to insert after a node: \nPress 6 to Delete: \n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			create();
			break;
		
		case 2: 
			view();
			break;
		
		case 3:
			freq();
			break;
		case 4: 
		    insert_beg();
		    break;
		case 5:
		    insert_mid();
			break;    
		case 6:
			delete_node();
			break;
		default: 
			printf("Wrong Option");		
		return 0;
}
	}
}
void create(){
	int i,j;
	printf("Enter the size of LinkedList: ");
	scanf("%d",&j);
	for(i=0;i<j;i++){
		struct node *temp = (struct node *)malloc(sizeof(struct node));
		printf("Enter data: ");
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(i==0){
			head=temp;
			tail=temp;
		}
		else{
			tail->next=temp;
			tail=temp;
		}
	}
}
void view(){
	struct node *trav;
	trav=head;
	while(trav != NULL){
		printf("%d\n",trav->data);
		trav=trav->next;
	}
	printf("\n");
}
void freq(){
	int element,count;
	struct node *temp;
	temp=head;
	printf("Enter the data whose freq you want to check: \n");
	scanf("%d",&element);
	while(temp != NULL){
		if(temp->data==element){
			count++;
		}
		temp=temp->next;
	}
	printf("Frequency of %d is %d\n\n",element,count);
}
void insert_beg(){
	struct node *t = (struct node *)malloc(sizeof(struct node));
	int data;
	printf("Enter the data: ");
	scanf("%d",&t->data);
	t->next=head;
	head=t;
      	
}
void insert_mid(){
	int i,pos;
	struct node *t=head;
	printf("Enter the Node after which you want to Enter Data: ");
	scanf("%d",&pos);
	struct node *temp=malloc(sizeof(struct node));
	printf("Enter Data: ");
	scanf("%d",&temp->data);
	for(i=0;i<pos-1;i++){
		t=t->next;
	}
	temp->next=t->next;
	t->next=temp;
}
void delete_node(){
	int i,pos,x;
	struct node *temp,*q;
	q=NULL;
	temp=head;
	printf("Enter the position of node: ");
    scanf("%d",&pos);
    for(i=0;i<pos-1;i++){
    	q=temp;
    	temp=temp->next;
	}
    q->next=temp->next;
     
}
