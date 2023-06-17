#include<stdio.h>
#include<assert.h>
//#include<math.h>
//completed

float calcRemainingFuel(int vehicleType, float usedFuelQuota);
float calcFuelcost(int vehicleType, float usedFuelQuota);
void displayDetails(int vType, float usedFuelQuota,  float remainingQuota, float cost);

int main(void)
{
    int vehicleType, usedFuelQuota;
    float fuelCost, availableFuelQouta;

    while(vehicleType != -1)
    {
        printf("Enter the Vehicle Type : ");
        scanf("%d", &vehicleType);

        if(vehicleType == -1)
            break;

        printf("Enter the used Fuel quote : ");
        scanf("%d", &usedFuelQuota);

        availableFuelQouta = calcRemainingFuel(vehicleType, usedFuelQuota);
        fuelCost = calcFuelcost(vehicleType, usedFuelQuota);
        displayDetails(vehicleType, usedFuelQuota, availableFuelQouta, fuelCost);
        assert(fabs(calcRemainingFuel(1, 10) - 0) < 0.0001);
        assert(fabs(calcRemainingFuel(2, 15) - 5) < 0.0001);

        //printf("Remaining Fuel Quota is %d litres\n", availableFuelQouta);
        //printf("Fuel cost for the week is Rs.%.2f", fuelCost);
    }

    return 0;
}

float calcRemainingFuel(int vehicleType, float usedFuelQuota)
{
    if(vehicleType == 1)
    {
        if(usedFuelQuota<=5)
            return 5 - usedFuelQuota;
        else
            return 0;
    }
    else if((vehicleType == 2) || (vehicleType == 3))
    {
        if(usedFuelQuota<=20)
            return 20 - usedFuelQuota;
        else
            return 0;
    }
    else if(vehicleType == 4)
    {
        if(usedFuelQuota<=30)
            return 30 - usedFuelQuota;
        else
            return 0;
    }
    else
        return 0;
}

float calcFuelcost(int vehicleType, float usedFuelQuota)
{
    if((vehicleType == 1) || (vehicleType == 2) || (vehicleType == 4))
        return usedFuelQuota * 370.00;
    else if(vehicleType == 3)
        return usedFuelQuota * 510.00;
    else
        return 0;
}

void displayDetails(int vType,float usedFuelQuota, float remainingQuota, float cost)
{
    printf("%12s%15s%20s%15s", "Vehicle Type", "Quota used", "Quota Remaining", "Fuel Cost\n");
    printf("%12d%15.2f%20.2f%15.2f\n\n", vType, usedFuelQuota, remainingQuota, cost);
}
