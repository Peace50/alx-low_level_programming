#include "main.h"
/**
 * swap_int - Swaps the values of two integers.
 *
 * Description:
 * This function takes two integer pointers as input and swaps the values
 * of the integers they point to.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap_int(int *a, int *b)
{
	int temp;

	if (a != NULL && b != NULL)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}

