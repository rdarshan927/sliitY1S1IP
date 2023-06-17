#include<stdio.h>
//completed

int main(void)
{
    int ratings[3][4] = {0};
    float avg[3] = {0};
    float  highest;
    int tempTot, hMovie;
    int i, j;

    for(i=0; i<3; i++)
    {
        printf("Enter the rating for movie %d\n", i+1);
        for(j=0; j<4; j++)
        {
            printf("Reviewer %d : ", j+1);
            scanf("%d", &ratings[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        tempTot = 0;
        for(j=0; j<4; j++)
        {
            printf("%d\t", ratings[i][j]);
            tempTot += ratings[i][j];

        }
        avg[i] = tempTot/4.0;
        printf("\n");
    }
    highest = avg[0];

    for(i=0; i<3; i++)
    {
        printf("Average rating for movie %d : %.2f\n", i+1, avg[i]);
        if(highest<avg[i])
            highest = avg[i];
    }

    for(i=0; i<3; i++)
    {
        if(highest == avg[i])
            hMovie = i+1;
    }

    printf("The movie with highest average rating is %d", hMovie);



    return 0;
}
