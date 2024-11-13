// stack using array.

#include<stdio.h>
int top =- 1,a[10],n,x;
void push();
void pick();
void pop();
main()
{
	printf("enter the size of stack:");
	scanf("%d",&n);
	
	while(1){
		printf("\n1 .push");
		printf("\n2 .pop");
		printf("\n3 .pick");
		printf("\nenter the your choice:");
		scanf("%d",&x);
	
	
	switch(x){
		case 1 : push();
		break;
		case 2 : pop();
		break;
		case 3 : pick();
		break;
		default : printf("wrong input");
	}	
	
}
}

void push(){
	int val;
	
		if(n==top+1){
			printf("stack is full");
		}
		else{
			printf("Enter the number to push on stack - ");
			scanf("%d",&val);
			
			top++;
			a[top]=val;
		}
}
	
	void pop(){
		if(top==-1){
			printf("stack is empty");
		}
		else{
			top--;
		}
}
	
void pick(){
		if(top==-1){
			printf("the stack is empty");
		}
		else{
			printf("top element=%d",a[top]);
		}
}
