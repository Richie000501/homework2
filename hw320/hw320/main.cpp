#include <stdio.h>
#include <stdlib.h>
int main()
{
	int hours, i;
	float salary;
	for (i = 0; i < 99; i++)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%d", &hours);
		if (hours == -1)
			break;
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &salary);
		if (hours >= 0 && hours <= 40) {
			salary = salary * hours;
			printf("Salary is $%.2f\n\n", salary);
		}
		else
		{
			salary = (hours - 40) * 1.5 * salary + 400;
			printf("Salary is $%.2f\n\n", salary);
		}
	}
}
