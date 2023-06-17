#include<stdio.h>
//completed

int main(void)
{
    float rainfall[7] = {0};
    int i;
    float avg;

    for(i=0; i<7; i++)
    {
        printf("Input the rainfall of day %d: ", i+1);
        scanf("%f", &rainfall[i]);
    }

    for(i=0; i<7; i++)
    {
        printf("Day 1 to %d\n", i+1);
        avg = (rainfall[0] + rainfall[i])/ 2.0;
        printf("\nAverage rainfall : %.2fmm\n", avg);
        if(rainfall[0] > rainfall[i])
        {
            printf("Maximum rainfall : %.1fmm\n", rainfall[0]);
            printf("Minimum rainfall : %.1fmm\n\n", rainfall[i]);
        }
        else
        {
            printf("Maximum rainfall : %.1fmm\n", rainfall[i]);
            printf("Minimum rainfall : %.1fmm\n\n", rainfall[0]);
        }
    }

    return 0;
}
