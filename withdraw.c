#include <stdio.h>

int withdrawAmount(int tot_amount) 
{
    int wit_amount = 0;
    printf("\n\n\nEnter the amount you want to withdraw: ");
    scanf("%d", &wit_amount);

    if (wit_amount < 0) {
        printf("Invalid amount.\n");
    } else if (wit_amount > tot_amount) {
        printf("You don't have enough balance in your account.\n");
    } else {
        tot_amount -= wit_amount;
        printf("\n\nTotal amount remaining in this account: %d\n", tot_amount);
    }
    return tot_amount;
}