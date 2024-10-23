#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,days;
	float interest, principal, rate;
	for (i = 0; i < 9999; i++)
	{
		printf("enter loan principal (-1 to end): ");
		scanf_s("%f",&principal);
		if (principal == -1) {
			break;
		}
		printf("enter interest rate :");
		scanf_s("%f", &rate);
		printf("enter term of the loan in days :");
		scanf_s("%d", &days);
		interest = principal * rate * days / 365;
		printf("The interest charge is %.2f\n\n", interest);
	}
}