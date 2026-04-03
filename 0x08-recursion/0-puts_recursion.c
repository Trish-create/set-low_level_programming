#include "main.h"
 
/**
 * puts_recursion - Prints a string followed by a new line
 * @s: the string to print
 *
 * Return: void
 */
void puts_recursion(char *s)
{
	if (*s == '\0')
	{
		write(1, "\n", 1);
		return;
	}
	write(1, s, 1);
	puts_recursion(s + 1);
}
