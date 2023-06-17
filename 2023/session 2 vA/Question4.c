#include<stdio.h>
//Incomplete

int main(void)
{
    int i, hBalcony=0, hNormal=0, fBalcony=0, fNormal=0, sBalcony=0, sNormal=0, noOfPurchase, ticketCount, ticketCount2;
    char mType, tType, tType2;
    FILE *cinema;
    cinema = fopen("ticket.dat", "w");

    if(cinema == NULL)
    {
        printf("The file cannot be created.\n");
        return -1;
    }
    for(i=0; i<5; i++)
    {
        printf("H - Harry Potter\nF - Frozen II\nS - Sherlock Holmes\nEnter the movie type(H/ F/ S) : ");
        scanf(" %c", &mType);
        printf("B - Balcony\nN - Normal\nEnter the ticket type(B/ N) : ");
        scanf(" %c", &tType);
        printf("Enter the number of purchases : ");
        scanf(" %d", &noOfPurchase);

        if((mType == 'H') || (mType == 'F') || (mType == 'S') || (mType == 'h') || (mType == 'f') || (mType == 's'))
        {
            if((mType == 'H') || (mType == 'h'))
            {
                if((tType == 'B') || (tType == 'b'))
                    hBalcony = hBalcony+noOfPurchase;
                else if((tType == 'N') || (tType == 'n'))
                    hNormal = hNormal+noOfPurchase;
                else
                    printf("You have entered an invalid ticket type!\n");
            }
            else if((mType == 'F') || (mType == 'f'))
            {
                if((tType == 'B') || (tType == 'b'))
                    fBalcony = fBalcony+noOfPurchase;
                else if((tType == 'N') || (tType == 'n'))
                    fNormal = fNormal+noOfPurchase;
                else
                    printf("You have entered an invalid ticket type!\n");
                    continue;
            }
            else
            {
                if((tType == 'S') || (tType == 's'))
                    sBalcony = sBalcony+noOfPurchase;
                else if((tType == 'N') || (tType == 'n'))
                    sNormal = sNormal+noOfPurchase;
                else
                    printf("You have entered an invalid ticket type!\n");
                    continue;
            }
        }
        else
        {
            printf("You have entered an invalid movie type!\n");
            i--;
        }
    }
    fprintf(cinema, "%s\t%s\t%d\t%s\t%d\n", "Harry_potter", "Balcony", hBalcony, "Normal", hNormal);
    fprintf(cinema, "%s\t%s\t%d\t%s\t%d\n", "Frozen_II", "Balcony", fBalcony, "Normal", fNormal);
    fprintf(cinema, "%s\t%s\t%d\t%s\t%d\n", "Sherlock_Holmes", "Balcony", sBalcony, "Normal", sNormal);
    fclose(cinema);

    cinema = fopen("ticket.dat", "r");

    if(cinema == NULL)
    {
        printf("The file doesn't exist in the folder!");
        return -1;
    }

    fscanf(cinema, "%c%c%d%c%d", &mType, &tType, &ticketCount, &tType2, &ticketCount2);

    while(!feof(cinema))
    {
        printf("%s\t%s\t%d\t%s\t%d", mType, tType, ticketCount, tType2, ticketCount2);

        fscanf(cinema, "%s%s%d%s%d", &mType, &tType, &ticketCount, &ticketCount2);
    }

    fclose(cinema);

    return 0;
}
