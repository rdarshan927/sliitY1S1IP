#include<stdio.h>
//completed

int main(void)
{
    char pkgType, addSRequire, addEvent;
    int noOfParticipants;
    float price, addServices;

    while((pkgType != 'G') || (pkgType != 'g') || (pkgType != 'S') || (pkgType != 's') || (pkgType != 'B') || (pkgType != 'b'))
    {
        printf("G - Gold\nS - Silver\nB - Bronze\nEnter the package type : ");
        scanf(" %c", &pkgType);

        if((pkgType == 'G') || (pkgType == 'g'))
        {
            price = 20000;
            break;
        }
        else if ((pkgType == 'S') || (pkgType == 's'))
        {
            price = 15000;
            break;
        }
        else if((pkgType == 'B') || (pkgType == 'b'))
        {
            price = 10000;
            break;
        }
        else
        {
            printf("You have entered an invalid package type.\n");
        }
    }
    printf("Enter number of participants : ");
    scanf("%d", &noOfParticipants);

    price = price * noOfParticipants;
    if(noOfParticipants > 10)
        price = price - (price * 10/100.0);

    while((addSRequire != 'N') && (addSRequire != 'n'))
    {
        printf("Are you interested in additional services (Y/ N) : ");
        scanf(" %c", &addSRequire);

        if((addSRequire == 'Y') || (addSRequire == 'y'))
        {
            printf("C - Camping\nV - Yala visit\nE - Night event\nEnter the services you need : ");
            scanf(" %c", &addEvent);
            if((addEvent == 'C') || addEvent == 'c')
                addServices += 5000;
            else if((addEvent == 'V') || (addEvent == 'v'))
                addServices += 7500;
            else if((addEvent == 'E') || (addEvent == 'e'))
                addServices += 10000;
            else
                printf("You have entered an invalid event type.\n");
        }
        else if((addSRequire == 'N') || (addSRequire == 'n'))
        {
            break;
        }
        else
        {
            printf("You have entered an invalid response, Please try again.\n");
        }
    }
    price = price + addServices;

    printf("\nTotal amount to be paid: Rs. %.2f", price);
    return 0;
}
