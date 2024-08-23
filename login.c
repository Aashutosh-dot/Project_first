#include <stdio.h>

int login(int *account_num, int *pin, int *tot_amount) 
{
    printf("Enter your account number:\n");
    scanf("%d", account_num);
    printf("Enter your 4-digit pin:\n");
    scanf("%d", pin);

    FILE *fptr = fopen("Account_details.txt", "r");
    if (fptr == NULL) 
    {
        printf("Error opening file!\n");
        return 0;
    }

    int stored_account_num, stored_pin, stored_balance;
    while (fscanf(fptr, "%d %d %d", &stored_account_num, &stored_balance, &stored_pin) != EOF)
    {
        if (stored_account_num == *account_num && stored_pin == *pin) 
        {
            *tot_amount = stored_balance;
            fclose(fptr);
            printf("\nLogin successful!\n");
            printf("Your current balance is: %d\n", *tot_amount);
            return 1;
        }
    }

    fclose(fptr);
    printf("Invalid account number or pin. Please try again.\n");
    return 0;
}