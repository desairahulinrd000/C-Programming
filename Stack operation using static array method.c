//Stack Operations using static array
#include<stdio.h>
#define CAPACITY 5
int stack[CAPACITY],top=-1; 
void push(int);
int pop(void);
int isFull(void);
int isEmpty(void);
void peek(void);
void traverse(void);
main()
{
	int choice,item;
	while(1)
	{
		printf("1.Push\n\n");
		printf("2.Pop\n\n");
		printf("3.Peek\n\n");
		printf("4.Traverse\n\n");
		printf("5.Quit\n\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\n\nEnter the element:");
				scanf("%d",&item);
				push(item);
				break;
			case 2:
				item=pop();
				if(item==0)
				{
					printf("\n\nStack is underflow\n\n");
				}
				else
				{
				printf("\n\nPopped item=%d\n",item);
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
			break;
			default:
				printf("Invalid Input\n");
				break;
		}
	}	
}
void push(int ele)
{
	if(isFull())
	{
		printf("\n\nStack is overflow\n\n");	
	}
	else
	{
		top++;
		stack[top]=ele;
		printf("\n\nPushed %d\n\n",ele);
	}
}
int isFull()
{
	if(top==CAPACITY-1)
	{
		return 1;	
	}
	else
	{
		return 0;
	}
}
int pop()
{
	if(isEmpty())
	{
		return 0;
	}
	else
	{
		return stack[top--];
	}
}
int isEmpty()
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
void peek()
{
	if(isEmpty())
	{
		printf("\n\nStack is empty\n\n");
	}
	else
	{
		printf("\n\tPeek element=%d\n\n",stack[top]);
	}
} 
void traverse()
{
	if(isEmpty())
	{
		printf("\n\nStack is empty\n\n");
	}
	else
	{
		int i;
		printf("Stack elements are:\n");
		for(i=0;i<=top;i++)
		{
			printf("\t%d\n\n",stack[i]);
		}
	}
}
