#include<stdio.h>
//completed

int main(void)
{
    char pizzaType, pizzaSize, vegRegular, vegLarge, cRegular, cLarge, sRegular, sLarge;
    int noOfPizza, transactionId = 0;
    FILE *pizzaShop;
    pizzaShop = fopen("orders.dat", "a");

    while(pizzaType != '-')
    {
        transactionId++;
        printf("Enter type of the pizza (V/C/S): ");
        scanf(" %c", &pizzaType);
        if(pizzaType == '-')
            break;

        printf("Enter size of the pizza (R/L): ");
        scanf(" %c", &pizzaSize);
        printf("Enter number of pizza : ");
        scanf("%d", &noOfPizza);

        if((pizzaType == 'V') || (pizzaType == 'C') || (pizzaType == 'S') || (pizzaType == 'v') || (pizzaType == 'c') || (pizzaType == 's'))
        {
            if((pizzaSize == 'R') || (pizzaSize == 'L') || (pizzaSize == 'r') || (pizzaSize == 'l'))
                fprintf(pizzaShop, "%d\t%c\t%c\t%d\n", transactionId, pizzaType, pizzaSize, noOfPizza);
            else
                printf("You have entered an invalid pizza size.\n");
        }
        else
        {
            printf("You have entered an invalid pizza type.\n");
        }
    }
    fclose(pizzaShop);

    pizzaShop = fopen("orders.dat", "r");

    fscanf(pizzaShop, "%d %c %c %d", &transactionId, &pizzaType, &pizzaSize, &noOfPizza);

    while(!feof(pizzaShop))
    {
        if((pizzaType == 'V') || (pizzaType == 'v'))
        {
            if((pizzaSize == 'R') || (pizzaSize == 'r'))
                vegRegular += noOfPizza;
            else
                vegLarge += noOfPizza;
        }
        else if((pizzaType == 'C') || (pizzaType == 'c'))
        {
            if((pizzaSize == 'R') || (pizzaSize == 'r'))
                cRegular += noOfPizza;
            else
                cLarge += noOfPizza;
        }
        else
        {
            if((pizzaSize == 'R') || (pizzaSize == 'r'))
                sRegular += noOfPizza;
            else
                sLarge += noOfPizza;
        }
        fscanf(pizzaShop, "%d %c %c%d", &transactionId, &pizzaType, &pizzaSize, &noOfPizza);
    }
    fclose(pizzaShop);

    printf("\nVeggie Pizza\n\tRegular\t-%d\n\tLarge\t-%d", vegRegular, vegLarge);
    printf("\nChicken Pizza\n\tRegular\t-%d\n\tLarge\t-%d", cRegular, cLarge);
    printf("\nSeafood Pizza\n\tRegular\t-%d\n\tLarge\t-%d", sRegular, sLarge);

    return 0;
}
