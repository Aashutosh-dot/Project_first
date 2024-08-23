#include <stdio.h>

void checkBalance(int tot_amount, int account_num) 
{
    int check;
    printf("\n\n\nDo you want to check your balance? (Press 1 for Yes and Press 0 for No)\n");
    scanf("%d", &check);
    if (check == 1) 
    {
        printf("Account number: %d\n", account_num);
        printf("Total Balance in this account: %d\n", tot_amount);
    }
}