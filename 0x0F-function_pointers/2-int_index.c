#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array of integers to check
 * @size: number of elements on array
 * @cmp: pointer to the function to be used to compare value
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
