#include<stdio.h>
int main()
{
	char ch;
	int a,b,c;
	while(1)
	{
		printf("Enter two integers:");
		scanf("%d%d",&a,&b);
		getchar();
		c=a+b;
		printf("%d+%d=%d\n",a,b,c);
		printf("Do you want add these elements(y/n)");
		scanf("%c",&ch);
		if(ch=='y')
		continue;
		else
		break;
}
return 0;
}

