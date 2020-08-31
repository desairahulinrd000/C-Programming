#include<stdio.h>
#include<stdlib.h>
int length=0;
struct node{
	int data;
	struct node *link;
};
void push(int);
void pop(void);
void traverse(void);
struct node *top=NULL;
main()
{
	printf("\n\n------------------------------Dynamic Stack Operations-------------------------------\n");
	int ch;
	int item;
	while(1)
	{
		
	
	printf("1)Push\n");
	printf("2)POP\n");
	printf("3)Traverse\n");
	printf("4)Quit\n");
	printf("Stack Elements=%d\n",length);
	printf("Enter Your Choice:-");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter The element:-");
			scanf("%d",&item);
			push(item);
			break;
		case 2:
			pop();
			break;
		case 3:
			traverse();
			break;
		case 4:
			printf("Completed Dynamic Stack Operation's\n");
			return;
			break;
		default :
			printf("Invalid Choice please enter the correct choice\n");
			break;	
	}	
}
}
int is_empty(void)
{
	if(top==NULL){
		return 1;
	}
	else 
	{
		return 0;
	}
}
void push(int n)
{
	struct node *temp;
	temp=malloc(sizeof(struct  node));
	temp->data=n;
	temp->link=top;
	top=temp;
	printf("Pushed %d at %d\n",n,length+1);
	length++;
}
void pop(void)
{
	if(is_empty())
	{
		printf("Stack is Empty\n");	
	}
	else
	{
		struct node *temp;
		temp=top;
		top=top->link;
		printf("Popped %d at %d\n",temp->data,length);
		free(temp);	
		length--;
	}
}
void traverse(void)
{
	if(is_empty())
	{
		printf("Stack is Empty");	
	}
	else
	{
	struct node *temp;
	temp=top;
	int a=length;
	while(temp!=NULL)
	{
		printf("Element %d at %d\n",temp->data,a--);
		temp=temp->link;	
	}
}
	
}
