#include<stdio.h>
//completed

int main(void)
{
    char name[15], fName[15];
    int loyNum, fLoyNum, check;
    FILE *loyalCust;
    loyalCust = fopen("loyalty.dat", "r");

    printf("Enter the name : ");
    scanf("%s", &name);
    printf("Enter the loyalty number : ");
    scanf("%d", &loyNum);

    fscanf(loyalCust, "%d%s", &fLoyNum, &fName);

    while(!feof(loyalCust))
    {
        if(loyNum == fLoyNum)
        {
            printf("Loyalty number already exists.");
            fclose(loyalCust);
            return -1;
        }
        else
        {
            fscanf(loyalCust, "%d%s", &fLoyNum, &fName);
        }
    }
    fclose(loyalCust);

    loyalCust = fopen("loyalty.dat", "a");
    fprintf(loyalCust, "%d\t%s\n", loyNum, name);
    printf("The details has been stored succefully.");
    fclose(loyalCust);

    return 0;
}
