#include<stdio.h>
#include<assert.h>
//#include<math.h>
//completed

float calcpayment(int age, float size);
float calcsubsidy(float payment);
void displayDetails(float payment, float subsidy);

int main(void)
{
    int age, i;
    float size, payment, subSidy;

    for(i=0; i<3;)
    {
        printf("The age of the paddy crops in week : ");
        scanf("%d", &age);

        if((age>=0) && (age<8))
        {
            i++;
        }
        else
        {
            printf("You had entered an invalid age!\n\n");
            continue;
        }

        printf("The paddy field size in Hectare : ");
        scanf("%f", &size);

        payment = calcpayment(age, size);
        //printf("%.2f", payment);
        assert(fabs(calcpayment(4, 10) - 62950.00) < 0.0001);
        assert(fabs(calcpayment(2, 10) - 20400.00) < 0.0001);
        subSidy = calcsubsidy(payment);
        displayDetails(payment, subSidy);
    }

    return 0;
}

float calcpayment(int age, float size)
{
    if((age>=0) && (age<2))
        return size*(0*68+35*60+0*75);
    else if((age>=2) && (age<4))
        return size*(30*68+0*60+0*75);
    else if((age>=4) && (age<6))
        return size*(65*68 + 0*60 + 25*75);
    else if((age>=6) && (age<8))
        return size*(0*68 + 35*60 + 0*75);
    else
        return 0;
}

float calcsubsidy(float payment)
{
    return payment*15.0/100.0;
}

void displayDetails(float payment, float subsidy)
{
    printf("%13s%25s", "Payable amount", "Subsidy amount\n");
    printf("%14.2f%24.2f\n\n", payment-subsidy, subsidy);
}
