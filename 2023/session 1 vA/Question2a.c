#include<stdio.h>

int main(void)
{
    char strArr[15][1];
    int i, j;

    printf("Enter the text to reverse : ");
    scanf("%s", &strArr);

    for(i=0; i<15; i++)
    {
        printf("%s", strArr[i]);
    }

    return 0;
}
