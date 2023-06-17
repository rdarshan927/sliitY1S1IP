#include<stdio.h>

int main(void)
{
    int i, j, lines;
    char firstCh, secondCh;

    printf("Enter 1st character :");
    scanf(" %c", &firstCh);
    printf("Enter 2nd character :");
    scanf(" %c", &secondCh);
    printf("Enter numeber of lines :");
    scanf("%d", &lines);

    for(i=0; i<lines; i++)
    {
        for(j=0; j<i+1; j++)
        {
            if(j%2 == 0)
                printf("%c", firstCh);
            else
                printf("%c", secondCh);
        }
        printf("\n");
    }

    return 0;
}
