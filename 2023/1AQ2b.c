#include <stdio.h>

int main(){
    int maze[5][5] = {0};
    int obstacle[5][2];
    int i, j;

    for(i = 0; i < 5; i++){
        printf("Enter the location of obstacle %d : ", i + 1);
        scanf("%d%d", &obstacle[i][0], &obstacle[i][1]);

        if(obstacle[i][0] > 4 || obstacle[i][1] > 4 || obstacle[i][0] < 0 || obstacle[i][1]  < 0) {
            i--;
            printf("You have entered an invalid place! try again ...\n");
            continue;
        }

        for(j = 0; j < i; j++) {
            if(obstacle[i][0] == obstacle[j][0] && obstacle[i][1] == obstacle[j][1]) {
                printf("You've already entered an obstacle at (%d, %d). Please enter a different location.\n", obstacle[i][0], obstacle[i][1]);
                i--;
                return -1;
            }
        }

        maze[obstacle[i][0]][obstacle[i][1]] = 1;
    }


    return 0;
}
