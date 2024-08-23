#include <stdio.h>

int depositAmount(int tot_amount) 
{
    int dep_amount = 0;
    printf("Enter the amount you want to deposit: ");
    scanf("%d", &dep_amount);

    if (dep_amount < 0) {
        printf("Invalid amount\n");
    } else {
        tot_amount += dep_amount;
        printf("\n\nTotal amount in this account: %d\n", tot_amount);
    }
    return tot_amount;
}