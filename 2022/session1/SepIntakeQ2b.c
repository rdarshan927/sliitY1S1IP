#include<stdio.h>
//completed

int main(void)
{
    int identityArr[4][4] = {0};
    int i, j;

    for(i=0; i<4; i++)
    {
        printf("Values for row%d\n", i+1);
        for(j=0; j<4; j++)
        {
            printf("\tEnter element %d : ", j+1);
            scanf("%d", &identityArr[i][j]);
        }
    }
    if((identityArr[0][0] == identityArr[1][1]) && (identityArr[1][1] == identityArr[2][2]) && (identityArr[2][2] == identityArr[3][3]))
    {
        if((identityArr[0][1] == 0) && (identityArr[0][2]) == 0 && (identityArr[0][3] == 0) && (identityArr[1][2]==0) && (identityArr[1][3]==0) && (identityArr[1][0]==0) && (identityArr[2][0] ==0) && (identityArr[2][1]==0) && (identityArr[2][3]==0) && (identityArr[3][0]==0) && (identityArr[3][1]==0) && (identityArr[3][2]) )
            printf("It is an identity matrix.");
        else
            printf("It is not an identity matrix.");
    }
    else
    {
        printf("It is not an identity matrix.");
    }

    return 0;
}
