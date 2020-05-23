#include<stdio.h>
main()
{
	unsigned long int num;
	printf("Enter the range:");
	scanf("%d",&num);
	printf("Numbers using For loop\n");
	int i;
	for(i=1;i<=num;i++)
	{
		printf("%d\t",i);
	}
	printf("\nNumbers using While loop\n");
	i=1;
	while(i<=num)
	{
		printf("%d\t",i);
		i++;
	}
	printf("\nNumbers using Do While loop\n");
	i=1;
	do
	{
		printf("%d\t",i);
		i++;
	}
	while(i<=num);
	return 0;
}
	
