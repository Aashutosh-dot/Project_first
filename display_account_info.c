#include <stdio.h>

void displayAccountInfo( char firstn[], char lastn[], char email[], double num, int account_num) 
{
    printf("\n\n\nWelcome!\n");
    printf("Your account info is:\n");
    printf("First name: %s\n", firstn);
    printf("Last name: %s\n", lastn);
    printf("Email: %s\n", email);
    printf("Mobile Number: %.0lf\n", num);
    printf("Account number: %d\n", account_num);
}