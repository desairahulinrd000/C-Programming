#include<stdio.h>
main()
{
	char s[100];
	printf("Read a paragraph and display the same\n");
	printf("Enter any paragraph:");
	scanf("%[^\n]%*c",&s);
	printf("Your Paragraph was:\n");
	printf("%s\n",s);
	}	
