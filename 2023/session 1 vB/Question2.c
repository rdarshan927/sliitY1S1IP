#include<stdio.h>
//completed

int main(void)
{
    int empCategory, noOfTimes, basicSalary, dailyPayment, noOfWkDays, bonusAmount;
    char again;

    do
    {
        printf("Enter the employee catagerory(1/ 2/ 3) : ");
        scanf("%d", &empCategory);

        if(empCategory == 1)
        {
            printf("Enter the basic salary of the employee : ");
            scanf("%d", &basicSalary);
            printf("Enter the times(1-3) : ");
            scanf("%d", &noOfTimes);
            if((noOfTimes>0) && (noOfTimes<4))
                bonusAmount = basicSalary*noOfTimes;
            else
                printf("You have entered an invalid number of times!");

        }
        else if(empCategory == 2)
        {
            printf("Enter the amount paid daily : ");
            scanf("%d", &dailyPayment);
            printf("Enter the number of working days : ");
            scanf("%d", &noOfWkDays);
            if(noOfWkDays>240)
                bonusAmount = dailyPayment*20;
            else
                bonusAmount = 0;
        }
        else if(empCategory == 3)
        {
            bonusAmount = 50000;
        }
        else
        {
            printf("You have entered na invalid employee type!");
        }

        printf("The bonus amount is : %d\n", bonusAmount);

        printf("Do you want to continue : ");
        scanf(" %c", &again);
        printf("\n");
    }while((again == 'y') || (again == 'Y'));

    return 0;
}
