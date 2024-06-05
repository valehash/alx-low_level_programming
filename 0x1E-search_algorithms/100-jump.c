#include "search_algos.h"
/**
  * min - Function to find the minimum value
  * @a: first value to compare
  * @b: second value to conpare
  * Return: The lower value
  */
int min(size_t a, size_t b)
{
	if (a < b)
		return ((int) a);
	else
		return ((int) b);
}


/**
 * jump_search - function to search for the index in a list
 * @array: The head of the list
 * @size: The size of the array
 * @value: The value being searched for
 * Return: returns address of the new elemenet or NULL if it fails
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0;
	int b = sqrt(size);
	/* int l_min; */

	if (!array)
	{
		return (-1);
	}

	/* l_min = array[min(b, size) -1]; */

	/* while ((l_min) < value) */
	while (array[b] < value)
	{
		a = b;
		b = b + sqrt(size);

		if (a >= size)
		{
			break;
		}
	}
	while (array[a] < value)
	{
		a =  a + 1;
		if ((int) a == min(b, size))
		break;
	}

	if (array[a] == value)
		return (a);

	return (-1);
}
