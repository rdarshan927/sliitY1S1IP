#include<stdio.h>

float calculateIncrement(int grade, float basicSalary);
float calcTotSalary(float salary, float increment);

int main(void)
{
    int grade;
    float basicSalary, increment, totalSalaray;

    printf("Enter the grade : ");
    scanf("%d", &grade);
    printf("Enter the basic salary : ");
    scanf("%f", &basicSalary);

    increment = calculateIncrement(grade, basicSalary);
    totalSalaray = calcTotSalary(basicSalary, increment);

    printf("Increment : %.2f\n", increment);
    printf("Total Salary : %.2f\n", totalSalaray);

    return 0;
}

float calculateIncrement(int grade, float basicSalary)
{
    if(grade == 1)
        return basicSalary * 10.0/100.0;
    else if(grade == 2)
        return basicSalary * 15.0/100.0;
    else if(grade == 3)
        return basicSalary * 20.0/100.0;
    else
        return 0;
}

float calcTotSalary(float salary, float increment)
{
    return salary + increment;
}
