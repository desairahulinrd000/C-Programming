#include<stdio.h>
main()
{
	float temp;
	printf("Enter the temperature in celcius:");
	scanf("%f",&temp);
	if(temp>35.0)
	{
		printf("It's Hot today, turn on the your fan/AC\n");
	}
	else if(temp>=20 && temp<=35)
	{
		printf("Wow! it's a fine day enjoy\n");
	}
	else if(temp>=5 && temp<20)
	{
		printf("Seems its cold\n");
	}
	else if(temp<5)
	{
		printf("chilled\n");
	}
}
