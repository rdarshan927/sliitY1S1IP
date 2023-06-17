#include<stdio.h>

int main(void)
{
    int image[4][4] = {0};
    int i, j;

    for(i=0; i<4; i++)
    {
        printf("Value for row%d\n", i+1);
        for(j=0; j<4; j++)
        {
            printf("Enter element %d : ", j+1);
            scanf("%d", &image[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d\t", image[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(image[i][j] < 55)
                image[i][j] = 0;
            else
                image[i][j] = 1;
        }
    }
    printf("\n\n");

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d\t", image[i][j]);
        }
        printf("\n");
    }
    return 0;
}
