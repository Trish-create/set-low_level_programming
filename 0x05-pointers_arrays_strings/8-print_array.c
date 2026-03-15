#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers,
 *               followed by a new line
 * @a: The array of integers
 * @n: Number of elements to print
 *
 * Description: Numbers are separated by a comma, followed by a space.
 *              The numbers are printed in the same order as stored in the array.
 */
void print_array(int *a, int n)
{
    int i;

    /* Loop through the array */
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]); /* Print the current element */

        /* Print comma and space if not the last element */
        if (i < n - 1)
            printf(", ");
    }

    /* Print a newline at the end */
    printf("\n");
}
