#include<stdio.h>
#include<assert.h>
#include<math.h>
//completed

float calclnterest(int FDType,float depositAmount);
float calcTax(float annuallnterest);
void displayDetails(float interest, float taxAmount);

int main(void)
{
    float depAmount, annualInterest, withHoldingTax;
    int fixedDepType;

    while(fixedDepType != -1)
    {
        printf("1 - 12 months FD\n2 - 24 months FD\n3 - 36 months FD\n4 - 48 months FD\nEnter the fixed deposit type(1/ 2/ 3/ 4) : ");
        scanf("%d", &fixedDepType);

        if(fixedDepType == -1)
            break;
        printf("Enter the deposited amount : ");
        scanf("%f", &depAmount);

        annualInterest = calclnterest(fixedDepType, depAmount);
        withHoldingTax = calcTax(annualInterest);
        displayDetails(annualInterest, withHoldingTax);

        assert(fabs(calclnterest(1, 1000) - 160) < 0.0001);
        assert(fabs(calclnterest(2, 1000) - 150) < 0.0001);

        //printf("The annual interest is %.2f", annualInterest);
    }

    return 0;
}

float calclnterest(int FDType, float depositAmount)
{
    switch(FDType)
    {
        case 1:
            return depositAmount * 16.0/100.0;
            break;
        case 2:
            return depositAmount * 15.0/100.0;
            break;
        case 3:
            return depositAmount * 15.5/100.0;
            break;
        case 4:
            return depositAmount * 17.5/100.0;
            break;
        default:
            return 0;
    }
}

float calcTax(float annuallnterest)
{
    return annuallnterest * 5.0/100.0;
}

void displayDetails(float interest, float taxAmount)
{
    printf("\nAnnual Interest\tTax Amount\tAmount Payable\n");
    printf("%15.2f%11.2f%20.2f\n\n\n", interest, taxAmount, interest-taxAmount);
}
