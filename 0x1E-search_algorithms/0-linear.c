#include "search_algos.h"

/**
 * linear_search - Searches for a value in an integer array
 * @array: input array
 * @size: Size of array
 * @value: Value to search for
 * Return: Index of value else -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	int a;

	if (array == NULL)
		return (-1);

	for (a = 0; a < (int)size; a++)
	{
		printf("Value checked array[%u] = [%d]\n", a, array[a]);
		if (value == array[a])
			return (a);
	}
	return (-1);
}
