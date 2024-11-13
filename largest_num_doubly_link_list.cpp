//write a 'C' program to find largest element of doubly linked list...///***

#include<stdio.h>
#include<stdlib.h>

/////structure............**************

struct node{
	int data;
	struct node *next;
	struct node *prev;
};

struct node *list = NULL;


////function of  insert END doubly ink list ***..///..***

void insertEnd(int x)
{
	struct node *p ,*temp;
	p=(struct node*)malloc(sizeof(struct node));
	p->prev=NULL;
	p->data=x;
	p->next=NULL;
	if(list==NULL){
		p=list;
	}
	else{
		temp=list;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=p;
		p->prev=temp;
	}
}

///Display..............*************

void display()
{
	struct node *p;
	
	if (list == NULL){
		printf("list is empty");
	}
	else{
		for(p = list;p!=NULL;p=p->next){
			printf("%d ->",p->data);
		}
	}
}

//largest number.........****

void function(){
	struct node *p=list;
	int flag=0;
	
	
	while(p!=NULL){
		if(p->data>flag){
			flag=p->data;
			flag=p->prev->data;
		}
		p=p->next;
		p=p->prev->next;
			
	}
	printf("largest num=%d",flag);
			
}


main()
{
	
	int x , ch ;
	int pos,data;
	
	while(1){
		printf("1. insert End \n");
		printf("2. display \n");
		printf("3.function\n");
		scanf("%d",&ch);
		
		switch(ch){
			case 1 : printf("enter the value \n");
			scanf("%d",&x);
			insertEnd(x);
			break;
			
			case 2 : display();
			break;
			
			case 3 : function();
			break;
		}
	}
}

