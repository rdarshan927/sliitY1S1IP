#include<stdio.h>
//completed

int main(void)
{
    char courseType;
    int i, totalStudents = 0, hospitality = 0, marketing = 0, finance = 0;
    float totalRegFee = 0;

    for(i=0; i<10; i++)
    {
        printf("H - Diploma in Hospitality Management\nM - Diploma in Marketing\nF - Diploma in Finance\nN - Registration finished\nEnter the course type :", i+1);
        scanf(" %c", &courseType);

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
            printf("The total number of students registered for the course Diploma in Hospitality Management is %d\n", hospitality);
            printf("The total number of students registered for the course Diploma in Marketing is %d\n", marketing);
            printf("The total number of students registered for the course Diploma in Finance is %d\n", finance);
            printf("The total registration fees earned is %.2f\n", totalRegFee);
            return -1;
        }
        else
        {
            printf("You have entered an invalid course type.\n");
            i--;
        }
    }

    printf("The total number of students registered for the course Diploma in Hospitality Management is %d\n", hospitality);
    printf("The total number of students registered for the course Diploma in Marketing is %d\n", marketing);
    printf("The total number of students registered for the course Diploma in Finance is %d\n", finance);
    printf("The total registration fees earned is %.2f\n", totalRegFee);

    return 0;
}







/*   switch(courseType)
        {
            case 'H':
            case 'h':

            case 'M':
            case 'm':

            case 'F':
            case 'f':

            default:
                printf("")
        }*/
