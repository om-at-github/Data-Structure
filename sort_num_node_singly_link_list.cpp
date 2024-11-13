//write a program to sort the number of nodes of singly linked list.

#include<stdio.h>
#include<conio.h>

struct node{
	int data;
	struct node * next;
};

int main(){
	
}

void main(){
	int n ,i ,var ;
	struct node * head = NULL ;
	struct node * temp , * newnode, * node;
	clrsc();
	printf("enter the number: \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		newnode = (struct node *)malloc(sizeof(struct node));
		if(newnode==NULL)
		{
			printf("memory allocation failed \n");
		}
		else{
			printf("enter node data");
			scanf("%d",&newnode->data);
			newnode->next=NULL;
			if(head==NULL){
				head=temp=newnode;
			}
			else{
				temp->next=newnode;
				temp=newnode;
			}
		}
	}
	temp=node=head;
	
	while(node->next!=NULL)
	{
		temp=node->next;
		while(temp!=NULL){
			if(node->data>temp->data){
				var=node->data;
				node->data=temp->data;
				temp->data=var;
			}
			temp=temp->next;
		}
		node=node->next;
	}
	temp=head;
	if(temp==NULL){
		printf("\n LIST IS EMPTY!! \n");
	}
	else{
		printf("\n");
		while(temp!=NULL){
			printf("%d",temp->data);
			temp=temp->next;
		}
	}
}
