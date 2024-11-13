//* Program to evaluate a postfix expression. *//

#include<stdio.h>
#include<math.h>
#define MAX 30

struct stack
{
	int data [MAX];
	int top;
};

//* initialization of stack *//
void inits(struct stack * s)
{
	s->top=-1;
}

//* insert element onto the stack *//
void push(struct stack * s,int num)
{
	s->data[++s->top]=num;
}

//* delete element from the stack *//
int pop (struct stack * s)
{
	return (s->data[s->top--]);
}

//* To evaluate postfix expression *//
void evaluate (struct stack * s,char op,int num1 ,int num2)
{
	int ans;
	switch(op)
	{
		case '+' : ans = num1+num2;
		break;
		
		case '-' : ans = num1-num2;
		break;
		
		case '*' : ans = num1 * num2;
		break;
		
		case '/' : ans = num1 / num2;
		break;
		
		case '^' :
			
		case '$' : ans = pow(num1,num2);
		break;	
	}
	push(s,ans);
}

//* Function to check whether the input character is operator or not */
int gettype(char ch)
{
	switch(ch){
		case '+':
		case '-':
		case '*':
		case '/':
		case '$':
		case '^':return 1;
		defult : return 0;	
	}
}

//*  MAIN   *//
int main()
{
	char postfix [MAX];
	int num1 ,num2,element ,i ,ans;
	struct stack s;
	inits(&s);
	printf("\n Enter postfix expression");
	scanf("%s",postfix);
	
	for(i=0;postfix[i]!='\0';i++)
	{
		switch(gettype(postfix[i]))
		{
			case 0 :push(&s,postfix[i]='0');
			break;
			
			case 1 :num2=pop(&s);
					num1=pop(&s);
					evaluate(&s, postfix[i],num1,num2);
		}
	}
	printf("The answer of %s=%d",postfix,s.data[s.top]);
}
