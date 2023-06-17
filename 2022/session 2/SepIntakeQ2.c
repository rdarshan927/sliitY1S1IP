#include<stdio.h>

int main(void)
{
    int userRating[5] = {0};
    int tempRating, i, j;

    while(tempRating != -99)
    {
        printf("Enter user rating (1-5): ");
        scanf("%d", &tempRating);

        if((tempRating>=1) && (tempRating<=5))
        {
            if(tempRating == 1)
                userRating[0] += 1;
            else if(tempRating == 2)
                userRating[1] += 1;
            else if(tempRating == 3)
                userRating[2] += 1;
            else if(tempRating == 4)
                userRating[3] += 1;
            else
                userRating[4] += 1;
        }
        else
        {
            if(tempRating == -99)
                printf("Program terminated.\n");
            else
                printf("You have entered an invalid user rating, Please try again.\n");
        }
    }

    for(i=0; i<5; i++)
    {
        printf("%d\t", i+1);
        for(j=0; j<userRating[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
