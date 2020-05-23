#include<stdio.h>
main()
{
	long int a,b;
	printf("Enter First number:");
	scanf("%d",&a);
	printf("Enter Second number:");
	scanf("%d",&b);
	long int sum,diff,pro;
	double div;
	sum=a+b;
	pro=a*b;
	diff=a-b;

	div=float(a)/float(b);
	printf("|-----------------------------------\n");
	printf("|     Operation     |     Result    \n");
	printf("|-----------------------------------\n");
	printf("|     Addition      |        %d      \n",sum);
	printf("|-----------------------------------\n");
	printf("|    Subtraction    |        %d      \n",diff);
	printf("|-----------------------------------\n");
	printf("|      Product      |        %d      \n",pro);
	printf("|-----------------------------------\n");
	printf("|     Division      |     %.2f      \n",div);
	printf("|-----------------------------------\n");
	if(a!=b)
	{
		if(a<b) printf("\tSecond Number is Larger\n");
		else printf("\tFirst Number is Larger\n");
	}
	else printf("Both are equal\n");
	a++;
	b++;
	printf("\tIncremented first number=%d\n",a);
	printf("\tIncremented Second number=%d\n",b);
	return 0;
}
