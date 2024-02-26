#include <stdio.h>
#include <assert.h>

float calcPayment(float medicalCharge, int type, int days);
float calcDiscount(char seniorCitizen, char loyaltyMember);

void testCalcPayment()
{
	assert(calcPayment(30000.00, 2, 5) == 155000.00);
	assert(calcPayment(50000.00, 3, 2) == 114000.00);
}

int main(void)
{
	testCalcPayment();
	
	int Days, Type, a;
	float MedicalCharge;
	char Senior, Loyalty;
    float payment, discount;
	
	for ( a=1; a<=5; ++a )
	{
		printf("Enter the medical charge : ");
		scanf("%f", &MedicalCharge);
		
		printf("Enter the accommodation type : ");
		scanf("%d", &Type);
		
		printf("Enter the number of days stayed : ");
		scanf("%d", &Days);
		payment = calcPayment(MedicalCharge, Type, Days);
		printf("Payment of an inpatient is Rs. %.2f\n", payment);
		
		printf("Is the inpatient a Senior Citizen (Y/N)? ");
		scanf(" %c", &Senior);
		
		printf("Is the inpatient a Loyalty Citizen (Y/N)? ");
		scanf(" %c", &Loyalty);
		
		// printf("Discount is Rs. %.2f", calcDiscount(Senior, Loyalty));
        discount = payment * (calcDiscount(Senior, Loyalty)/100.0);
		
		printf("\nNet hospital payment amount is Rs. %.2f\n\n", payment - discount);
	}

	return 0;
}

float calcPayment(float medicalCharge, int type, int days)
{
	if ( type==1 )
	{
		float payment = medicalCharge + (17000*days);
		return payment;
	}
	
	else if ( type==2 )
	{
		float payment = medicalCharge + (25000*days);
		return payment;
	}
	
	else if ( type==3 )
	{
		float payment = medicalCharge + (32000*days);
		return payment;
	}
}

float calcDiscount(char seniorCitizen, char loyaltyMember)
{
	// float Payment;
	
	if (seniorCitizen=='Y' && loyaltyMember=='Y')
	{
		// float discount = (15/100.0);
		return 15;
	}
	
	else if (seniorCitizen=='Y' && loyaltyMember=='N')
	{
		// float discount = (5/100.0);
		return 5;
	}
	
	else if (seniorCitizen=='N' && loyaltyMember=='Y')
	{
		// float discount = (10/100.0);
		return 10;
	}
	
	else if (seniorCitizen=='N' && loyaltyMember=='N')
	{
		// float discount = 0;
		return 0;
	}
}