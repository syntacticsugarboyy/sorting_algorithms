#include "sort.h"

/**
 * bubble_sort - Bubbles the sort
 * @array: Array of data to be arranged
 * @size: Number of elements in the array
 *
 * Description: A function that arranges a dataset using bubble sort.
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t index, jndex;
	size_t temp;

	if (size < 2)
	{
		return;
	}

	for (index = 0; index < size - 1; index++)
	{
		for (jndex = 0; jndex < (size - index - 1); jndex++)
		{
			if (array[jndex] > array[jndex + 1])
			{
				temp = array[jndex];
				array[jndex] = array[jndex + 1];
				array[jndex + 1] = temp;

				print_array(array, size);
			}
		}
	}
}
