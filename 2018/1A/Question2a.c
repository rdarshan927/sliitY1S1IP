#include<stdio.h>

int main(void)
{
    float cusTrans[5] ={0};
    int cusAccNo[5]={0};
    char cusName[5][15];
    char cusType[5][1];
    char maxDepCust[15], minWithCust[15];
    float min, max, totDepAmount, totWithAmount;

    //char tType;
    int i;
    float amount;

    for(i=0; i<5; i++)
    {
        printf("Enter the account number : ");
        scanf("%d", &cusTrans[i]);
        printf("Enter the name : ");
        scanf("%d", &cusName[i][15]);
        printf("Enter the transaction type(D/ W) : ");
        scanf(" %c", &cusType[i]);
        printf("Enter the amount : ");
        scanf("%f", &cusTrans[i]);

        if((cusType == 'D') || (cusType == 'd'))
        {
            if(max > 0)
                break;
            max = cusTrans[i];
        }
        else
        {
            if(min >=0)
                break;
            min = cusTrans[i];
        }

        if((cusType == 'W') || (cusType == 'w'))
        {
            totWithAmount += cusTrans[i];
            if(min>cusTrans[i])
            {
                min = cusTrans[i];
                minWithCust = cusName[i][15];
            }
        }
        else if((cusType == 'D') || (cusType == 'd'))
        {
            totDepAmount += cusTrans[i];
            if(max<cusTrans[i])
            {
                max = cusTrans[i];
                maxDepCust = cusName[i][15];
            }
        }
        else
        {
            printf("You have entered an invalid transaction type!");
            continue;;
        }
    }

    printf("Total Deposit amount : %.2f", totDepAmount);
    printf("Total withdrawal amount : %.2f", totWithAmount);
    printf("Name of the customer with maximum deposit amount : %s", maxDepCust);
    printf("Name of the customer with minimum withdrawal amount : %s", minWithCust);




    return 0;
}
