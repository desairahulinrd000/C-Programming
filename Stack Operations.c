#include<stdio.h>
#define SIZE 10
int stack[SIZE];
void push(int);
int pop(void);
int peek(void);
int is_empty(void);
int is_full(void);
int top=-1;
main()
{
	int opp,push_ele,pop_ele,peek_ele;
	printf("----------------Operations on stack-----------------\n\n");
	while(1)
	{
		printf("1.Push\n\n");
		printf("2.Pop\n\n");
		printf("3.Peek\n\n");
		printf("4.Traverse\n\n");
		printf("5.Quit\n\n");
		printf("-------------------------------------------------------\n");
		printf("Enter the operation to be performed:");
		scanf("%d",&opp);
		switch(opp)
		{
			case 1:
				if(is_full())
				{
					printf("Stack is full\n");
				}
				else
				{
					printf("Enter the element to be pushed:");
					scanf("%d",&push_ele);
					push(push_ele);
				}	
				break;
			case 2:
				if(is_empty())
				{
					printf("Stack is empty\n");
				}
				else
				{
					pop_ele=pop();
					printf("Popped element=%d at %d\n",pop_ele,top+2);
				}
				break;
			case 3:
				peek();
				
				break;
			case 4:
				traverse();
				break;
			case 5:
				return 0;
			default:
				printf("Invalid Input\n");
				break;	
		}
	}
}
int is_full(void)
{
	if(top==SIZE-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int is_empty(void)
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push(int ele)
{
	top++;
	stack[top]=ele;
	printf("Successfully Pushed %d at %d \n",ele,top+1);
}
int pop(void)
{
	return stack[top--];
}
int peek(void)
{
	if(is_empty())
	{
		printf("Stack is empty\n");
	}
	else
	{
	printf("Peeked Element=%d at %d\n",stack[top],top+1);
	}
}
traverse(void)
{
	if(is_empty())
	{
		printf("Stack is empty\n");
	}
	else
	{
	int i;
	for(i=0;i<=top;i++)
	{
		printf("Element %d=%d\n",i+1,stack[i]);
	}
}
}

