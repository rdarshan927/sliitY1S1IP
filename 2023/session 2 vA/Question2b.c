#include<stdio.h>
//completed

int main(void)
{
    int Smarix[4][4] = {0};
    int i, j;

    for(i=0; i<4; i++)
    {
        printf("Values for row%d\n", i+1);
        for(j=0; j<4; j++)
        {
            printf("\tEnter element %d : ", j+1);
            scanf("%d", &Smarix[i][j]);
        }
    }
    if((Smarix[0][1] == Smarix[1][0]) && (Smarix[0][2] == Smarix[2][0]) && (Smarix[0][3] == Smarix[3][0]) && (Smarix[2][1] == Smarix[1][2]) && (Smarix[3][1] == Smarix[1][3]) && (Smarix[3][2] == Smarix[2][3]))
        printf("It is a symmatric matrix.\n");
    else
        printf("It isn't a symmatric matrix.\n");

    return 0;
}
