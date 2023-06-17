#include<stdio.h>

int main(void)
{
    int telNo[5], i;
    float total[5];
    float lCall, iCall, rCharges;

    FILE *phone;
    phone = fopen("chargers.dat", "w");

    if(phone == NULL)
    {
        printf("The file cannot be created !\n");
        return -1;
    }

    for(i=0; i<5; i++)
    {
        printf("Enter the phone number : ");
        scanf("%d", &telNo[i]);
        printf("Enter the local call charges : ");
        scanf("%f", &lCall);
        printf("Enter the international call charges : ");
        scanf("%f", &iCall);
        printf("Enter the roaming charges : ");
        scanf("%f", &rCharges);

        fprintf(phone, "%d\t%.2f\t%.2f\t%.2f\n", telNo[i], lCall, iCall, rCharges);
    }
    fclose(phone);

    phone = fopen("chargers.dat", "r");

    for(i=0; i<5; i++)
    {
        fscanf(phone, "%d%f%f%f", &telNo[i], &lCall, &iCall, &rCharges);
        total[i] = lCall + iCall + rCharges;
    }

    for(i=0; i<5; i++)
    {
        printf("%d\t%.2f\n", telNo[i], total[i]);
    }

    return 0;
}
