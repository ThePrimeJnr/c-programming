#include <stdio.h>

/**
 * main - Prints the sizes of different data types
 *
 * Return: Always 0
 *
 * Destiny Saturday (DestinedCodes)
 * 12-05-2023
*/

int main(void)
{
	printf("On my cmputer:\n");
	printf("A char takes up %lu byte(s)\n", sizeof(char));
	printf("An int takes up %lu byte(s)\n", sizeof(int));
	printf("A long int takes up %lu byte(s)\n", sizeof(long int));
	printf("A long long int takes up %lu byte(s)\n", sizeof(long long int));
	printf("A float takes up %lu byte(s)\n", sizeof(float));
	printf("A double takes up %lu byte(s)\n", sizeof(double));
	printf("A long double takes up %lu byte(s)\n", sizeof(long double));

	return (0);
}
