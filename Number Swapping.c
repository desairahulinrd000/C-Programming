#include<stdio.h>
void swap(int x,int y)
{
	int temp; 
	printf("Numbers before swapping are\nx=%d\ny=%d\n",x,y);
	temp=x;
	x=y;
	y=temp; printf("Numbers after swapping are\nx=%d\ny=%d\n",x,y);
}
main()
{
	int a,b;
	printf("Enter any two number:");
	scanf("%d%d",&a,&b);
	swap(a,b);
	return 0;
}

