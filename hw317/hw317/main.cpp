#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    float accountNumber, charges, limit, balance, credits;

    for (i = 0; i < 9999; i++) {
        printf("Enter account number (-1 to end): ");
        scanf_s("%f", &accountNumber);
        if (accountNumber == -1)
            break;

        printf("Enter beginning balance: ");
        scanf_s("%f", &balance);
        printf("Enter total charges: ");
        scanf_s("%f", &charges);
        printf("Enter total credits: ");
        scanf_s("%f", &credits);
        printf("Enter credit limit: ");
        scanf_s("%f", &limit);

        float finalBalance = balance + charges - credits;
        if (finalBalance > limit) {
            printf("Account:\t%.2f\n", accountNumber);
            printf("Credit limit:\t%.2f\n", limit);
            printf("Balance:\t%.2f\n", finalBalance);
            printf("Credit Limit Exceeded.\n\n");
        }

        if (accountNumber != -1)
            printf("\n");
    }
}