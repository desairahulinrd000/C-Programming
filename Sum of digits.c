#include<stdio.h>
main()
{
	signed long int num,rem=0,sum=0,temp;
	printf("Enter the number whose sum of digits have to be calculated:");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+rem;
		temp=temp/10;
	}
	printf("Sum of %d=%d",num,sum);
}
