//Cricular link list :-

#include<stdio.h>
#include<stdlib.h>

// struct
struct node{
	int data;
	struct node *next;
};
struct node *list = NULL;

//insertion front//Criculer link list.1111111111111111111111111;

void insertfront(int x)
{
	struct node *p,*temp;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=x;
	p->next=NULL;
	
	if(list==NULL){
		list=p;
		list->next=list;
	}
	else{
		temp=list;
		while(temp->next!=list){
			temp=temp->next;
		}
		
		p->next=list;
		temp->next=list;
	}
}

//display...2222222222222222222
void display()
{
	struct node *p;
	
	if (list == NULL){
		printf("list is empty");
	}
	else{
		;
		while(p->next != list){
			printf("%d ->",p->data);
		}
	}
}

//Insert End// Cricular link list...........3333333333333333

void insertEnd(int x)
{
	struct node *p,*temp;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=x;
	p->next=NULL;
	
	if(list==NULL){
		list=p;
		list->next=list;
	}
	else{
		temp=list;
		while(temp->next!=list){
			temp=temp->next;
		}
		temp->next=p;
		p->next=list;
	}
}

//insertion front//Cricular link list;4444444444444

void deletefront()
{
	struct node *p,*temp;
	p=(struct node*)malloc(sizeof(struct node));
	
	if(list==NULL){
		printf("Nothing to delete");
	}
	else{
		list->next->next=temp;
		temp->next=p;
		p->next=list;
		p=list;
		list->next=list;
		free(p);
	}
}

//deleteEnd()//Cricular link list;555555555555555555555

void deleteEnd()
{
	struct node *temp,*p;
	
	if(list==NULL){
		printf("The list is empty");
	}
	else if(list->next==list){
		temp=list;
		free(temp);
		list=NULL;
	}
	else{
		temp=list;
		p=list;
		
		while(p->next->next=list){
			p=p->next;
		}
			
			temp=p->next;
			p->next=list;
			free(temp);
	}
}

//insert in middle/////cricular link list....66666666666666

void insertinmiddle(int pos,int x)
{
	struct node *p, *temp;
	int i;
	p=(struct node *)malloc(sizeof(struct node));
	p->data=x;
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

//delete in between///Cricular link list;7777777777777777777777;

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

//delete/////Cricular link list...8888888888888888888
//deletion any node from between in link list.....888888888888888888888

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


//main()//

main()
{
	int x , ch ;
	int pos,data;
	
	while(1){
		printf("1. insert front \n");
		printf("2. display \n");
		printf("3. insertEnd \n");
		printf("4. deletefront \n");
		printf("5. deleteEnd \n");
		printf("6. insert in middle \n");
		printf("7. delete in bet \n");
		printf("8. delete \n");
		scanf("%d",&ch);
		
		switch(ch){
			case 1 : printf("enter the value \n");
			scanf("%d",&x);
			insert
			front(x);
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
			
		}
	}
}
