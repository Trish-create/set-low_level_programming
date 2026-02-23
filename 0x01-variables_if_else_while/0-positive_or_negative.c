#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;

    /* Do not change this part */
    srand(time(NULL));
    n = (rand() % 201) - 100; /* Random number between -100 and 100 */

    /* Print the number */
    printf("%d is ", n);

    /* Check if positive, zero, or negative */
    if (n > 0)
    {
        printf("positive\n");
    }
    else if (n == 0)
    {
        printf("zero\n");
    }
    else
    {
        printf("negative\n");
    }

    return (0);
}
