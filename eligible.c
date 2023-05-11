#include <stdio.h>

/**
 * main - Asks for age and tells if Adult or not.
 *
 * Return: Always 0 (Success)
 *
 * Destiny Saturday (DestinedCodes)
 * 10-05-2023
*/

int main(void)
{
	char name[5];
	int age;

	printf("What is your name? ");
	scanf("%s", name);
	printf("Hello %s, how old are you? ", name);
	scanf("%d", &age);

	if (age >= 18)
	{
		printf("Congratulation %s!!, you are eligible to vote :)\n", name);
	} else
	{
		printf("Sorry %s you are not eligible to vote :(\n", name);
	}
}
