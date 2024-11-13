// write program doubly link list....***



//1...Insertion front of doubly link list....***

struct node {
	struct node * prev;
	int data ;
	struct node * next ;
};
struct node * list;
void insertf(x){
	int struct node * p;
	p = (struct node*)malloc(sizeof(structnode))
	p->prev = NULL;
	p->data = x;
	p->next = NULL;
	if(list == NULL){
		p=list;
	}
	else{
		p->next=list;
		list->prev=p;
		list=p;
	}
}

/////2...insert on end in doubly link list..........*****

insertEnd(x){
	int struct node *p , *temp ;
	p = (struct node*)malloc(sizeof(structnode));
	p->prev = NULL;
	p->data = x;
	p->next = NULL;
	if(list == NULL){
		p=list;
	}
	else{
		temp=list;
		while(temp->next!=NULL){
			temp=temp->next;}
	
		temp->next=p;
		p=prev=temp;
	}
}

//3...deletefront.....doubly link list...............********************

void deletefront()
{
	struct node * p;
	if(list==NULL){
		printf("No.element to delete");
	}
	else{
		p=list;
		list=p->next;
		p->next=NULL;
		list->prev=NULL;
		free(p);
	}
}

////4...deleteEnd in doubly link list//..***********************************

void deleteEnd()
{
	struct node * p;
	if (list == NULL)
	{
		printf("NO element to delete");
	}
	else{
		p=list;
		while(p->next!=NULL)
		{
			p=p->next;
		}
	p->prev=NULL;
	free(p);
	}
}

//////5... insert in middle (doubly link list)/././/./././././.**********

void insert at pos(x)
{
	struct node * p,* temp;
	p=(struct node)malloc(sizeof(structnode))
	p->prev=NULL;
	p->next=NULL;
	p->data=x;
	if(list==NULL)
	{
		printf("The list is empty");
	}
	else{
		temp=list;
		for(i=0;i<pos=1;i++)
		{
			temp=temp->next;
			if(temp==NULL)
			{
				printf("can't insert");
			}
		}
	}
	p->next=temp->next;
	p->prev=temp;
	temp->next->prev=p;
	temp->next=p;
}

//6...delete between in doubly link list.....//////////********************************

void deleteinbet(int pos)
{
	struct node *p,*q;
	if(list==NULL)
	{
		exit(1);
	}
	if(list->next==NULL)
	{
		free(list);
		list=NULL;
	}
	else{
			if (pos==1)
			{
				p=list ;
				list=p->next;
				p->next=NULL;
				list->prev=NULL;
				free(p);
			}
			else{
				q=list;
				for(i=0;i<pos-1;i++)
				{
					q=q->next;
					if(q->next==NULL)
					{
						printf("can't delete");
						exit(1);
					}
				}
				p=q->next;
				q->next=p->next;
				p->next->prev=q;
				p->next=NULL;
				p->prev=NULL;
				free(p);
			}
	}
}





// int main................*****************************////////////////////\\\\\\\\\\\*******

main()
{
	int x , ch ;
	int pos,data;
	
	while(1){
		printf("1. insert of front \n");
		printf("2. insertEnd \n");
		printf("3. deletefront \n");
		printf("4. deleteEnd \n");
		printf("5. insert in middle \n");
		printf("6. delete in bet \n");
		printf("7. delete \n");
		printf("8. count number of node in link list \n");
		scanf("%d",&ch);
		
		switch(ch){
			case 1 : printf("enter the value \n");
			scanf("%d",&x);
			insertf(x);
			break;
			
			case 2 : printf("enter the value \n");
			scanf("%d",&x);
			insertEnd(x);
			break;
			
			case 3 : deletefront();
			break;
			
			case 4 : deleteEnd();
			break;
			
			case 5 : printf("enter the position");
			scanf("%d",&x);
			insertinmiddle(pos,x);
			break;
			
			case 6 : deleteinbet(int pos);
			break;
			
			case 7 : printf("enter the position to delete - ");
						scanf("%d",&pos);
						del(pos);
			break;
			
			case 8 : count();
			break;
		}
	}
}



