#include<stdio.h>
#include<assert.h>
//completed

float calcpayment (int pType, float totalData);
float calcTax(float payment);
void displayDetails(float payment, float tax);

int main(void)
{
    int pkgType, i;
    float dataUsed, payment, tax;

    //getting input
    for(i=0; i<3; i++)
    {
        printf("Enter the package type(1/ 2/ 3/ 4) : ");
        scanf("%d", &pkgType);
        printf("Enter the amount of data had been used : ");
        scanf("%f", &dataUsed);

        payment = calcpayment(pkgType, dataUsed);
        tax = calcTax(payment);

        assert(calcpayment(1, 10) == 17528);
        assert(calcpayment(3, 30) == 21140);

        displayDetails(payment, tax);
    }

    //printf("The payment : %.2f", payment);
    //printf("\nThe tax : %.2f", tax);

    return 0;
}

float calcpayment (int pType, float totalData)
{
    if(pType == 1)
    {
        if(totalData>1.5)
            return 120 + (totalData - 1.5)*2*1024;
        else
            return 120;
    }
    else if(pType == 2)
    {
        if(totalData>5)
            return 350 + (totalData - 5)*1.5*1024;
        else
            return 350;
    }
    else if(pType == 3)
    {
        if(totalData>10)
            return 660 + (totalData - 10)*1*1024;
        else
            return 660;
    }
    else if(pType == 4)
    {
        if(totalData>20)
            return 1200 + (totalData - 20)*0.5*1024;
        else
            return 1200;
    }
    else
    {
        return 0;
    }
}

float calcTax(float payment)
{
    return payment*5.0/100.0;
}

void displayDetails(float payment, float tax)
{
    printf("%s%18s%27s", "Payment", "Tax Amount", "Monthly bill payment");
    printf("\n%.2f%13.2f%19.2f\n\n", payment, tax, payment+tax);
}
