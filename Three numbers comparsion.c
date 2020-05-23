#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter Fisrt Number:");
	scanf("%d",&a);
	printf("Enter Second Number:");
	scanf("%d",&b);
	printf("Enter Third Number:");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("Fisrt Number is Larger=%d\n",a);
	}
	else if(b>c && b>a)
	{
		printf("Second Number is Larger=%d\n",b);
	}
	else if(c>a && c>b)
	{
		printf("Third Number is Larger=%d\n",c);
	}
	if(a<b && a<c)
	{
		printf("First Number is smaller=%d\n",a);
	}
	else if(b<a && b<c)
	{
		printf("Second Number is smaller=%d\n",b);
	}
		else if(c<b && c<a)
		printf("Third Number is smaller=%d\n",c);
    if(a==b && b==c)
    {
    	printf("All are equal\n");
    }
    else if(a==b)
    {
    	printf("First and Second Number are equal\n");
    }
    else if(b==c)
    {
    	printf("Second and third number are equal\n");
    }
}
		
