//Singly link list...*/***
#include<stdio.h>
#include<stdlib.h>

// structre
struct node{
	int info[];
	struct node *next;
};
struct node *list = NULL;

//insert at front
void insertf (int x)
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

//display...
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

//insertion of a end of the node:-In this function data inserted inn end of the node...
void insertEnd(int x)
{
	struct node * p, * temp;
	p=(struct node*)malloc(sizeof (struct node));
	
	p->info = x;
	p->next = NULL;
	
	if(list == NULL){
		p = list;
	}
	else{
		temp == p;
		while(temp->next!=NULL)
			{temp = temp -> next;}
		p = temp -> next;
		printf("node inserted at end");	
	}
}

//deletetion of front...
void deletefront()
{
	struct node * p ;
	
	if(list == NULL){
		printf("nothing to delete");
	}
	else{
		p = list;
		list = p->next;
		free(p);
		printf("element deleted");
	}
}

//deletetion of  end...
void deleteEnd()
{
	struct node * p;
	if (list == NULL){
		printf("nothing to delete");
	}
	else if (list->next == NULL){
		p = list;
		list = NULL;
		free(p);	
	}
	else{
		p = list;
		while(p->next!=NULL)
		{	
		p = p->next;
		}
	}
}

//insert middle...

void insertinmiddle(int pos,int data)
{
	struct node *p, *temp;
	int i;
	p=(struct node *)malloc(sizeof(struct node));
	p->info=data;
	p->next=NULL;
	
	if(list ==NULL)
	{
		p=list;
	}
	else
	{
		temp=list;
		for(i=2;i<=pos-1;i++)
		{
			temp=temp->next;
			if(temp == NULL)
			{
				break;
			}
		}
	}
	if(temp!=NULL)
	{
		temp->next=p;
		p->next=temp->next->next;
	}
}

// delete in bet...

void deleteinbet()
{
	struct node *p ,*q ;
	int i,pos;
	printf("enter a position to delete");
	scanf("%d",&pos);
	
	if (list==NULL)
	{
		printf("list  is empty");
	}
	else{
		p=list;
		q=list;
		for(i=2;i<=pos;i++)
		{
			q=p;
			p=p->next;
			if(p==NULL){
				break;
			}
		}
		if(p!=NULL){
			if(p==list){
				list=list->next;
			}
			q->next=p->next;
			p->next=NULL;
			free(p);
		}
		else{
			printf("invalid position");
		}
	}
}

//deletion any node from between in link list.....

void del(int pos)
{
	struct node *p,*q;
	int i;
	if(list==NULL){
		printf("the list is empty");
		exit(0);
	}
	if(list->next==NULL){
		free(list);
		list=NULL;
	}
	else{
		if(pos==1){
			p=list;
			list=list->next;
			p->next=NULL;
			free(p);
		}
		else{
			for(i=1,q=list;i<pos-1 && q->next!=NULL;i++,q=p->next){
				if(q->next!=NULL){
					p=q->next;
					q->next=p->next;
					p->next=NULL;
					free(p);
				}
			}
		}
	}
}

//main//

main()
{
	int x , ch ;
	int pos,data;
	
	while(1){
		printf("1. insert of front \n");
		printf("2. display \n");
		printf("3. insertEnd \n");
		printf("4. deletefront \n");
		printf("5. deleteEnd \n");
		printf("6. insert in middle \n");
		printf("7. delete in bet \n");
		printf("8. delete \n");
		printf("9. count number of node in link list \n");
		scanf("%d",&ch);
		
		switch(ch){
			case 1 : printf("enter the value \n");
			scanf("%d",&x);
			insertf(x);
			break;
			
			case 2 : display();
			break;
			
			case 3 : printf("enter the value \n");
			scanf("%d",&x);
			insertEnd(x);
			break;
			
			case 4 : deletefront();
			break;
			
			case 5 : deleteEnd();
			break;
			
			case 6 : printf("enter the position");
			scanf("%d",&data);
			insertinmiddle(pos,data);
			break;
			
			case 7 : deleteinbet();
			break;
			
			case 8 : printf("enter the position to delete - ");
						scanf("%d",&pos);
						del(pos);
			break;
			
			case 9 : count();
			break;
		}
	}
}


