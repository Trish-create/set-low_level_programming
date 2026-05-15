#include "main.h"

/**
 * is_prime_helper - Recursive helper to check divisibility
 * @n: the number to check
 * @divisor: the current divisor being tested
 *
 * Return: 1 if no divisor found (prime), 0 otherwise
 */
int is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (is_prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - Checks if an integer is a prime number
 * @n: the integer to check
 *
 * Return: 1 if n is prime, 0 if not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	if (n % 2 == 0)
		return (0);

	return (is_prime_helper(n, 3));
}
