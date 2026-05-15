#include "main.h"

/**
 * puts_half - Prints the second half of a string,
 *             followed by a new line
 * @str: The string to print
 *
 * Description: If the number of characters is odd,
 *              prints the last n characters, where
 *              n = (length_of_the_string - 1) / 2
 */
void puts_half(char *str)
{
    int len = 0;
    int i;

    /* Find the length of the string */
    while (str[len] != '\0')
        len++;

    /* Start index for printing the second half */
    if (len % 2 == 0)
        i = len / 2;
    else
        i = (len + 1) / 2;

    /* Print from the calculated start index to the end */
    for (; i < len; i++)
        _putchar(str[i]);

    /* Print a newline at the end */
    _putchar('\n');
}
