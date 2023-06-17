
#include<stdio.h>

int main(void)
{
    char roomType, payM, again;
    int noOfRoom, noOfNight;
    float amount;

    do
    {
        printf("Enter the room type : ");
        scanf(" %c", &roomType);

        if((roomType == 'D') || (roomType == 'S') || (roomType == 'C') || (roomType == 'E') || (roomType == 'P'))
        {
            printf("Enter the number of rooms : ");
            scanf("%d", &noOfRoom);
            printf("Enter the number of nights : ");
            scanf("%d", &noOfNight);
            printf("Enter the payment method(M/ C) : ");
            scanf(" %c", &payM);

            switch(roomType)
            {
                case 'D':
                    amount = 31000 * noOfRoom * noOfNight;
                    break;
                case 'S':
                    amount = 35000 * noOfRoom * noOfNight;
                    break;
                case 'C':
                    amount = 50000 * noOfRoom * noOfNight;
                    break;
                case 'E':
                    amount = 75000 * noOfRoom * noOfNight;
                    break;
                case 'P':
                    amount = 100000 * noOfRoom * noOfNight;
                    break;
            }

            if(payM == 'C')
            {
                amount = amount - (amount * (10.0/100.0));
                printf("The total amount to be paid is %.2f\n\n", amount);
            }
            else if(payM == 'M')
            {
                printf("The total amount to be paid is %.2f\n\n", amount);
            }
            else
            {
                printf("You have entered an invalid payment method !\n");
            }
        }
        else
        {
            printf("You have entered an invalid room type !\n");
        }

        printf("Do you want to continue : ");
        scanf(" %c", &again);
    }while((again == 'Y') || (again == 'y'));

    return 0;
}
