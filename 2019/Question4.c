#include<stdio.h>
//completed

int main(void)
{
    char name[15], fName[15];
    int loyalty, fLoyalty;

    FILE *customer;
    customer = fopen("loyalty.dat", "r");

    if(customer == NULL)
    {
        printf("The file doesn't exist ...");
        return -1;
    }

    fscanf(customer, "%d%s", &fLoyalty, fName);

    printf("Enter the name of the customer : ");
    scanf("%s", name);
    printf("Enter the loyalty number : ");
    scanf("%d", &loyalty);



    while(!feof(customer))
    {
        if(loyalty == fLoyalty)
        {
            printf("The data already exist ...");
            fclose(customer);
            return -1;
        }
        fscanf(customer, "%d%s", &fLoyalty, fName);
    }
    fclose(customer);

    customer = fopen("loyalty.dat", "a");
    fprintf(customer, "%d\t%s\n", loyalty, name);
    printf("The data has been stored succefully ...");
    fclose(customer);

    return 0;
}
