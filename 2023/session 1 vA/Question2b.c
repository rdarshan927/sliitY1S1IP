#include<stdio.h>
//completed

int main(void)
{
    float salesArr[2][3]={0};
    float highest[2] ={0};
    int i, j;

    for(i=0; i<2; i++)
    {
        printf("Enter the sales amount of sales person %d.\n", i+1);
        for(j=0; j<3; j++)
        {
            printf("\t\t\tProduct %d: " , j+1);
            scanf("%f", &salesArr[i][j]);
            highest[i] = highest[i] + salesArr[i][j];
        }
    }
    printf("\n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%.2f\t", salesArr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    if(highest[1] > highest[0])
        printf("The sales person with the highest sales amount is sales person 2");
    else
        printf("The sales person with the highest sales amount is sales person 1");

    return 0;
}
