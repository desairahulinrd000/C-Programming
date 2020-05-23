#include<stdio.h>
#include<string.h>
main()
{
	char str[1000];
	int i,len; 
	printf("Ascii Decoder of each character\n");
	printf("Enter any Strin:");
	scanf("%s",&str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		printf("%c=%d\n",str[i],int(str[i]));
	}
}
