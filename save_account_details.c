#include <stdio.h>

void saveAccountDetailsToFile(const char *filename, int account_num, int tot_amount, int pin) 
{
    FILE *fptr = fopen(filename, "a");
    if (fptr == NULL) 
    {
        printf("Error opening file!\n");
        return;
    }
    fprintf(fptr, "\n\n");
    fprintf(fptr, "%d\n", account_num);
    fprintf(fptr, "%d\n", tot_amount);
    fprintf(fptr, "%d\n", pin);
    fclose(fptr);
}