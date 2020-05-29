#include<stdio.h>
main()
{
	float a,b,sum,diff,pro,div;
	printf("Enter First number:");
	scanf("%f",&a);
	printf("Enter Second number:");
	scanf("%f",&b);
	sum=a+b;
	pro=a*b;
	diff=a-b;
	div=a/b;
	printf("|-----------------------------------\n");
	printf("|     Operation     |     Result    \n");
	printf("|-----------------------------------\n");
	printf("|     Addition      |        %f      \n",sum);
	printf("|-----------------------------------\n");
	printf("|    Subtraction    |        %f      \n",diff);
	printf("|-----------------------------------\n");
	printf("|      Product      |        %f      \n",pro);
	printf("|-----------------------------------\n");
	printf("|     Division      |     %f      \n",div);
	printf("|-----------------------------------\n");
	if(a!=b)
	{
		if(a<b) printf("\tSecond Number is Larger\n\n");
		else printf("\tFirst Number is Larger\n\n");
	}
	else printf("Both are equal\n\n");
	a++;
	b++;
	printf("\tIncremented first number=%f\n\n",a);
	printf("\tIncremented Second number=%f\n\n",b);
	return 0;
}
