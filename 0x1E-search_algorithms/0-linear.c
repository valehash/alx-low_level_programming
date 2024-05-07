#include "search_algos.h"
/**
 * linear_search - function to search for the index in a list
 * @array: The head of the list
 * @size: The size of the array
 * @value: The value being searched for
 * Return: returns address of the new elemenet or NULL if it fails
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array && value)
	{
		for (i = 0; i < size; i++)
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	else
	{
		return (-1);
	}
	return (i);
}
