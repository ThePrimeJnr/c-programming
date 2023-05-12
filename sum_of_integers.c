#include <stdio.h>

/**
 * main - Calculates the sum of integers from 1 up till your desired number
 *
 * Return: Always 0 (Success)
 *
 * Destiny Satuday
 * 11-05-2023
*/

int main(void)
{
	int num, count = 0, sum = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	while (count <= num)
	{
		sum = sum + count;
		count++;
	}

	printf("The sum f integers from 1 - %d = %d\n", num, sum);

	return (0);
}
