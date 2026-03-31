#include <stdio.h>

/**
 * reset_to_98 - updates the value of an int to 98
 * @n: pointer to the integer
 *
 * Return: Nothing
 */
void reset_to_98(int *n)
{
	*n = 98;
}

/**
 * main - check the function
 *
 * Return: Always 0
 */
int main(void)
{
	int a;

	a = 10;
	reset_to_98(&a);
	printf("%d\n", a);

	return (0);
}
