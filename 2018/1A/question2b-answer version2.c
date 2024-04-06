#include <stdio.h>
#include <string.h>

struct Member
{
	int accNo;
	char name[50], type;
	float amount;
} Member[5];

int main(void)
{
	float totalWithdraw=0, totalDeposit=0, minWithdraw=0, maxDeposit=0;
	char nameDeposit[50], nameWithdraw[50];
	
	for ( int a=0; a<5; ++a )
	{
		printf("\nEnter account number\t\t: ");
		scanf("%d", &Member[a].accNo);
		
		printf("Enter the name\t\t\t: ");
		scanf("%s", Member[a].name);
		
		printf("Enter the transaction type (W/D): ");
		scanf(" %c", &Member[a].type);
		
		printf("Enter the amount\t\t: ");
		scanf("%f", &Member[a].amount);
	}
	
	for ( int b=0; b<5; ++b )
	{	
		if ( ( Member[b].type == 'W' || Member[b].type == 'w' ) && minWithdraw == 0 )
		{
			minWithdraw = Member[b].amount;
			strcpy( nameWithdraw, Member[b].name );
		}
		
		if ( Member[b].type == 'W' || Member[b].type == 'w' )
		{
			totalWithdraw += Member[b].amount;
			
			if ( Member[b].amount < minWithdraw )
			{
				minWithdraw = Member[b].amount;
				strcpy( nameWithdraw, Member[b].name );
			}
		}
		
		else if ( Member[b].type == 'D' || Member[b].type == 'd' )
		{
			totalDeposit += Member[b].amount;
			
			if ( Member[b].amount > maxDeposit )
			{
				maxDeposit = Member[b].amount;
				strcpy( nameDeposit, Member[b].name );
			}
		}
	}
	
	printf("\nTotal deposit amount : %.2f", totalDeposit);
	printf("\nTotal withdraw amount : %.2f", totalWithdraw);
	printf("\nName of the customer with the maximum deposit amount is : %s", nameDeposit);
	printf("\nName of the customer with the minimum withdraw amount is : %s", nameWithdraw);
	
	return 0;
}