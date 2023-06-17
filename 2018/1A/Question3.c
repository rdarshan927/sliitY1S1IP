#include<stdio.h>
#include<assert.h>
//completed

float calDiscount(int time, float totAmount);
void testCalDiscount();
void displayGift(float finalTot);

int main(void)
{
    float totAmount, discount, finalTot;
    int time=0;

    printf("(16:00 - 19:00) - 16/ 17/ 18\n(20:00 - 22:00) - 20/ 21\nEnter the time : ");
    scanf("%d", &time);
    if((time == 16) || (time == 17) | (time == 18) | (time == 20) | (time == 21))
    {
        printf("Enter the total amount spent : ");
        scanf("%f", &totAmount);

        discount = calDiscount(time, totAmount);

        testCalDiscount();
        finalTot = totAmount - discount;

        printf("The discount is : %.2f", discount);
        displayGift(finalTot);
    }
    else
    {
        printf("You have entered an invalid time");
        return -1;
    }

    return 0;
}

float calDiscount(int time, float totAmount)
{
    if((time >= 16) && (time < 19))
    {
        if((totAmount>=2500) && (totAmount<5000))
            return totAmount*7.0/100.0;
        else if(totAmount >= 5000)
            return totAmount*10.0/100.0;
        else
            return 0;
    }
    else if((time >= 20) && (time < 22))
    {
        if((totAmount>=2500) && (totAmount<5000))
            return totAmount*9.0/100.0;
        else if(totAmount >= 5000)
            return totAmount*12.0/100.0;
        else
            return 0;
    }
    else
    {
        return 0;
    }
}

void testCalDiscount()
{
	assert(fabs(calDiscount(16, 3000) - 210.0) < 0.0001);
	assert(fabs(calDiscount(21, 5000) - 600.0) < 0.0001);
}

void displayGift(float finalTot)
{
    if((finalTot>3000) && (finalTot<4999))
        printf("\nEligible for the free gift - Pack of 6 eggs.");
    else if((finalTot>5000) && (finalTot<6999))
        printf("\nEligible for the free gift - 1Kg sugar.");
    else if(finalTot>=7000)
        printf("\nEligible for the free gift - Packet of milk");
    else
        printf("\nEligible for the free gift - nothing");
}
