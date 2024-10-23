#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    float dollars;

    for (i = 0; i < 9999; i++) {
        printf("Enter sales in dollars (-1 to end): ");
        scanf_s("%f", &dollars);

        if (dollars == -1) {
            break;  // Exit the loop if the user enters -1
        }
        else {
            float salary = dollars * 0.09 + 200;  // Calculate salary
            printf("Salary is: $%.2f\n\n", salary);
        }
    }

}