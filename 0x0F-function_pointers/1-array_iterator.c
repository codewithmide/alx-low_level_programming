#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function as parameter on each element, array.
 * @array: array with the integer to check
 * @size: size of the array of integers
 * @action: function to apply on each element
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
