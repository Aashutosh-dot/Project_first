#include <stdio.h>

void createAccount(char *firstn, char *lastn, char *email, double *num, int *pin, int *account_num);
void displayAccountInfo(char firstn[], char lastn[], char email[], double num, int account_num);
int login(int *account_num, int *pin, int *tot_amount);
int depositAmount(int tot_amount);
int withdrawAmount(int tot_amount);
void savingGoals(int tot_amount, int goal);
void checkBalance(int tot_amount, int account_num);
void saveAccountDetailsToFile(const char *filename, int account_num, int tot_amount, int pin);

int main() 
{
    char firstn[100], lastn[100], email[100];
    int pin = 0, account_num = 0;
    double num = 0;
    int tot_amount = 0, goal = 0;

    int check;
    printf("Do you already have an account? Press 1 for yes and 0 for No: ");
    scanf("%d",&check);
    
    if(check) 
    {
        login(&account_num,&pin,&tot_amount);
    } 
    else 
    {
        createAccount(firstn, lastn, email, &num, &pin, &account_num);
        displayAccountInfo(firstn, lastn, email, num, account_num);
    }

    printf("\n\n\nEnter your saving goal:\n");
    scanf("%d", &goal);

    tot_amount = depositAmount(tot_amount);
    tot_amount = withdrawAmount(tot_amount);

    saveAccountDetailsToFile("Account_details.txt", account_num, tot_amount, pin);

    savingGoals(tot_amount, goal);
    checkBalance(tot_amount, account_num);

    return 0;
}