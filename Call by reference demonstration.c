#include<stdio.h>
int change(int *a);
main()
{
	int x;
	printf("Enter any number:");
	scanf("%d",&x);
	printf("Before function x=%d\n",x);
	change(&x);
	printf("After Function x=%d\n",x);
}
int change(int *a)
{
	printf("Before function call a=%d\n",*a);
	(*a)+=10;
	printf("After function call a=%d\n",*a);
}

