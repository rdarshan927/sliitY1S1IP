#include<stdio.h>
//completed

int main(void)
{
    int number, i, tempNo, count=0, one, two, three, four;

    while(count!=4)
    {
        printf("Enter the number : ");
        scanf("%d", &number);

        tempNo = number;
        count = 0;

        while(tempNo != 0)
        {
            tempNo = tempNo/10;
            count ++;
        }
        tempNo = number;

        if(count == 4)
        {
            one = number/1000;
            two = (number/100) %10;
            three = (number/10) %10;
            four = number%10;

            if((one == four) && (two == three))
                printf("\nIt's a palindrome.");
            else
                printf("\nIt's not a palindrome");
        }
        else
        {
            printf("You had entered an invalid number.\n");
        }
    }

    return 0;
}
