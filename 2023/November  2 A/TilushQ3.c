#include <stdio.h>
#include <assert.h>

float calcPayment( float medicalCharge, int type, int days );
float calcDiscount( char seniorCitizen, char loyaltyMember );

void testCalcPayment()
{
	assert( calcPayment( 30000.00, 2, 5 ) == 155000.00 );
	assert( calcPayment( 50000.00, 3, 2 ) == 114000.00 );
}

int main(void)
{
	testCalcPayment();
	
	int Days, Type, a;
	float MedicalCharge, Payment, Discount;
	char Senior, Loyalty;
	
	for ( a=1; a<=5; ++a )
	{
		printf("Enter the medical charge : ");
		scanf("%f", &MedicalCharge);
		
		printf("Enter the accommodation type : ");
		scanf("%d", &Type);
		
		while ( calcPayment( MedicalCharge, Type, Days ) == -1 )
		{
			printf("\nEnter the accommodation type : ");
			scanf("%d", &Type);
		}
		
		printf("Enter the number of days stayed : ");
		scanf("%d", &Days);
		
		Payment = calcPayment( MedicalCharge, Type, Days );
		printf("\nPayment of an inpatient is Rs. %.2f\n", Payment);
		
		printf("\nIs the inpatient a Senior Citizen (Y/N)? ");
		scanf(" %c", &Senior);
		
		printf("Is the inpatient a Loyalty Citizen (Y/N)? ");
		scanf(" %c", &Loyalty);
		
		while ( calcDiscount( Senior, Loyalty ) == -1 )
		{
			printf("\nIs the inpatient a Senior Citizen (Y/N)? ");
			scanf(" %c", &Senior);
			
			printf("Is the inpatient a Loyalty Citizen (Y/N)? ");
			scanf(" %c", &Loyalty);
		}
		
		Discount = Payment * calcDiscount( Senior, Loyalty );
		printf("\nDiscount is Rs. %.2f", Discount);
		
		printf("\nNet hospital payment amount is Rs. %.2f\n\n\n", Payment - Discount);
	}

	return 0;#include <stdio.h>
#include <assert.h>

float calcPayment( float medicalCharge, int type, int days );
float calcDiscount( char seniorCitizen, char loyaltyMember );

void testCalcPayment()
{
	assert( calcPayment( 30000.00, 2, 5 ) == 155000.00 );
	assert( calcPayment( 50000.00, 3, 2 ) == 114000.00 );
}

int main(void)
{
	testCalcPayment();
	
	int Days, Type, a;
	float MedicalCharge, Payment, Discount;
	char Senior, Loyalty;
	
	for ( a=1; a<=5; ++a )
	{
		printf("Enter the medical charge : ");
		scanf("%f", &MedicalCharge);
		
		printf("Enter the accommodation type : ");
		scanf("%d", &Type);
		
		while ( calcPayment( MedicalCharge, Type, Days ) == -1 )
		{
			printf("\nEnter the accommodation type : ");
			scanf("%d", &Type);
		}
		
		printf("Enter the number of days stayed : ");
		scanf("%d", &Days);
		
		Payment = calcPayment( MedicalCharge, Type, Days );
		printf("\nPayment of an inpatient is Rs. %.2f\n", Payment);
		
		printf("\nIs the inpatient a Senior Citizen (Y/N)? ");
		scanf(" %c", &Senior);
		
		printf("Is the inpatient a Loyalty Citizen (Y/N)? ");
		scanf(" %c", &Loyalty);
		
		while ( calcDiscount( Senior, Loyalty ) == -1 )
		{
			printf("\nIs the inpatient a Senior Citizen (Y/N)? ");
			scanf(" %c", &Senior);
			
			printf("Is the inpatient a Loyalty Citizen (Y/N)? ");
			scanf(" %c", &Loyalty);
		}
		
		Discount = Payment * calcDiscount( Senior, Loyalty );
		printf("\nDiscount is Rs. %.2f", Discount);
		
		printf("\nNet hospital payment amount is Rs. %.2f\n\n\n", Payment - Discount);
	}

	return 0;
}

float calcPayment( float medicalCharge, int type, int days )
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
	
	else
	{
		printf("Invalid Accommodation type!");
		return -1;
	}
}

float calcDiscount( char seniorCitizen, char loyaltyMember )
{
	if ( seniorCitizen=='Y' && loyaltyMember=='Y' )
	{
		float discount = (15/100.0);
		return discount;
	}
	
	else if ( seniorCitizen=='Y' && loyaltyMember=='N' )
	{
		float discount = (5/100.0);
		return discount;
	}
	
	else if ( seniorCitizen=='N' && loyaltyMember=='Y' )
	{
		float discount = (10/100.0);
		return discount;
	}
	
	else if ( seniorCitizen=='N' && loyaltyMember=='N' )
	{
		float discount = 0;
		return discount;
	}
	
	else
	{
		printf("Invalid Selection!");
		return -1;
	}
}
}

float calcPayment( float medicalCharge, int type, int days )
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
	
	else
	{
		printf("Invalid Accommodation type!");
		return -1;
	}
}

float calcDiscount( char seniorCitizen, char loyaltyMember )
{
	if ( seniorCitizen=='Y' && loyaltyMember=='Y' )
	{
		float discount = (15/100.0);
		return discount;
	}
	
	else if ( seniorCitizen=='Y' && loyaltyMember=='N' )
	{
		float discount = (5/100.0);
		return discount;
	}
	
	else if ( seniorCitizen=='N' && loyaltyMember=='Y' )
	{
		float discount = (10/100.0);
		return discount;
	}
	
	else if ( seniorCitizen=='N' && loyaltyMember=='N' )
	{
		float discount = 0;
		return discount;
	}
	
	else
	{
		printf("Invalid Selection!");
		return -1;
	}
}