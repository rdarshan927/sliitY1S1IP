#include<stdio.h>
#include<string.h>

int main(void)
{
    float cusTrans[5] = {0};
    int cusAccNo[5] = {0};
    char cusName[5][15];
    char cusType[5][1];
    char maxDepCust[15], minWithCust[15];
    float min=0.0, max=0.0, totDepAmount = 0, totWithAmount = 0;

    int i;
    float amount;

    for (i = 0; i < 5; i++)
    {
        printf("Enter the account number : ");
        scanf("%d", &cusAccNo[i]);
        printf("Enter the name : ");
        scanf("%s", cusName[i]);
        printf("Enter the transaction type (D/W) : ");
        scanf(" %c", &cusType[i][0]);
        printf("Enter the amount : ");
        scanf("%f", &cusTrans[i]);

        if ((cusType[i][0] == 'D') || (cusType[i][0] == 'd'))
        {
            if (max < 0)
                max = cusTrans[i];
        }
        else if ((cusType[i][0] == 'W') || (cusType[i][0] == 'w'))
        {
            totWithAmount += cusTrans[i];
            if (min == 0 || min > cusTrans[i])
            {
                min = cusTrans[i];
                strcpy(minWithCust, cusName[i]);
            }
        }
        else
        {
            printf("You have entered an invalid transaction type!");
            continue;
        }

        if ((cusType[i][0] == 'D') || (cusType[i][0] == 'd'))
        {
            totDepAmount += cusTrans[i];
            if (max < cusTrans[i])
            {
                max = cusTrans[i];
                strcpy(maxDepCust, cusName[i]);
            }
        }
    }

    printf("Total Deposit amount : %.2f\n", totDepAmount);
    printf("Total withdrawal amount : %.2f\n", totWithAmount);
    printf("Name of the customer with maximum deposit amount : %s\n", maxDepCust);
    printf("Name of the customer with minimum withdrawal amount : %s\n", minWithCust);

    return 0;
}
