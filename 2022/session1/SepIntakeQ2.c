#include<stdio.h>
//completed

int main(void)
{
    int numArr[8] = {0};
    int i, j, n, temp, num;

    for(i=0; i<8; i++)
    {
        printf("Enter value %d : ", i+1);
        scanf("%d", &numArr[i]);
    }

    for(i=0; i<1;)
    {
        printf("Enter number of positions to move right : ");
        scanf("%d", &num);
        if((num > 0) && (num < 8))
        {
            n = num;
            i++;
        }
        else
        {
            printf("You have entered an invalid number.\n");
        }
    }

    for(i=0; i<8; i++)
    {
        printf("%d\t", numArr[i]);
    }
    printf("\n\n");

    for(i=0; i<n; i++)
    {
        temp = numArr[7];

        for(j=7; j>0; j--)
        {
            numArr[j] = numArr[j-1];
        }

        numArr[0] = temp;
    }

    for(i=0; i<8; i++)
    {
         printf("%d\t", numArr[i]);
    }

    return 0;
}
