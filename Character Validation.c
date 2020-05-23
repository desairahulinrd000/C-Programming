#include<stdio.h>
main()
{
	char c;
	printf("Enter a character\n");
	scanf("%c",&c);
	if(c=='a' || c=='e'||c=='i' || c=='o'||c=='u' || c=='A'||c=='E' || c=='I'||c=='O' || c=='U')
	{
		printf("The character %c is vowel\n",c);
	}
	else if('a'<=c && c<='z' || 'A'<=c && c<='Z')
	{
		printf("The character %c is constant\n",c);
	}
	else
	{
		printf("The character is not Alphabet\n");
	}
}
