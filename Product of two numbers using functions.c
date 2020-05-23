#include<stdio.h>
int mul(int x,int y);
main()
{
	int x,y,c;
	printf("Enter the two numbers=\n");
	scanf("%d%d",&x,&y);
	c=mul(x,y);
	printf("Product:%d",c);
}
int mul(int x,int y)
{
	int z;
	z=x*y;

	return z;
}
