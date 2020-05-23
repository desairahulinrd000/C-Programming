#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
	char str1[100],ch;
	int i,l1,ctr=0;
	printf("Enter the string:");
	fgets(str1,100,stdin);
	printf("Enter the character to be counted:");
	scanf("%c",&ch);
	for(i=0;str1[i]!='\0';i++)
	{
		if(ch==str1[i])
		{
			ctr+=1;
		}
	}
	printf("Frequency of character %c is %d in %s\n",ch,ctr,str1);
}
	
