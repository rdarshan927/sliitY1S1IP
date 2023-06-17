#include<stdio.h>
#include<assert.h>
#include<math.h>

float calcAnnualInterest(float interestRate, float amount);
float findTotalAmount(float interest, float amount);
void testTotalAmount();

int main(void)
{
    float annualIntRate, amount, interest;
    int i;

    printf("Enter the amount : ");
    scanf("%f", &amount);
    printf("Enter the Annual interest rate : ");
    scanf("%f", &annualIntRate);

    for(i=0; i<5; i++)
    {
        interest = calcAnnualInterest(annualIntRate, amount);
        amount = findTotalAmount(interest, amount);
        testTotalAmount();
        printf("Total amount earned at the end of %d year : %.2f\n", i+1, amount);
    }

    return 0;
}

float calcAnnualInterest(float interestRate, float amount)
{
    if(amount>1000000.0)
        return amount*((interestRate+0.5)/100.0);
    else
        return amount*interestRate/100.0;
}

float findTotalAmount(float interest, float amount)
{
    return interest+amount;
}

void testTotalAmount()
{
    assert(fabs(findTotalAmount(1000, 10000) - 11000) < 0.0001);
    assert(fabs(findTotalAmount(100000, 1000000) - 1100000) < 0.0001);
}
