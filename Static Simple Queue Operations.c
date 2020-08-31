#include<stdio.h>
int front=0,rear=0;
#define SIZE 10
int queue[SIZE];
void insert(int);
int is_empty(void);
int is_full(void);
void delete_ele(void);
void traverse(void);

main()
{
	int choice,ele;
	printf("Queue size=%d\n",SIZE);
	printf("--------------------Queue Operations---------------------------\n");
	while(1)
	{
		
		printf("1)Insert\n");
		printf("2)Delete\n");
		printf("3)Traverse\n");
		printf("4)Quit\n");
		printf("Queue elements=%d\n",rear);
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				if(is_full())
				{
					printf("Queue is full\n");
				}
				else
				{
					printf("Enter the element:");
					scanf("%d",&ele);
					insert(ele);
				}
				break;
			case 2:
				if(is_empty())
				{
					printf("Queue is empty\n");
				}
				else
				{
					delete_ele();
				}
				break;
			case 3:
				traverse();
				break;
			case 4:
				return 0;
				break;
			default:
				printf("Invalid Operation\n");
		}
	}
}
int is_full(void)
{
	if(rear==SIZE)
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
	if(rear==front)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void insert(int ele1)
{
	queue[rear]=ele1;
	printf("Inserted %d at %d\n",ele1,rear+1);
	rear++;
}
void delete_ele(void)
{
	int i=0;
	printf("Deleted %d at %d\n",queue[front],front+1);
	while(i<rear)
	{
		queue[i]=queue[i+1];
		i++;
	}
	rear--;
}
void traverse(void)
{
	if(is_empty())
	{
		printf("Queue is empty\n");
	}
	else
	{
		int i=0;
		while(i<rear)
		{
			printf("Element %d at %d\n",queue[i],i+1);
			i++;
		}
	}
}
