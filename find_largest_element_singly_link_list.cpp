//write a 'C' program to find largest element of singly linked list...///***

#include<stdio.h>
#include<stdlib.h>

// structure
struct node{
	int info;
	struct node *next;
};
struct node *list = NULL;

////function of  insert front///singly link list ,,,,....**

void insertf(int x)
{
	struct node{
	int info;
	struct node *next;
};
struct node *list = NULL;
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	p->info = x;
	p->next = NULL;
	
	if(list == NULL){
		list = p;
	}
	else{
		p->next = list;
		list = p;
	}
}
}


//Display...............******************************************

void display()
{
	struct node *p;
	
	if (list == NULL){
		printf("list is empty");
	}
	else{
		for(p = list;p!=NULL;p=p->next){
			printf("%d ->",p->info);
		}
	}
}


//largest number.........****

void function(){
	struct node *p=list;
	int flag=0;
	
	
	while(p!=NULL){
		if(p->data->flag){
			flag=p->data;
		}
		p=p->next;
			
	}
	printf("largest numberr in %d",flag);
			
}

////////////////main()..........////////////////****************

main()
{
	
	int x , ch ;
	int pos,data;
	
	while(1){
		printf("1. insert of front \n");
		printf("2. display \n");
		printf("3. function");
		scanf("%d",&ch);
		
		switch(ch){
			case 1 : printf("enter the value \n");
			scanf("%d",&x);
			insertf(x);
			break;
			
			case 2 : display();
			break;
			
			case 3 : function();
			break;
		}
	}
}


