#include<stdio.h>
void swap(int x,int y)
{
	x=x+y;
	y=x-y;
	x=x-y;
	printf("Numbers after swapping are\nx=%d\ny=%d\n",x,y);
}
main()
{
	int a,b;
	printf("Enter two number\n");
	scanf("%d%d",&a,&b);
	printf("Numbers before swapping are\nx=%d\ny=%d\n",a,b);
	swap(a,b);
	printf("Numbers after swapping in main are\nx=%d\ny=%d\n",a,b);
	return 0;
}

