#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[15], empNo[4], fempNo[4];
    int attendanceStatus, i, j, arrived = 0, day[7];

    FILE *comEmpAttendance;
    comEmpAttendance = fopen("attendance.dat", "w");

    if (comEmpAttendance == NULL)
    {
        printf("The file cannot be created!\n");
        return -1;
    }

    for (j = 0; j < 2; j++)
    {
        printf("Enter the employee number: ");
        scanf("%s", empNo);
        printf("Enter the employee name: ");
        scanf("%s", name);

        fprintf(comEmpAttendance, "%s\t%s\t", empNo, name);

        for (i = 0; i < 7; i++)
        {
            printf("Enter the attendance for day %d: ", i + 1);
            scanf("%d", &attendanceStatus);

            if (attendanceStatus == 1 || attendanceStatus == 0)
            {
                fprintf(comEmpAttendance, "%d\t", attendanceStatus);
                day[i] = attendanceStatus;
            }
            else
            {
                printf("You have entered an invalid attendance status!\n");
                i--; 
            }
        }
        fprintf(comEmpAttendance, "\n");
    }
    printf("\n\n");
    fclose(comEmpAttendance);

    comEmpAttendance = fopen("attendance.dat", "r");

    printf("Enter the employee number to check the number of days the employee reported to work: ");
    scanf("%s", empNo);

    for (i = 0; i < 2; i++)
    {
        fscanf(comEmpAttendance, "%s", fempNo);

        if (strcmp(empNo, fempNo) == 0)
        {
            for (j = 0; j < 7; j++)
            {
                fscanf(comEmpAttendance, "%d", &attendanceStatus);
                arrived += attendanceStatus;
            }
            break;
        }
        //else
        //{
            //fscanf(comEmpAttendance, "%s", fempNo);
        //}
    }
    fclose(comEmpAttendance);

    printf("The number of days the employee reported to work is: %d\n", arrived);

    return 0;
}
