#include <stdio.h>

/**
 * main - Finds the biggest of three numbers
 *
 * Return: Always 0 (Success)
 *
 * Destiny Saturday
 * 11-08-2023
*/

int main(void)
{
	int num1, num2, num3;

	printf("Enter three number: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 > num2 && num1 > num3)
	{
		printf("%d is the biggest of the three numbers\n", num1);
	}
	else if (num2 > num1 && num2 > num3)
	{
		printf("%d is the biggest of the three numbers\n", num2);
	}
	else
	{
		printf("%d is the biggest of the three numbers\n", num3);
	}

	return (0);
}
