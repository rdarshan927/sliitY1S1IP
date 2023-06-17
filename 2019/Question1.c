#include<stdio.h>
//completed

int main(void)
{
    char pizzaSize, cCard, lCard, oOrder;
    int pizzaType, noOfPizza;
    float billAmount = 0, discount = 0, netAmount = 0;

    while(1)
    {
        printf("1 - Classic range\n2 - Signature range\n-1 - Stop purchasing\nEnter the pizza type(1/ 2/ -1) : ");
        scanf("%d", &pizzaType);
        if(pizzaType == -1)
            break;
        printf("Enter the pizza size : ");
        scanf(" %c", &pizzaSize);
        printf("Enter the number of pizza : ");
        scanf("%d", &noOfPizza);

        if(pizzaType == 1)
        {
            if(pizzaSize == 'L')
                billAmount += 1720.0*noOfPizza;
            else if(pizzaSize == 'M')
                billAmount += 975.0*noOfPizza;
            else
                printf("You have entered an invalid pizza size !\n");
        }
        else if(pizzaType == 2)
        {
            if(pizzaSize == 'L')
                billAmount += 1720.0*noOfPizza;
            else if(pizzaSize == 'M')
                billAmount += 975.0*noOfPizza;
            else
                printf("You have entered an invalid pizza size !\n");
        }
        else
        {
            printf("You have entered a invalid pizza type !\n");
        }
        printf("\n");
    }

    printf("\nAre you paying by credit card (Y/ N)? ");
    scanf(" %c", &cCard);
    printf("Are you a loyalty customer (Y/N)? ");
    scanf(" %c", &lCard);
    printf("Is this an online order (Y/ N)? ");
    scanf(" %c", &oOrder);

    if(cCard == 'Y')
        discount = billAmount * 20.0/100.0;
    if(lCard == 'Y')
        discount += billAmount * 15.0/100.0;
    if(oOrder == 'Y')
        discount += billAmount * 5.0/100.0;

    netAmount = billAmount - discount;

    printf("\nTotal bill amount : %.2f\n", billAmount);
    printf("Discount : %.2f\n", discount);
    printf("Net amount : %.2f\n", netAmount);
    return 0;
}
