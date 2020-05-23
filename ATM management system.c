#include<stdio.h>
unsigned long amount=1000,deposit,withdraw;
int choice,pin,k,upin;
char transaction='y';
main()
{
	printf("welcome to canara bank ATM\n");
	printf("Enter new pin to be generated\n");
	scanf("%d",&upin);
	printf("new pin generated successfully\n");
	while(upin!=pin)
	{
		printf("Enter you pin\n");
		scanf("%d",&pin);
		if(upin!=pin)
			printf("Enter valid pin\n");
		do{
			printf("*************welcome**************\n");
			printf("1.Check Balance\n2.Cash Withdraw\n3.Deposit Cash\n4.Exit\n");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:
					printf("\nYour Balance is %lu RS",amount);
					break;
					case 2:
						printf("\nEnter the amount to be withdrawn:");
						scanf("%lu",&withdraw);
						if(withdraw%100!=0)
						{
							printf("\nEnter the amount in multiples of 100");
						}
						else if(withdraw>(amount-500))
						{
							printf("\nInsufficient balance");
						}
						else
						{
							amount=amount-withdraw;
							printf("\n\nPlease collect your cash");
							printf("\n your current balance is%lu",amount);
						}
						break;
						case 3:
							printf("\n Enter The amount to deposit");
							scanf("%lu",&deposit);
							amount=amount+deposit;
							printf("your balance is %lu",amount);
							break;
							case 4:
								printf("\nthank you");
								break;
								default:
									printf("\n Invalid choice");
								}
								printf("\n\n\n Do you want to have another transaction?(y/n)");
								fflush(stdin);
								scanf("%c",&transaction);
								if(transaction=='n'||transaction=='N')
								k=1;
							}
							while(!k);
							printf("\n\n Thanks");
						}
				
				}
					
							 
