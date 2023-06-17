#include<stdio.h>

int main(void)
{
    char empNo[4], name[15];
    int attendance, i, j;

    FILE *company;
    company = fopen("attendance.dat", "w");

    for(i=0; i<2; i++)
    {
        printf("Enter the employee number %d : ", i+1);
        scanf("%s", empNo);
        printf("Enter the name : ");
        scanf("%s", name);
        fprintf(company, "%s\t%s\t", empNo, name);

        for(j=0; j<7; )
        {
            printf("Enter attendance status for the day %d : ", j+1);
            scanf("%d", &attendance);
            if((attendance ==0) || (attendance ==1))
            {
                //attendance = temp;
                fprintf(company, "%d\t", attendance);
                j++;
            }
            else
            {
                printf("You have entered an invalid response!\n");
            }
        }
        fprintf(company, "\n");
    }
    fclose(company);

    return 0;
}
