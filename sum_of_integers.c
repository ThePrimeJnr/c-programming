#include <stdio.h>

/**
 * main - Calculates the sum of integers from 1 up till your desired number
 *
 * Return: Always 0 (Success)
 *
 * Destiny Satuday
 * 11-08-2023
*/

int main(void)
{
	int num, count = 1, sum = 1;

	printf("Enter a number: ");
	scanf("%d", &num);

	while (count < num)
	{
		count++;
		sum = sum + count;
	}

	printf("The sumof integers from 1 - %d = %d", num, sum);
}
