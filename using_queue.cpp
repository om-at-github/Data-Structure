// using queue.

#include<stdio.h>
void enqueue();
void dequeue();
void pick();
int front=-1;
int rear=-1;
int queue[50];
int n,x,value;

main()
{
	printf("enter the size of queue");
	scanf("%d",&n);
	
 while(1)
 {
 	printf("/n 1. enqueue");
 	printf("/n 2. dequeue");
 	printf("/n 3. pick");
 	scanf("/n %d",&x);
 	
 	switch(x){
 		case 1 : enqueue();
 		break;
 		case 2 : dequeue();
 		break;
 		case 3 : pick();
 		break;
	 }
 }
 
void enqueue();
{
	if (rear == n-1){
		printf("queue is full");
	}
	else{
		if(front == -1){
			front++;
		}
	
	printf("enter the value");
	scanf("%d",value);
	
	rear++;
	queue[rear]=value;
	}
}

void dequeue();
{
	if (front == -1 || front > rear){
		printf("queue underflow");
	}
	else{
		front++;
	}
}

void pick();
{
	if (rear == -1 || front > rear){
		printf("/n element to display ");
	}
	else{
		printf("%d",queue[rear]);
	}
}
}
