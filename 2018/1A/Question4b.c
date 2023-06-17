#include<stdio.h>

int main(void)
{
    char empNo[4], name[15], check[4];
    int attendance, i, j, count, found = 1;

    FILE *company;
    company = fopen("attendance.dat", "r");

    if(company == NULL)
    {
        printf("The file doesn't exist!");
        return -1;
    }
    printf("Enter the employee number to check the attendance : ");
    scanf("%s", &check);

    for(i=0; i<2; i++)
    {
        count = 0;
        fscanf(company, "%s%s", empNo, name);
        for(j=0; j<7; j++)
        {
            fscanf(company, "%d", &attendance);
            if(attendance == 1)
                count++;
        }
        if(strcmp(empNo, check) == 0)
        {
            printf("The total number of attendance is %d", count);
            fclose(company);
            return 1;;
        }
    }

    printf("The data doesn't exists !\n");
    fclose(company);
    return 0;
}
