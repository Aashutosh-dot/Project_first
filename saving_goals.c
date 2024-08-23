#include <stdio.h>

void savingGoals(int tot_amount, int goal) 
{
    int save = tot_amount - goal;
    printf("\n\n");

    if (save > 0) {
        printf("Great! You have achieved the goal.\n");
        printf("You have exceeded the goal by %d.\n", save);
    } else if (save == 0) {
        printf("Great! You have exactly achieved the goal.\n");
    } else {
        printf("The total amount remaining to achieve your goal is %d.\n", -save);
    }
}