#include<stdio.h>

int main(void)
{
    char courseType;
    int i, hospitality=0, marketing=0, finance=0, totalRegStudents=0;
    float totalRegFee;

    printf("H - Diploma in Hospitality Management\nM - Diploma in Marketing\nF - Diploma in Finance\nN - There are no more registrations to be done\n");
    printf("Enter the course Type : ");
    scanf(" %c", &courseType);

    for(i=0; i<100; i=totalRegStudents)
    {
        if((courseType == 'H') || (courseType == 'h'))
        {
            totalRegFee = totalRegFee + 1500.00;
            hospitality++;
        }
        else if((courseType == 'M') || (courseType == 'm'))
        {
            totalRegFee = totalRegFee + 2000.00;
            marketing++;
        }
        else if((courseType == 'F') || (courseType == 'f'))
        {
            totalRegFee = totalRegFee + 2500.00;
            finance++;
        }
        else if((courseType == 'N') || (courseType == 'n'))
        {
            printf("There are %d registrations done.", totalRegStudents);
            return -1;
        }
        else
        {
            printf("You have entered an invalid type.\n");
        }
        totalRegStudents = hospitality + marketing + finance;
    }

    return 0;
}
