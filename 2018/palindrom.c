#include<stdio.h>
#include<math.h>

int main(void)
{
    int i, pow, num, numb, count = 0;
    int numLen[30] = {0};

    printf("Enter the number : ");
    scanf("%d", &num);

    numb = num;

    while(numb != 0)
    {
        numb = numb/10;
        printf("%d\t", numb);
        count++;
    }

   /* if(count>4)
    {
        for(i=0; i<count; i++)
        {
            pow = power(10, count);
            num = num/pow;
            //printf("\n%d", num);
            numLen[i] = num;
            //printf("%d\t", numLen[i]);
        }

        printf("\n%d\n", count);

        for(i=0; i<count; i++)
        {
            //printf("%d\t", numLen[i]);
        }
    }
    else
    {
        printf("You had entered an invalid number. Please re-enter the number.\n");
    }*/

    return 0;
}
