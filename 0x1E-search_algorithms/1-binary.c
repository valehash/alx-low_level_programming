#include "search_algos.h"
/**
 * binary_search - function to search for the index in a list
 * @array: The head of the list
 * @size: The size of the array
 * @value: The value being searched for
 * Return: returns address of the new elemenet or NULL if it fails
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, mid, high, low;

	high = size - 1;
	low = 0;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid =  (low + high) / 2;

		printf("Searching in array: ");

		for (i = low; i <= high; i++)
		{
			if (i < high)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}

