#include<stdio.h>
//completed

int main(void)
{
    int i, hBalcony=0, hNormal=0, fBalcony=0, fNormal=0, sBalcony=0, sNormal=0, ticketCount;
    char mType, tType, tType2;
    FILE *cinema;
    cinema = fopen("ticket.dat", "w");

    if(cinema == NULL)
    {
        printf("The file cannot be created.\n");
        return -1;
    }
    for(i=0; i<5; )
    {
        printf("H - Harry Potter\nF - Frozen II\nS - Sherlock Holmes\nEnter the movie type(H/ F/ S) : ");
        scanf(" %c", &mType);
        printf("B - Balcony\nN - Normal\nEnter the ticket type(B/ N) : ");
        scanf(" %c", &tType);
        printf("Enter the number of purchases : ");
        scanf("%d", &ticketCount);

        if((mType == 'H') || (mType == 'F') || (mType == 'S') || (mType == 'h') || (mType == 'f') || (mType == 's'))
        {
            if((tType == 'B') || (tType == 'N') || (tType == 'b') || (tType == 'n'))
            {
                fprintf(cinema, "%c%c%d\n", mType, tType, ticketCount);
                i++;
            }
            else
            {
                printf("You have entered an invalid ticket type!\n");
            }
        }
        else
        {
            printf("You have entered an invalid movie type!\n");
        }
    }
    fclose(cinema);

    cinema = fopen("ticket.dat", "r");

    fscanf(cinema, " %c %c %d", &mType, &tType, &ticketCount);

    while(!feof(cinema))
    {
        if((mType=='H') || (mType=='h'))
        {
            if((tType=='B') || (tType=='b'))
            {
                hBalcony=hBalcony+ticketCount;
            }
            else
            {
                hNormal=hNormal+ticketCount;
            }
        }
        else if((mType=='F') || (mType=='f'))
        {
            if((tType=='B') || (tType=='b'))
            {
                fBalcony=fBalcony+ticketCount;
            }
            else
            {
                fNormal=fNormal+ticketCount;
            }
        }
        else
        {
            if((tType=='B') || (tType=='b'))
            {
                sBalcony = sBalcony+ticketCount;
            }
            else
            {
                sNormal=sNormal+ticketCount;
            }
        }

        fscanf(cinema, " %c %c %d", &mType, &tType, &ticketCount);
    }

    printf("Harry Potter\n\tBalcony\t\t-%d\n\tNormal\t\t-%d\n", hBalcony, hNormal);
    printf("Frozen-II\n\tBalcony\t\t-%d\n\tNormal\t\t-%d\n", fBalcony, fNormal);
    printf("Sherlock Holmes\n\tBalcony\t\t-%d\n\tNormal\t\t-%d\n", sBalcony, sNormal);

    fclose(cinema);

    return 0;
}
