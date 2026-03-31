

#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* Base case: end of string */
	{
		return;
	}

	_print_rev_recursion(s + 1); /* Go to the end first */
	putchar(*s); /* Print characters on the way back */
}
