#include<stdio.h>
//completed

int main(void)
{
    char stuId[15];
    int i, j, answ;
    int answer[5][4] = {0};
    int fileAnswer[5][4] = {0};
    int correctAnswer[4] = {1, 4, 2, 3};

    FILE *marking;

    marking = fopen("answers.dat", "w");

    if(marking == NULL)
    {
        printf("Failded to create the file.");
        return 1;
    }

    for(i=0; i<5; i++)
    {
        printf("Enter the student ID : ");
        scanf("%s", &stuId);
        printf("Enter the answers for student %s\n", stuId);
        for(j=0; j<4;)
        {
            printf("Enter the answer %d : ", j+1);
            scanf("%d", &answ);

            if((answ>=1) && (answ<=5))
            {
                answer[i][j] = answ;
                j++;
            }
            else
            {
                printf("\nYou have entered an invalid marks. Please try again.\n");
            }
        }

        fprintf(marking, "%s", stuId);
        for(j=0; j<4; j++)
        {
            fprintf(marking, "\t%d", answer[i][j]);
        }
        fprintf(marking, "\n");
    }
    fclose(marking);

    marking = fopen("answers.dat", "r");

    for(i=0; i<5; i++)
    {
        int noOfCorrectAnswer = 0;
        fscanf(marking, "%s", &stuId);

        for(j=0; j<4; j++)
        {
            fscanf(marking, "%d", &fileAnswer[i][j]);

            if(fileAnswer[i][j] == correctAnswer[j])
                noOfCorrectAnswer++;
            //printf("\t%d", fileAnswer);
        }
        printf("Student ID : %s\nNumber of correct answers : %d\n\n", stuId, noOfCorrectAnswer);
    }
    fclose(marking);

    return 0;
}
