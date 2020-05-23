#include<stdio.h>
#include<string.h>
main()
{
	char str1[100],str2[100],str3[100];
	printf("Enter the string 1:");
	scanf("%s",&str1);
	printf("Enter the string 2:");
	scanf("%s",&str2);
	printf("Strings before swapping are:\n");
	printf("String 1=%s\n",str1);
	printf("String 2=%s\n",str2);
	strcpy(str3,str1);
	strcpy(str1,str2);
	strcpy(str2,str3);
	printf("Strings after swapping are:\n");
	printf("String 1=%s\n",str1);
	printf("String 2=%s\n",str2);
}
	
