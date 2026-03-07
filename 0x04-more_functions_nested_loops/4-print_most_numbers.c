#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char *nums = "01356789\n";

	while (*nums)
	{
		_putchar(*nums);
		nums++;
	}
}
