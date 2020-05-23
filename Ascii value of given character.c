#include<stdio.h>
void ascii(char c)
{
	printf("ASCII value of %c in Hex=%X\n",c,c);
	printf("ASCII value of %c in Dec=%d\n",c,c);
}
main()
{
	char c;
	printf("Enter the charater who's ASCII value has to be known:");
	scanf("%c",&c);
	ascii(c);
	return 0;
}
