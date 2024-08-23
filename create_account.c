#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void createAccount(char *firstn, char *lastn, char *email, double *num, int *pin, int *account_num) 
{
    printf("Enter the first name:\n");
    scanf("%s", firstn);
    printf("Enter the last name:\n");
    scanf("%s", lastn);
    printf("Enter your email:\n");
    scanf("%s", email);
    printf("Enter your mobile number:\n");
    scanf("%lf", num);
    printf("Select the 4-digit pin for this account:\n");
    scanf("%d", pin);

    srand(time(NULL)% 10000000000);
    *account_num = rand();
}