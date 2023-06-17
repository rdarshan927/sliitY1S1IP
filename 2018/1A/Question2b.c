#include<stdio.h>
//completed

int main(void)
{
    char ledBulb[4][4];
    char check;
    int i, j;

    for(i=0; i<4; i++)
    {
        printf("Enter the colour for row %d\n", i+1);
        for(j=0; j<4;)
        {
            printf("Enter the colour of coloumn %d (R/ G/ B) : ", j+1);
            scanf(" %c", &check);

            if((check == 'R') || (check == 'G') || (check == 'B'))
            {
                ledBulb[i][j] = check;
                j++;
            }
            else
            {
                printf("You have entered an invalid colour !\n");
            }
        }
    }
    printf("\n\n");
    for(i=0; i<4; i++)
    {

        for(j=0; j<4; j++)
        {
            printf("%c\t", ledBulb[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0; i<4; i++)
    {

        for(j=0; j<4; j++)
        {
            if(ledBulb[i][j] == 'R')
                printf("[%d,%d]", i, j);
        }
        //printf("\n");
    }

    return 0;
}
