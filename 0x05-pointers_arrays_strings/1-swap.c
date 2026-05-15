#include <stdio.h>

void swap_int(int *a, int *b); /* prototype */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int x = 5;
	int y = 10;

	printf("Before swap: x=%d, y=%d\n", x, y);

	swap_int(&x, &y);

	printf("After swap: x=%d, y=%d\n", x, y);

	return 0;
}

