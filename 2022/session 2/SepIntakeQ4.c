#include<stdio.h>
#include<string.h>
//completed (2022.sep.se2)

int main(void)
{
    int i, contactNo, fileContactNo, found;
    char name[15], fileName[15];

    FILE *contact;
    contact = fopen("Directory.dat", "w");

    for(i=0; i<5; i++)
    {
        printf("Enter the name : ");
        scanf("%s", &name);
        printf("Enter the contact number : ");
        scanf("%d", &contactNo);

        fprintf(contact, "%s\t%d\n", name, contactNo);
    }
    fclose(contact);

    contact = fopen("Directory.dat", "r");

    printf("\n\nEnter the name for finding the number : ");
    scanf("%s", &name);

    for(i=0; i<5; i++)
    {
        fscanf(contact, "%s%d", &fileName, &fileContactNo);

        if(strcmp(name, fileName) == 0)
        {
            printf("The contact no is %d\n", fileContactNo);
            found = 1;
            break;
        }
    }
    if(found != 1)
        printf("The name doesn't exist in the directory.\n");

    fclose(contact);

    return 0;
}
