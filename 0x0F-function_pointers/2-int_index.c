#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: input integer array.
 * @size: size of the array.
 * @cmp: pointer to the function to be used
 * to complete values
 *
 * Return: index of the first eement for which the cmp
 * function does not return 0. if no elements matches
 * return -1. if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
