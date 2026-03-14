#include <stdio.h>

/* Function prototype */
void fizz_buzz(void);

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - Prints numbers from 1 to 100 following FizzBuzz rules
 *
 * Return: Nothing
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}

	printf("\n");
}
